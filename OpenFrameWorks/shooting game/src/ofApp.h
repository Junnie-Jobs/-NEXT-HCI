#pragma once

#include "ofMain.h"
#include "ofEvents.h"
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include "LevelController.h"
#include "Item.h"
#include "ItemController.h"
#include "Item_potion.h"
#include "Item_potionController.h"
#include "Item_missile.h"
#include "Item_misiileController.h"
#include "Enemy_boss.h"
#include "Boss_controller.h"



class ofApp : public ofBaseApp{

	public:
    
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void draw_scores();
    void update_bullets();
    
    void check_bullet_collision(void);
    void check_item_collision(void);
    
    void draw_lives();
    void update_items();
    void update_potions();
    void update_missiles();
//    void update_enemy_boss();

    string game_state;
    int score;
    
    LevelController level_controller;
    Boss_controller boss_controller;

    ofImage start_screen;
    ofImage end_screen;
    ofTrueTypeFont score_font;
    
    Player player_1;
    ofImage player_image;
    
    ofImage player_gif;
    
    vector<Bullet> bullets;
    ofImage player_bullet_image;
    
    vector<Enemy> enemies;
    ofImage enemy_image;
    ofImage enemy_bullet_image;
    float max_enemy_amplitude;
    float max_enemy_shoot_interval;
    
    vector<Enemy_boss> enemy_bosses;
    ofImage enemy_boss_image;
//    ofImage enemy_boss_bullet_image;
    float max_enemy_boss_amplitude;
    float max_enemy__boss_shoot_interval;
    
    ItemController item_controller;
    vector<Item> items;
    ofImage item_image;
    float max_item_amplitude;
    
    void check_potion_collision(void);
    Item_potionController item_potion_controller;
    vector<Item_potion> potions;
    ofImage item_potion_image;
    float max_item_potion_amplitude;
    
    void check_missile_item_collision(void);
    Item_misiileController item_missile_controller;
    vector<Item_missile> missiles;
    ofImage item_missile_image;
    float max_item_missile_amplitude;
    
    vector<Bullet> item_bullets;
    

   
    
   
    
    
};
