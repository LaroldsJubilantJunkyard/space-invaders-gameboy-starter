//AUTOGENERATED FILE FROM png2asset

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

BANKREF(Player)

const palette_color_t Player_palettes[4] = {
	RGB8(255, 255, 255), RGB8(0, 0, 0), RGB8(80, 1, 86), RGB8(181, 1, 0)
};

const uint8_t Player_tiles[32] = {
	0x00,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x1f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,
	0x00,0x00,0x80,0x00,0xc0,0x00,0xc0,0x00,0xf8,0x00,0xfc,0x00,0xfc,0x00,0xfc,0x00
};

const metasprite_t Player_metasprite0[] = {
	METASPR_ITEM(-4, -8, 0, 0), METASPR_ITEM(0, 8, 1, 0), METASPR_TERM
};

const metasprite_t* const Player_metasprites[1] = {
	Player_metasprite0
};
