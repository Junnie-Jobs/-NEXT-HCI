#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ball.setup();
    ofAddListener(Ball::clickEvent, this, &ofApp::mouseClickEvent);
    ofAddListener(Ball::clearEvent, this, &ofApp::clearBalls);
    ofAddListener(Ball::undoEvent, this, &ofApp::undoBall);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(100, 100, 100);
    for(int i=0; i<balls.size(); i++){
        ofSetColor(balls[i]->color);
        ofDrawCircle(balls[i]->pos.x, balls[i]->pos.y, balls[i]->radius);
    }

}

void ofApp::update() {}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){}


//--------------------------------------------------------------
void ofApp::mouseClickEvent(ofVec2f & e){
    
    Ball *ball = new Ball();
    ball->pos = ofPoint(e.x, e.y);
    ball->radius = ofRandom(20, 50);
    ball->color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
    balls.push_back(ball);
}

//--------------------------------------------------------------
void ofApp::clearBalls(ofVec2f & e){
    
    if(balls.size() > 0){
        balls.clear();
    }else{
       cout << "no balls to remove" << endl;
    }
}
//--------------------------------------------------------------
void ofApp::undoBall(ofVec2f & e){
    
    if(balls.size() > 0){
        balls.pop_back();
    }else{
        cout << "no balls to remove" << endl;
    }
}

