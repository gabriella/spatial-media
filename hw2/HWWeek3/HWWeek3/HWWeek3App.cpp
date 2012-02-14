/*	Created by Administrator on 2/14/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "HWWeek3App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
HWWeek3App::HWWeek3App() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
HWWeek3App::~HWWeek3App() {
}

// UPDATE. Called once per frame. Animate objects here.
void HWWeek3App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void HWWeek3App::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void HWWeek3App::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void HWWeek3App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
