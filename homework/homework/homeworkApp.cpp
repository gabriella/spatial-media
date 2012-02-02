/*	Created by Administrator on 1/28/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */


#include "homeworkApp.h"
#include "poApplication.h"
#include "poCamera.h"
//#include "poShapeBasics2D.h"
#include "poSimpleDrawing.h"
#include "poTextBox.h"										// include poTextBox.h to be able to use poTextBox
using namespace po;
using namespace std;


//for key events)


// APP CONSTRUCTOR. Create all objects here.
homeworkApp::homeworkApp() {
    addModifier(new poCamera2D(poColor::black));
    //redRect - event what happens with key down
    addEvent(PO_KEY_DOWN_EVENT, this);//keyPressed event
    //redRect->addEvent(PO_MOUSE_OVER_EVENT, this);//mouse over event for changing color of square
   addEvent(PO_MOUSE_OVER_EVENT, this);//mouse over event for changing color of square
    addEvent(PO_MOUSE_MOVE_EVENT, this);
    X = 0;
    Y = 0;
    W=0;
    H=0;
    
    mouseX=0;
    mouseY =0;
    

    //A->setText("the coord is %i %i  \n”", X,Y);
    std::stringstream s;
    s<<"x: "<<X << "y;  " << Y;
    poTextBox* A = new poTextBox(150,150);				// Specify the width and height of the text box (optional)
    A->setText(s.str());
    A->setFont(poGetFont("Helvetica", "Regular"));
               A->setTextSize(30);
               A->textColor = poColor::yellow;
               A->doLayout();
               A->drawBounds = false;
               A->position.set(getWindowWidth()-150, 30,0);
               addChild(A);

   // printf(“the numb is %i %i  \n”, mynumber, myothernumber);
    
    mouseOvr = false;
    
}

// APP DESTRUCTOR. Delete all objects here.
homeworkApp::~homeworkApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void homeworkApp::update() {
	if(mouseOvr == true){
        
        X=mouseX;
        Y=mouseY;
    }
}

// DRAW. Called once per frame. Draw objects here.
void homeworkApp::draw() {
//    int W;
//    int  H;
    //int X; 
    //int Y;
    
    
       drawGrid1(W, H);
    drawGrid2(X,Y);

}


// EVENT HANDLER. Called when events happen. Respond to events here.
void homeworkApp::eventHandler(poEvent *event) {
    
    
    if ( event->type == PO_MOUSE_MOVE_EVENT )
    {
        // capture mouse coordinates    
        mouseX = event->globalPosition.x;
        mouseY = event->globalPosition.y;
        cout<< "mouse is at "<< mouseX<< mouseY;
    }
    

    
	if(event->type==PO_KEY_DOWN_EVENT){
        
       if(event->keyCode==126) {	
           Y=Y-30;
       }
        if(event->keyCode==124){
            X=X+30;   
        }
        if(event->keyCode==123){
            X=X-30;
        }
        if(event->keyCode==125)
        {
            
            Y=Y+30;
        }
        
    }
    
    else if(event->type==PO_MOUSE_OVER_EVENT)
    {
        
       // for (int W=0;W<=getWindowWidth();W=W+30){
       //     for(int H = 0;H<=getWindowHeight();H=H+30)  {
                
                
////
              // if(mouseX>W-5||mouseX<W+5||mouseY>H-5||mouseY<H+5){
                  // if(mouseX<W+10||mouseY<H+10){

                   // isRed = true;
//                   X=mouseX;
//                   Y=mouseY;
                   mouseOvr=!mouseOvr;
                   cout<< "mouseOvr";

              //  }
                
//      else(isRed=false};
           
          // }
        
        
        
//    {
//        redRect->fillColor.set(1,0,0);
//    }
//    else{
//        redRect->fillColor.set(1,1,0.5);
        //}
    }  
}
// MESSAGE HANDLER. Called from within the app. Use for message passing.
void homeworkApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
void homeworkApp::drawGrid1(int W_, int H_){
    //poRectShape* myRect = new poRectShape(10,10);
    //  myRect->position.set(W_, H_,0);
    //myRect->fillColor = poColor::white;
    //addChild(myRect);
    for (int W_=0;W_<=getWindowWidth();W_=W_+30){
        for(int H_ = 0;H_<=getWindowHeight();H_=H_+30)  {
            po::setColor(poColor::white);
            po::drawFilledRect(W_,H_,10,10); 

    
          }
    }
}
void homeworkApp::drawGrid2(int X_, int Y_){
    
//    poRectShape* redRect = new poRectShape(10,10);
//    //redRect->fillColor=poColor::red;
//    redRect->fillColor.set(1,1,0.5);
//    redRect->position.set(X,Y, 0);
//    addChild(redRect);
    //if(isRed == true){
    for (int X_=0;X_<=getWindowWidth();X_=X_+30){
        for(int Y_ = 0;Y_<=getWindowHeight();Y_=Y_+30)  {

    cout<<Y_<<X_;
    
    if(mouseX<X_+10||mouseY<Y_+10){
        
        
        
    po::setColor(poColor::red);

    po::drawFilledRect(X_, Y_,10,10);
  //  po::drawFilledRect(mouseX, mouseY, 10,10);
    }
    }
    
}
}



//how to get the arrow keys to work
//
