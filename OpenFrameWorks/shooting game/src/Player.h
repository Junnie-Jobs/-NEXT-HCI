//
//  Player.h
//  DrawingCircle
//
//  Created by 임동준 on 2016. 8. 1..
//
//
#include "ofMain.h"
#ifndef Player_h
#define Player_h

class Player {
public:
    Player();
    void setup(ofImage * _img); void update();
    void draw();
    void shoot();
    void calculate_movement(); bool check_can_shoot();
public:
    ofPoint pos;
    ofImage *img;
    float width, height, speed;
    int lives;
    bool is_left_pressed, is_right_pressed, is_down_pressed, is_up_pressed;
    

};

#endif /* Player_h */
