#include <stdlib.h>
#include "hardware.h"
#include "door.h"
#include "time.h"

#define DOOR_TIMER 3

void timer() {
	clock_t before = clock();
	int trigger = 3000;
	int msec = 0;
	while (msec < trigger) {
		clock_t difference = clock() - before;
		msec = 1000 * difference / CLOCKS_PER_SEC;
	}
}

void door_open() {
	hardware_command_door_open(1);
	if (OBSTRUCTION) {
	}
	timer();
	hardware_command_door_open(0);
	}
}