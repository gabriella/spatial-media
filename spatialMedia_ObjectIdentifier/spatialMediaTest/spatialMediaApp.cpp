

#include "spatialMediaApp.h"
#include "poApplication.h"
#include "poSimpleDrawing.h"
#include "poCamera.h"
#include <iostream> 
using namespace std; 
using namespace po; 



// APP CONSTRUCTOR. Create all objects here.
spatialMediaApp::spatialMediaApp() {
	addModifier(new poCamera2D(poColor::black));
    
    //left=right=top=bottm=0;
    // load the three images
    image1 = new smImage( "flood_fill_test_01.raw", 320, 240 );    
    image2 = new smImage( "flood_fill_test_02.raw", 320, 240 );    
    image3 = new smImage( "flood_fill_test_03.raw", 320, 240 );    
    
    // set the source image to the first one
    sourceImage = image1;
    
    // make the labelled image
    labelImage = new smImage (320, 240);     
    
    // register for mouse and key events
    addEvent( PO_MOUSE_MOVE_EVENT, this );
    addEvent( PO_KEY_DOWN_EVENT, this );

}

// APP DESTRUCTOR. Delete all objects here.
spatialMediaApp::~spatialMediaApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void spatialMediaApp::update() {
   

}

// DRAW. Called once per frame. Draw objects here.
void spatialMediaApp::draw() {
	
    po::setColor( poColor::white );
    labelImage ->fastDraw(0,0);
    sourceImage->fastDraw(500, 0);
    
    for(int i=0;i<objectSet.size();i++){
    
    //draw the bounding box here: 
    int left = objectSet[i]->left;
    int right = objectSet[i]->right;
    int top = objectSet[i]->top;
    int bottom=objectSet[i]->bottom;
    
    }
    
    
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void spatialMediaApp::eventHandler(poEvent *event) {
	
    if ( event->type == PO_MOUSE_MOVE_EVENT )
    {

    }
    
    if ( event->type == PO_KEY_DOWN_EVENT )
    { 

        
        if ( event->keyChar == ' ' )
        {
            labelImage->setAllPixels(0);
            processImage();
            objectSet[1]->pixelCount=0;
        }
        
        if ( event->keyChar == '1' )
            sourceImage = image1;
        if ( event->keyChar == '2' )
            sourceImage = image2;
        if ( event->keyChar == '3' )
            sourceImage = image3;
    }
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void spatialMediaApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}


void        spatialMediaApp::processImage()
{
    // start with label equal to 1
    int label = 1;
    
    // scan all pixels, do seed fill for each
    for( int i=0; i<320; i+=1 )
    {
        for( int j=0; j<240; j+=1 )
        {
            if ( seedFill(i,j,label) )
                label += 1;
          //  objectSet[i]->pixelCount=0;
        }
    
    }
    
    // print number of shapes
    printf("number of shapes: %d\n", label  );
    
    // make shapes for every label
    for( int i=0; i<label; i++ )
    {
        smObject* OBJ = new smObject( i );
        objectSet.push_back( OBJ );
        
        
           }
    
    // put pixel into objects (buckets)
    for( int i=0; i<320; i+=1 )
    {
        for( int j=0; j<240; j+=1 )
        {
            // get label at pixel
            int V = labelImage->getPixel(i,j);
            
            // add to pixel to object
            objectSet[V]->acceptPixel(i,j);
          
            
            // amplification, just so labels are visible
            labelImage->setPixel(i,j, V*40 );
            
                     
        }
    }
    for(int i=0;i<label;i++){
        //printf("number of pixels in object %d %d \n",i, objectSet[i]->pixelCount);
        cout<<"number of pixels: "<<objectSet[i]->pixelCount<<endl;
    }
//objectSet->pixelCount=0;
}

bool        spatialMediaApp::seedFill( int x, int y, int label )
{
    // if out of bounds return
    if ( x<0 || x>=320 || y<0 || y>=240 )
        return false;
    
    // if source pixel is black return
    if ( sourceImage->getPixel(x,y)==0 )
        return false;
    
    // if label pixel is not black (already handled) return
    if ( labelImage->getPixel(x,y)!=0 )
        return false;
  
    // set the label pixel
    labelImage->setPixel(x,y,label);
    
    // do seedFill for neighbors
    seedFill(x,y+1,label);
    seedFill(x-1,y,label);
    seedFill(x+1,y,label);
    seedFill(x,y-1,label);
    
    return true;
    
    
}
 

//i have to reset the pixelCount to be 0


