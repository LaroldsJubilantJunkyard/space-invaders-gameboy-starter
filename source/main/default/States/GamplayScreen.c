#include "Common.h"
#include "Hud.h"
#include "States/Gameplay/player.h"
#include "States/Gameplay/invaders.h"
#include "States/Gameplay/bullets.h"
#include "States/Gameplay/alien.h"
#include "Graphics/SpaceInvadersFont.h"
#include "Graphics/Barricade.h"
#include "Graphics/Alien.h"


extern uint8_t invadersRemaining;
extern Player player;

void UpdateHUD(){}
void IncreaseScore(uint8_t amount){}
void DrawBarricade(uint8_t topLeftX, uint8_t topLeftY){}
void SetupLevel(){}
void SetupGameplayScreen(){}
uint8_t UpdateGameplayScreen(){ return GAMEPLAYSCREEN;}