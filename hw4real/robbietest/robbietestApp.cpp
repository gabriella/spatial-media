


/*
 //  load the source image (make sure it's already thresholded)
 //  make a new image, all black (pixels all set to 0), called the label image
 
 
 for every pixel in the image at x,y
 //   if the pixel is not 0
 //       call seedFill at x,y with the current label
 //       increment the current label by 1
 
 
 seedFill( x, y, label )
 // if the source image pixel at x,y is 0, return
 // if the label image pixel at x,y is not 0, return //false
 
 // set the pixel in the label image at x,y to the label value
 
 // call seedFill on the pixel to the north
 // call seedFill on the pixel to the east
 // call seedFill on the pixel to the south
 // call seedFill on the pixel to the west
 
 */



#include <iostream>
#include "robbietestApp.h"
#include "poApplication.h"
#include "poCamera.h"
#include "poSimpleDrawing.h"
//using namespace po;
using namespace std;


// APP CONSTRUCTOR. Create all objects here.
robbietestApp::robbietestApp() {
    addModifier(new poCamera2D(poColor::black));
    
    //    // register for mouse and key events
    addEvent( PO_MOUSE_MOVE_EVENT, this );
    addEvent( PO_KEY_DOWN_EVENT, this );
    //
    //    // make a new smImage
    
    labelImage = new smImage( 320,240 );
    sourceImage = new smImage(320,240);
    
    flood1 = new smImage("flood1.raw",320,240);
    flood2 = new smImage("flood2.raw",320, 240);
    flood3 = new smImage("flood3.raw",320,240);
    
    po::setColor(1,1,1,1);
    height = 240;
    width = 320;
    
    int label=100;
    
    
    //threshold = 20;
}

// APP DESTRUCTOR. Delete all objects here.
robbietestApp::~robbietestApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void robbietestApp::update() {
  
    //  load the source image (make sure it's already thresholded)
    //  make a new image, all black (pixels all set to 0), called the label image
  
    // calcImage();
    for(int i=0;i<flood1->width;i++){
        for(int j=0;j<flood1->height;j++){
            flood1->thresh(i,j);
            //cout<<"here";
            
            //for every pixel in the image at x,y
            //   if the pixel is not 0
            //       call seedFill at x,y with the current label
            //       increment the current label by 1
            
            
            //                   int grayVal=sourceImage->getPixel(i,j);
            //                    cout<<grayVal;
            //                    
            //                   if(grayVal!=0){
            
                      //sourceImage->seedFill(i,j,label);
            
            //  }


        }
    }

    
	for(int i=0;i<labelImage->width;i++){
        for(int j=0;j<labelImage->height;j++){
            int col=0;// = labelImage->getPixel(i,j);
            //    label=grayVal;
            labelImage->setPixel(i,j,col);
        }
    }
            for(int i=0;i<flood1->width;i++){
                for(int j=0;j<flood1->height;j++){
            if(seedFill(i, j, label)==0)
            {label+=1;}
                }
            }

    }
          

// DRAW. Called once per frame. Draw objects here.
void robbietestApp::draw() {
    po::drawFilledRect(0,0,getWindowWidth(), getWindowHeight());       
    if(lastKeyDown=='1'){
        //    
        flood1->fastDraw(100,100);
        //    
        
        //    
        labelImage->fastDraw(600,450);
        
        
        //myImage9->calcThresh1(myImage1,myImage2);
        //        
        //        
    }
    if(lastKeyDown=='2'){
        sourceImage->fastDraw(100,100);
        //        
        //        
        labelImage->fastDraw(600,450);
        //    //    myImage->calcThresh2();
        // threshold=50;
        // myImage10->somethingThere(100,200,300,300);
        
    }
    if(lastKeyDown=='3'){
        //        
        sourceImage->fastDraw(100,100);
        //        /Users/administrator/Documents/pocode/Spatial_Media/hw2/robbiestest/robbietest/AppConfig.cpp
        //myImage6->fastDraw(600,100);
        //        
        labelImage->fastDraw(600,450);
        //       // myImage->calcThresh3();
        // myImage11->somethingThere(100,100, 300,300);
        
        // threshold=23;
    }
    //    //myImage9->calcThresh1();
}



// EVENT HANDLER. Called when events happen. Respond to events here.
void robbietestApp::eventHandler(poEvent *event) {
	
    if ( event->type == PO_MOUSE_MOVE_EVENT )
    {
        mouseX = event->globalPosition.x;
        mouseY = event->globalPosition.y;
        //      //  threshold = mouseX;
        //        
        //        
        //        cout<<threshold <<"\n";
    }
    //    
    if ( event->type == PO_KEY_DOWN_EVENT )
    {
        lastKeyDown = event->keyChar;
        //        //mosmImage->
    }
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void robbietestApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
void robbietestApp::imageTest(smImage image){
    
}

bool robbietestApp::seedFill(int x, int y, int label){
    // seedFill( x, y, label )
    
    // if the source image pixel at x,y is 0, return
    // if the label image pixel at x,y is not 0, return //false
    
    // set the pixel in the label image at x,y to the label value
    
    // call seedFill on the pixel to the north
    // call seedFill on the pixel to the east
    // call seedFill on the pixel to the south
    // call seedFill on the pixel to the west
    
    
    if(sourceImage->getPixel(x,y)==0)
    {
        return     ;
    }
    if(labelImage->getPixel(x,y)!=0)
    {
        return  ;
    
    
    labelImage->setPixel(x,y,label);
    
    seedFill(x,y-1, label);//north
    seedFill(x+1, y, label);//east
    seedFill(x-1, y, label);//west
    seedFill(x, y+1, label);;//sourh
    
}
}
