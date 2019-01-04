#ifndef HHH_CONST_H
#define HHH_CONST_H

#include <string>
#include <SFML/Graphics.hpp>

// all shape area and position is in (x, y) except for data and array(vector), it'll be flipped
// all blocks size is square

// --- GAME CONFIGURATION ---
std::string LOCAL_DIR = "C:\\Users\\Andrew Shen\\Desktop\\Quasi-Interstellar\\Quasi Interstellar\\Quasi Interstellar\\";
std::string RES_DIR = LOCAL_DIR+"resource\\texture\\block\\";
std::string DAT_DIR = LOCAL_DIR+"data\\";

sf::Vector2i SCREEN_SZ(1000, 1000);
sf::Vector2i SCREEN_VIEW_S(1, 1);  // Size in blocks; Screen View Size Start Position
sf::Vector2i SCREEN_VIEW_E(20, 20);  // Size in blocks; Screen View Size End Position
sf::RenderWindow window(sf::VideoMode(SCREEN_SZ.x, SCREEN_SZ.y), "Cookie Island");

unsigned int BLOCK_SZ = 50; // by pixels
unsigned int FPS_LIMIT = 60;

sf::Vector2f PLAYER_SCREEN_POS(SCREEN_SZ.x/2, SCREEN_SZ.y/2);  // Player position to the screen
sf::Vector2f PLAYER_SIZE(45, 90);

sf::Vector2i PLAYER_COLLISION_BOX(5, 5);  // size in block
int PLAYER_COLLISION_PAD[4] = { 5, 4, 3, 4 } ;  // unit in pixels; top, bottom, left, right
//sf::Vector2f PLAYER_BOX_COL_OFS(0, 0);

// --- GAME MECHANICS ---
float SPEED = 5; // pixel per frame
int GRAVITY = 5; // pixel per frame; must be less than speed

float JUMP_LENGTH = 0.125;  // speed of the jump
float JUMP_AMPLITUDE = 10;  // variation in difference (amplitude)
float JUMP_MAX = 180;  // maximum # on sin() before stops

unsigned int PB_MAX_RADIUS = 200;  // Place/Break Maximum Radius to __ pixels

#endif // CONST_H
