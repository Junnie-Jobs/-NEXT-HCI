#ifndef Ball_h
#define Ball_h
#include "ofMain.h"
#include "ofEvents.h"

class Ball {
    
public:
    Ball();
    ~Ball();
    void setup();
    void draw();
    void mouseReleased(int x, int y, int button);
    void keyReleased(int key);
    vector<Ball*> balls;
    ofPoint pos;
    float radius;
    ofColor color;
    
};

#endif /* Ball_h */








