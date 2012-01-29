/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "homeworkApp.h"

poObject *createObjectForID(uint uid) {
	return new homeworkApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "homework", 100, 100, 1024, 768);
}

void cleanupApplication() {
}