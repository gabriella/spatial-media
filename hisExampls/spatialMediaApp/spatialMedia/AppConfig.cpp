/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "spatialMediaApp.h"

poObject *createObjectForID(uint uid) {
	return new spatialMediaApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "spatialMedia", 100, 100, 1024, 768);
}

void cleanupApplication() {
}