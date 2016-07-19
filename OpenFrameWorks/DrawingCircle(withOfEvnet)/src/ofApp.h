#pragma once

#include "ofMain.h"
#include "ofEvents.h"
#include "Ball.h"

class ofApp : public ofBaseApp{

	public:
    
		void setup();
		void update();
		void draw();
        void mouseClickEvent(ofVec2f & e);
        void clearBalls(ofVec2f & e);
        void undoBall(ofVec2f & e);
		void keyReleased(int key);
    
        Ball ball;
        ofVec2f clickedPoint;
        vector<Ball*> balls;

    
};
