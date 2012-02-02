/*	Created by Administrator on 1/31/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "simpleDrawingHelpApp.h"
#include "poApplication.h"
#include "poCamera.h"
#include "poSimpleDrawing.h"

using namespace po;
using namespace std;


// APP CONSTRUCTOR. Create all objects here.
simpleDrawingHelpApp::simpleDrawingHelpApp() {
	addModifier(new poCamera2D(poColor::black));
    
    x =0;
    
    addEvent(PO_MOUSE_UP_EVENT, this);//this fucntion takes the name of the event and the keyword "this"
    addEvent(PO_MOUSE_MOVE_EVENT, this);
    hasclicked = false;
}

// APP DESTRUCTOR. Delete all objects here.
simpleDrawingHelpApp::~simpleDrawingHelpApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void simpleDrawingHelpApp::update() {
  //  x++;
if(hasclicked ==true)
	
{
    
    x++;
}
}

// DRAW. Called once per frame. Draw objects here.
void simpleDrawingHelpApp::draw() {
    setColor(poColor::red);
    po::drawFilledRect(x,0,100,100);
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void simpleDrawingHelpApp::eventHandler(poEvent *event) {
	cout<< "I was called";
    
    if(event->type==PO_MOUSE_UP_EVENT){
    hasclicked=!hasclicked;
}
    else if(event->type==PO_MOUSE_MOVE_EVENT)
        
    {
        cout<< "I AM MOVING";
    }
    
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void simpleDrawingHelpApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
