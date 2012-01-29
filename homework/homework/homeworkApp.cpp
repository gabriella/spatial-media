/*	Created by Administrator on 1/29/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "homeworkApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
homeworkApp::homeworkApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
homeworkApp::~homeworkApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void homeworkApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void homeworkApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void homeworkApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void homeworkApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
