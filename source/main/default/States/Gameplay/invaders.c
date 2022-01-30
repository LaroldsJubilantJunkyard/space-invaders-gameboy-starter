#include <gb/gb.h>
#include "States/Gameplay/invaders.h"
#include "States/Gameplay/bullets.h"
#include "States/Gameplay/player.h"
#include "States/GameplayScreen.h"
#include "Graphics/Alien.h"
#include "Graphics/SpaceInvadersFont.h"
#include "Common.h"

#define SHOT_TIMER_MAX 50

const unsigned char tiles[9] = {25,18,19,20,21,22,23,24,25};

// Our 40 invaders that will be drawn on the background
Invader invaders[40];

// Has any invader reached end of screen
// This needs to be reset to 0 everyime they switchdirections
uint8_t anyInvaderHasReachedEndOfScreen=0;

uint8_t invaderSpeed,invaderCounter,topRow,shotTimer,moveRow=0,rowsAtEnd=0;

void SetupInvaders(){}
void InvaderCheckPlayerCollision(uint8_t i){}
void ClearInvaderTiles(uint8_t i){}
void UpdateInvaderTiles(uint8_t i){}
uint8_t SlideInvader(uint8_t i){return 0;}
void InvaderTryFireBullet(uint8_t i){}
void ShiftAllInvadersDown(){}
uint8_t InvadersShouldMove(){return 0;}
void UpdateInvaders(){}
