

#include "robbietestApp.h"
#include "poApplication.h"
#include "poCamera.h"
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
      myImage1 = new smImage( "forest2.raw", 400, 300 );
     myImage2 = new smImage( "forest2_bear.raw", 400, 300 ); 
    myImage3 = new smImage( "IMG_2476.raw", 400, 300 );
  myImage4 = new smImage( "IMG_2475.raw", 400, 300 ); 
  
   myImage5 = new smImage( "IMG_2478.raw", 400, 300 );
   
  myImage6 = new smImage( "IMG_2477.raw", 400, 300 ); 
 
        myImage7 = new smImage( "IMG_2480.raw", 400, 300 );
     
        myImage8 = new smImage( "IMG_2479.raw", 400, 300 ); 
        
    
    
        myImage9 = new smImage( 400,300 );
        myImage10 = new smImage( 400,300 );
    
        myImage11 = new smImage( 400,300 );
     myImage12 = new smImage( 400,300 );
    
    
    
    //threshold = 20;
}

// APP DESTRUCTOR. Delete all objects here.
robbietestApp::~robbietestApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void robbietestApp::update() {
    switch (lastKeyDown) {
            case '1':
       for(int x=0;x<myImage1->width;x++){
            for(int y=0;y<myImage1->height;y++){
                int back = myImage1->getPixel(x,y);
               int fore= myImage2->getPixel(x,y);
                int diff = abs(back-fore);
                int grayVal = diff;
               //( image3[index] = grayVal)      
                if(grayVal>threshold ){                
                    grayVal=0;      
                }
                else if(grayVal<threshold){
                   grayVal=255;
                }
                myImage9-> setPixel(x,y,grayVal);
//                somethingThere(getWindowWidth()/4, getWindowHeight()/4, getWindowWidth()-getWindowWidth()/4, getWindowHeight()-getWindowHeight()/4);              
                //cout<<myImage9->somethingThere(200,200,400,400);
            }
        }
        break;
                case '2':
                for(int x=0;x<myImage3->width;x++){
                    for(int y=0;y<myImage3->height;y++){
                        int back = myImage3->getPixel(x,y);
                        int fore= myImage4->getPixel(x,y);
                        int diff = abs(back-fore);
                        int grayVal = diff;
                       
                        //( image3[index] = grayVal)      
                        if(grayVal>threshold ){                
                            grayVal=0;      
                        }
                        else if(grayVal<threshold){
                            grayVal=255;
                        }
                        myImage10-> setPixel(x,y,grayVal);
                    }
                }
                break;
            case '3':
                for(int x=0;x<myImage5->width;x++){
                    for(int y=0;y<myImage5->height;y++){
                        int back = myImage5->getPixel(x,y);
                        int fore= myImage6->getPixel(x,y);
                        int diff = abs(back-fore);
                        int grayVal = diff;
                        //( image3[index] = grayVal)      
                        if(grayVal>threshold ){                
                            grayVal=0;      
                        }
                        else if(grayVal<threshold){
                            grayVal=255;
                        }
                        myImage11-> setPixel(x,y,grayVal);
                    }
                }
                break;
            case '4':
                for(int x=0;x<myImage7->width;x++){
                    for(int y=0;y<myImage7->height;y++){
                        int back = myImage7->getPixel(x,y);
                        int fore= myImage8->getPixel(x,y);
                        int diff = abs(back-fore);
                        int grayVal = diff;
                        //( image3[index] = grayVal)      
                        if(grayVal>threshold ){                
                            grayVal=0;      
                        }
                      else if(grayVal<threshold){
                          grayVal=255;
                     }
                    myImage12-> setPixel(x,y,grayVal);
                 }
            }
                break;
    default:
      break;
    //    
    //            cout<<lastKeyDown;
    //    
    //    // write your own 
    //    // background subtraction
    //    // code here
}
}

// DRAW. Called once per frame. Draw objects here.
void robbietestApp::draw() {
    
    // draw the image
       if(lastKeyDown=='1'){
    //    
       myImage1->fastDraw(100,100);
    //    
     myImage2->fastDraw(600,100);
    //    
     myImage9->fastDraw(600,450);
            threshold=22;
           
           myImage9->somethingThere(100,200,300,300);
           
       //myImage9->calcThresh1(myImage1,myImage2);
    //        
    //        
        }
         if(lastKeyDown=='2'){
            myImage3->fastDraw(100,100);
    //        
          myImage4->fastDraw(600,100);
    //        
        myImage10->fastDraw(600,450);
    //    //    myImage->calcThresh2();
             threshold=50;
             myImage10->somethingThere(100,200,300,300);

        }
         if(lastKeyDown=='3'){
    //        
            myImage5->fastDraw(100,100);
    //        /Users/administrator/Documents/pocode/Spatial_Media/hw2/robbiestest/robbietest/AppConfig.cpp
            myImage6->fastDraw(600,100);
    //        
            myImage11->fastDraw(600,450);
    //       // myImage->calcThresh3();
             myImage11->somethingThere(100,100, 300,300);

             threshold=23;
        }
         if(lastKeyDown=='4'){
            myImage7->fastDraw(100,100);
    //    
            myImage8->fastDraw(600,100);
    //        
       myImage12->fastDraw(600,450);
       //  myImage->calcThresh4();
             threshold=50;
             myImage12->somethingThere(100,100, 300,300);

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


