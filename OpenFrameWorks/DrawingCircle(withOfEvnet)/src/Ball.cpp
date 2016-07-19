#include "Ball.h"

// the static event, or any static variable, must be initialized outside of the class definition.
ofEvent<ofVec2f> Ball::clickEvent = ofEvent<ofVec2f>();
ofEvent<ofVec2f> Ball::clearEvent = ofEvent<ofVec2f>();
ofEvent<ofVec2f> Ball::undoEvent = ofEvent<ofVec2f>();

Ball::Ball(){
  bRegisteredEvents = false;
}

Ball::~Ball(){
   clear();
}

void Ball::clear() {
    if(bRegisteredEvents) {
        ofUnregisterMouseEvents(this); // disable litening to mous events.
        bRegisteredEvents = false;
    }
}

//setup함수는 구동할 때 한번만 실행이 된다.
void Ball::setup(){
    //We need to declare all this mouse events methods to be able to listen to mouse events.
    //All this must be declared even if we are just going to use only one of this methods.
    if(!bRegisteredEvents) {
        ofRegisterMouseEvents(this); // this will enable our circle class to listen to the mouse events.
        bRegisteredEvents = true;
    }
}

void Ball::draw() {}
void Ball::mouseMoved(ofMouseEventArgs & args){}
void Ball::mouseDragged(ofMouseEventArgs & args){}
void Ball::mousePressed(ofMouseEventArgs & args){}
void Ball::mouseScrolled(ofMouseEventArgs & args){}
void Ball::mouseEntered(ofMouseEventArgs & args){}
void Ball::mouseExited(ofMouseEventArgs & args){}
void Ball::mouseReleased(ofMouseEventArgs & args){
    
    ofVec2f mousePos = ofVec2f(args.x, args.y);
    
    if(args.button == 0 ){ // mouse Left Click
       
       ofNotifyEvent(clickEvent, mousePos);
        
    }else if(args.button == 1){ // mouse Middle click
    
       ofNotifyEvent(undoEvent, mousePos);
        
    }else if(args.button == 2){ //mouse Right Click
        
       ofNotifyEvent(clearEvent, mousePos);
    
    }else{
        return;
    }
   
}


