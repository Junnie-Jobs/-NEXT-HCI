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
    void clear();
    void mouseMoved(ofMouseEventArgs & args);
    void mouseDragged(ofMouseEventArgs & args);
    void mousePressed(ofMouseEventArgs & args);
    void mouseReleased(ofMouseEventArgs & args);
    void mouseScrolled(ofMouseEventArgs & args);
    void mouseEntered(ofMouseEventArgs & args);
    void mouseExited(ofMouseEventArgs & args);

    ofPoint pos;
    float radius;
    ofColor color;
    
    static ofEvent<ofVec2f> clickEvent;
    static ofEvent<ofVec2f> clearEvent;
    static ofEvent<ofVec2f> undoEvent;

    
protected:
    bool bRegisteredEvents;
    
};

#endif /* Ball_h */








