// blink_sleep_ms.c
#include "pico/stdlib.h"

const uint LED_PIN = 7;   // External LED on GP2

int main() {
    stdio_init_all();     

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    bool on = false;

    while (true) {
        on = !on;
        gpio_put(LED_PIN, on);
        sleep_ms(250);   
    }
}
