#include <zephyr/kernel.h>
#include <stdio.h>

// Define a timer structure
K_TIMER_DEFINE(my_timer, NULL, NULL);

// Callback function to be executed when the timer expires
void timer_callback(struct k_timer *timer_id)
{
    printf("Timer expired! Do something here.\n");
}

void main(void)
{
    // Initialize the timer
    k_timer_init(&my_timer, timer_callback, NULL);

    // Start the timer with an initial timeout of 2 seconds and a period of 4 seconds
    k_timer_start(&my_timer, K_SECONDS(2), K_SECONDS(4));
}
    while (1) {
        // Your main application code can run here
        // You can perform other tasks while the timer is active
    }
/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

int main(void)
{
	printf("Hello World! %s\n", CONFIG_BOARD);
	return 0;
}
