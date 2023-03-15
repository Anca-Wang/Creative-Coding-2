#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void mousePressed(int x, int y, int button);
        bool serialMessage;            // a flag for sending serial
        char receivedData[10];        // for storing incoming data
        char sendData = 1;    // for sending data
            
        ofSerial    serial;
		
};
