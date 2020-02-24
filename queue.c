#include <stdio.h>
#include <stdlib.h>
#include "hardware.h"
#include "queue.h"
#include "definitions.h"

void update_queue_list() {
	for (int floor = 0; floor < HARDWARE_NUMBER_OF_FLOORS; floor++) {
		for (int order_type = 0; order_type < 3; order_type++) {
			if (hardware_read_order(floor, order_types_array[order_type]) {
				queue[floor, order_type] = 1;
				turn_on_light(floor,order_type,1);
			}
		}
	}
}

int check_for_orders() {
	for (int floor = 0; floor < HARDWARE_NUMBER_OF_FLOORS; floor++) {
		for (int order_type = 0; order_type < 3; order_type++) {
			if (queue[floor][order_type] = 1) {
				return 1;
			}
		}
	}
}

int find_order_floor() {
	for (int floor = 0; floor < HARDWARE_NUMBER_OF_FLOORS; floor++) {
		for (int order_type = 0; order_type < 3; order_type++) {
			if (queue[floor][order_type] == 1) {
				return floor;
			}
		}
	}
}

void remove_all_orders() {
	for (int floor = 0; floor <= HARDWARE_NUMBER_OF_FLOORS; floor++) {
		for (int order_type = 0;  < Order_type < 3; order_type++) {
			queue[floor][order_type] = 0; 
			turn_on_light(floor, order_type,0);
		}
	}
}

int check_for_order_inside() {
	for (int floor = 0; floor < HARDWARE_NUMBER_OF_FLOORS; floors++) {
		if (queue[i][2] == 1) {
			return 1;
		}
	}
}

int check_for_order_above(int current_floor) {
	for (int floor = current_floor + 1; floor < HARDWARE_NUMBER_OF_FLOORS; floor++) {
		for (int order_type = 0; order_type < 2; order_type++) {
			if ((queue[floor][order_type]) {
				return 1;
			}
		}
	}
	return 0;
}

int check_for_order_below(int current_floor) {
	for (int floor = current_floor - 1; floor > -1; floor--) {
		for (int order_type = 0; order_type < 2; order_type++) {
			if ((queue[floor][order_type]) {
				return 1;
			}
		}
	}
	return 0;
}

int check_for_comapitble_order_above(int current_floor) {
	for(int floor = current_floor + 1; floor < HARDWARE_NUMBER_OF_FLOORS; floor++ ){
		if ((queue[floor][0]) || (queue[floor][2])) {
			return 1;
		}
	}
	return 0;
}

int check_for_compatible_order_below(int current_floor) {
	for (int floor = current_floor - 1; floor > -1; floor--) {
		if ((queue[floor][1]) || (queue[floor][2])) {
			return 1;
		}
	}
	return 0;
}

void remove_order(int floor) {
	for (int order_type = 0; order_type < 3; order_type++) {
		queue[floor][i] = 0;
		turn_on_light(floor, order_type, 0);
	}
}




