//
//  Player.cpp
//  DrawingCircle
//
//  Created by 임동준 on 2016. 8. 1..
//
//

#include <stdio.h>
#include <Player.h>

Player::Player() {
}

void Player::setup(ofImage * _img)
{
    img = _img;
    pos.x = 100;
    pos.y = ofGetHeight() - 100;
    width = 55;
    height= 100;
    speed = 5;
    lives = 5;
    
 
}

void Player::update(){
    if(is_left_pressed){
        pos.x -= speed;
    }if(is_right_pressed){
        pos.x += speed;
    }if(is_up_pressed){
        pos.y -= speed;
    }if(is_down_pressed){
        pos.y += speed;
    }
}

void Player::draw()
{
    img->draw(pos.x - width/2, pos.y - height/2 , width, height);
}
void Player::shoot() {
}
void Player::calculate_movement() {
}
bool Player::check_can_shoot() {
}

