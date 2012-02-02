/*	Created by Administrator on 1/31/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "custonClassApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
custonClassApp::custonClassApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
custonClassApp::~custonClassApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void custonClassApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void custonClassApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void custonClassApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void custonClassApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
