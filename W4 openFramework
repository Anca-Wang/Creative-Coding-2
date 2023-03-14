/*
 Project Title: My purple dreams
 reference/credit: Daniel Buzzo 2021
 inspiration: https://www.youtube.com/watch?v=XghI0B4EhQI
 */


#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    hue = 0;
    ofBackground(237,234,247);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<particles.size(); i++){
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofSetColor(205);
    for (int i=0; i<particles.size();i++){
        particles[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key){
        case 'f':
        case 'F':
            ofToggleFullscreen();
            break;
            
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    particle newParticle(mouseX, mouseY, hue);
    particles.push_back(newParticle);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //hue = ofRandom(100,180);
    hue = ofRandom(170,200);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
particle::particle(int startX, int startY, int hue){
    position = glm::vec2(startX, startY);
    force = glm::vec2(0, 0.01);
    direction = glm::vec2(ofRandom(-2, 2), ofRandom(-2, 2.0));
    size = 25;
    color.setHsb(hue, 184, 230, 231);

    //color.setHsb(hue, 209, 213, 229);
}
//--------------------------------------------------------------

particle::~particle(){
    
}

//--------------------------------------------------------------

void particle::update(){
    position += direction;
    //direction += force;
    if (size > 0.8){
        size -= 0.01;
    }
    float brightness = color.getBrightness();
    float myHue = color.getHue();
    /*
    if (brightness > 10){
        color.setHue(myHue -= 0.5);
    }*/
}

//--------------------------------------------------------------

void particle::draw(){
    ofSetColor(color);
    ofDrawCircle(position, size);
}



