#include "Ball.h"


Ball::Ball(){}

Ball::~Ball(){
    balls.clear();
}
//setup함수는 구동할 때 한번만 실행이 된다.
void Ball::setup(){
    balls.clear();
}

void Ball::draw() {
    
    ofBackground(100, 100, 100);
    
    for(int i=0; i<balls.size(); i++){
        ofSetColor(balls[i]->color);
        ofDrawCircle(balls[i]->pos.x, balls[i]->pos.y, balls[i]->radius);
    }
}

void Ball::mouseReleased(int x, int y, int button){
    
    
    Ball *ball = new Ball();
    ball->pos = ofPoint(x,y);;
    ball->radius = ofRandom(20, 50);
    ball->color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
    
    if(button == 0){ //mouse left click
        balls.push_back(ball);
    }
    
    else if(button == 2){
        if(balls.size() > 0 ){
           balls.pop_back();
        }else{
            cout << "no balls to remove" << endl;
        }
    }
}


void Ball::keyReleased(int key){
    
    if(key == 'a'){
        balls.clear();

    }
}

