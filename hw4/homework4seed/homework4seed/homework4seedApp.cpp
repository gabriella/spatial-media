/*	Created by Administrator on 2/19/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "homework4seedApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
homework4seedApp::homework4seedApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
homework4seedApp::~homework4seedApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void homework4seedApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void homework4seedApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void homework4seedApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void homework4seedApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
