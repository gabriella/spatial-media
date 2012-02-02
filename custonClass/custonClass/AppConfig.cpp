/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "custonClassApp.h"

poObject *createObjectForID(uint uid) {
	return new custonClassApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "custonClass", 100, 100, 1024, 768);
}

void cleanupApplication() {
}