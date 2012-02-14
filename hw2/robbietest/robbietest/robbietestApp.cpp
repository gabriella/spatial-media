/*	Created by Administrator on 2/14/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "robbietestApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
robbietestApp::robbietestApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
robbietestApp::~robbietestApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void robbietestApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void robbietestApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void robbietestApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void robbietestApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
