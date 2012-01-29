/*	Created by Administrator on 1/28/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */



#include "homeworkApp.h"
#include "poApplication.h"
#include "poCamera.h"
//#include "poShapeBasics2D.h"
#include "poSimpleDrawing.h"

//for key events)
#include "poEnums.h"
#include "poDictionary.h"


// APP CONSTRUCTOR. Create all objects here.
homeworkApp::homeworkApp() {
    addModifier(new poCamera2D(poColor::black));
    //redRect - event what happens with key down
    
}

// APP DESTRUCTOR. Delete all objects here.
homeworkApp::~homeworkApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void homeworkApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void homeworkApp::draw() {
    int W;
    int  H;
    drawGrid1(W, H);
    //int X=0;
    //int Y=0;
    drawGrid2(X,Y);
    // printf(W);
    
    // drawGrid1( W,  H);
    
    
    
    
    
}





// EVENT HANDLER. Called when events happen. Respond to events here.
void homeworkApp::eventHandler(poEvent *event) {
	if(event->type==PO_KEY_DOWN_EVENT){
        redRect->position.set(X, Y, 0);
        if(event->keyChar == 26) {	
            X++;
            Y++;
        }
        else if(event->keyChar==25){
            X--;
            Y--;    
            
        }
        
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
    for (int W=0;W<=getWindowWidth();W=W+20){
        for(int H = 0;H<=getWindowHeight();H=H+20)  {
            po::setColor(poColor::white);
            po::drawFilledRect(W,H,10,10); 
        }
    }
}
void homeworkApp::drawGrid2(int X_, int Y_){
    
    poRectShape* redRect = new poRectShape(10,10);
    redRect->fillColor=poColor::red;
    redRect->position.set(X,Y, 0);
    addChild(redRect);

    
    
}
