#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ball.draw();
}

void ofApp::update() {
    
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    ball.keyReleased(key);
}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    ball.mouseReleased(x,y,button);
}
