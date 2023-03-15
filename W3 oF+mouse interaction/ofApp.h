/*
 inspiration: https://www.youtube.com/watch?v=XghI0B4EhQI
 */

#pragma once

#include "ofMain.h"

class particle {
public:
    ofColor color;
    float size;
    glm::vec2 force, position, direction;
    
    void update();
    void draw();
    
    particle(int x, int y, int hue);
    ~particle();
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
    
    vector<particle> particles;
    int hue;
		
};
