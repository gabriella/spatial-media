/*	Created by Administrator on 1/28/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "HW1App.h"
#include "poApplication.h"
#include "poCamera.h"
//#include "poShapeBasics2D.h"
#include "poSimpleDrawing.h"


// APP CONSTRUCTOR. Create all objects here.
HW1App::HW1App() {
    addModifier(new poCamera2D(poColor::black));

  
    redRect = new poRectShape(X,Y);
    redRect->fillColor.set(1,0,0);
    redRect->position.set(X,Y, 0);
    addChild(redRect);
    redRect->addEvent(PO_KEY_DOWN_EVENT, this);

    
    
    
	
}

// APP DESTRUCTOR. Delete all objects here.
HW1App::~HW1App() {
}

// UPDATE. Called once per frame. Animate objects here.
void HW1App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void HW1App::draw() {
    int W;
   int  H;
    drawGrid1(W, H);
    int X=0;
    int Y=0;
    drawGrid2(X,Y);
               // printf(W);

           // drawGrid1( W,  H);
        }
    
    
	


// EVENT HANDLER. Called when events happen. Respond to events here.
void HW1App::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void HW1App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
void HW1App::drawGrid1(int W_, int H_){
   //poRectShape* myRect = new poRectShape(10,10);
  //  myRect->position.set(W_, H_,0);
    //myRect->fillColor = poColor::white;
    //addChild(myRect);
    for (int W=0;W<=getWindowWidth();W=W+20){
        for(int H = 0;H<=getWindowHeight();H=H+20)  {
            po::setColor(poColor::white);
            po::drawFilledRect(W,H,10,10); 
        }
    }
    }
void HW1App::drawGrid2(int X_, int Y_){
  //  po::setColor(poColor::red);
   // po::drawFilledRect(X_,Y_,10,10);
       
    
    
    
}
