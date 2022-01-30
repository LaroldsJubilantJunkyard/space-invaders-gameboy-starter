#include <gb/gb.h>
#include "Common.h"
#include "Hud.h"
#include "Graphics/SpaceInvadersTitle.h"
#include "Graphics/SpaceInvadersFont.h"

// The blink counter is used to hide/show the "press any button" text
uint8_t blinkCounter;

void SetupStartScreen(){}
uint8_t UpdateStartScreen(){return STARTSCREEN;}