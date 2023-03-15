#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    serialMessage = false;
    
    serial.listDevices();
    vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();
    
    // this should be set to whatever com port your serial device is connected to.
    // (ie, COM4 on a pc, /dev/tty.... on linux, /dev/tty... on a mac)
    // arduino users check in arduino app....
    int baud = 9600;
    serial.setup(0, baud); //open the first device
    //serial.setup("COM10", baud); // windows example
    //serial.setup("/dev/tty.usbserial-A4001JEC", baud); // mac osx example
    //serial.setup("/dev/ttyUSB0", baud); //linux example
}

//--------------------------------------------------------------
void ofApp::update(){
    if (serialMessage) {
        serialMessage = false;
        serial.writeByte(sendData); // sending the data to arduino

        serial.readBytes(receivedData, 10); // Getting the data from Arduino
        printf("receivedData is %s \n", receivedData);    // Printing in ASCII format
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);    // Black background
    ofSetColor(255);    // Text color is white

    string msg;
    msg += "Click to turn LED \n";
    msg += receivedData;
    ofDrawBitmapString(msg, 200, 200); // Write the data on the output window
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    serialMessage = true;
}


