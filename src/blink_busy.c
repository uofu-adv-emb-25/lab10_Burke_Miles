// busy_loop.c
#pragma GCC optimize ("O0")   // Disable optimizations as required

#include "pico/stdlib.h"

const uint LED_PIN = 7;   

int main() {
    stdio_init_all();

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    
    gpio_put(LED_PIN, 1);

    while (1) {
        uint32_t k;
        for (int i = 0; i < 30; i++) {
            uint32_t j = 0;
            j = ((~j >> i) + 1) * 27644437;
            k = j;
        }
        
    }
}
