/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "HWWeek3App.h"

poObject *createObjectForID(uint uid) {
	return new HWWeek3App();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "HWWeek3", 100, 100, 1024, 768);
}

void cleanupApplication() {
}