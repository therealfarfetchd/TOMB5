#ifndef _INPUT_H_
#define _INPUT_H_

#include "SPECTYPES.H"

#ifdef __cplusplus
extern "C" {
#endif

	// The global input variable
	extern sint32 input;


	extern int bLaraOn;
	extern int bRoomOn;
	extern int bObjectOn;
	extern int bAObjectOn;
	extern int bEffectOn;


	extern int S_UpdateInput();

#ifdef __cplusplus
}
#endif


extern int S_UpdateInput(void);

extern char*		kname[];
extern sint16		layout[2][15];
extern int			conflict[];
extern int joy_x, joy_y, joy_fire;

extern unsigned char keymap[];
#define rawkey(A) (keymap[A] & 0x80)





#endif