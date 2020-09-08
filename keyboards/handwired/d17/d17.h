#pragma once

#ifdef KEYBOARD_handwired_d17_4x5
    #include "4x5.h"
#elif KEYBOARD_handwired_d17_d42
    #include "d42.h"
#endif

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif
