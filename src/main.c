#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <stdio.h>

K_TIMER_DEFINE(my_timer, NULL, NULL);

void timer_handler(struct k_timer *timer_id)
{
    printk("Timer Expired!\n");
}

int main(void)
{
    printk("Zephyr Timer Example\n");
    printf("Hello World! %s\n", CONFIG_BOARD);

    k_timer_init(&my_timer, timer_handler, NULL);

    k_timer_start(&my_timer, K_MSEC(1000), K_MSEC(1000));

    while (1)
    {
        k_sleep(K_FOREVER);
    }

    return 0;
}
