#include <stdlib.h>
#include "hardware.h"
#include "lights.h"
#include "definitions.h"

void clear_all_lights() {
	for (i = 0; i < HARDWARE_NUMBER_OF_FLOORS; i++){
		hardware_command_order_light(i, HARDWARE_ORDER_UP, 0);
	}
	for (i = 0; i < HARDWARE_NUMBER_OF_FLOORS; i++){
		hardware_command_order_light(i, HARDWARE_ORDER_DOWN, 0);
	}
	for (i = 0; i < HARDWARE_NUMBER_OF_FLOORS; i++){
		hardware_command_order_light(i, HARDWARE_ORDER_INSIDE, 0);
	}
}

void turn_on_light(int floor, int order_type, int on) {
	if (on == 1) {
		light_matrix[floor][order_type] = 1;
	}
	else {
		light_matrix[floor][order_type] = 0;
	}
}
