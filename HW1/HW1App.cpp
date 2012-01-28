/*	Created by Administrator on 1/28/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "HW1App.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
HW1App::HW1App() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
HW1App::~HW1App() {
}

// UPDATE. Called once per frame. Animate objects here.
void HW1App::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void HW1App::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void HW1App::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void HW1App::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
