#pragma once

#include "ofMain.h"
#include "Ball.h"

class ofApp : public ofBaseApp{

	public:
    
		void setup();
		void update();
		void draw();
        void mouseReleased(int x, int y, int button);
		void keyReleased(int key);
        Ball ball;
    
};
