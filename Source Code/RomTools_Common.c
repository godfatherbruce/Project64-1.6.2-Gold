#include <Windows.h>
#include <stdio.h>
#include "RomTools_Common.h"
int RomRegion (BYTE Country) {
	switch(Country)
	{
		case 0x44: // Germany
		case 0x46: // French
		case 0x49: // Italian
		case 0x50: // Europe
		case 0x4C: // Lodgenet (PAL)
		case 0x53: // Spanish
		case 0x55: // Australia
		case 0x58: // X (PAL)
		case 0x59: // Y (PAL)
			return PAL_Region;
		case 0x37:	// 7 (Beta)
		case 0x41:	// NTSC (Only 1080 JU?)
		case 0x42:	// Brazil
		case 0x43:	// China
		case 0x4B:	// Korea
		case 0x57:	// Taiwan
		case 0x45:	// USA
		case 0x47:  // Gateway (NTSC)
		case 0x4A:	// Japan
		case 0x20:	// (PD)
		case 0x0:	// (PD)
			return NTSC_Region;
		default:
			return Unknown_Region;
	}
}