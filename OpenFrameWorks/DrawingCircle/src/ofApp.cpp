#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    balls.clear();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(100, 100, 100);
    for(int i=0; i<balls.size(); i++){
        ofSetColor(colors[i]);
        ofDrawCircle(balls[i].x, balls[i].y, radius[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if(key == 'a'){
        
        balls.clear();
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    if(button == 0){ //mouse left click
        

        balls.push_back(ofPoint(x,y));
        radius.push_back(ofRandom(30,50));
        colors.push_back(ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255)));
        
    }
    else if(button == 2){
    
        if(balls.size() > 0){
            balls.pop_back();
        }else{
//            cout << "no balls tp remove" << end;
        }
    }
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

