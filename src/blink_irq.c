// interrupt_wfi.c
#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/sync.h>

const uint LED_PIN = 7;  
const uint IRQ_PIN = 8;  

void gpio_callback(uint gpio, uint32_t events) {
    
    if (gpio == IRQ_PIN && (events & GPIO_IRQ_EDGE_RISE)) {
        static bool led_on = false;
        led_on = !led_on;
        gpio_put(LED_PIN, led_on);
    }
}

int main() {
    stdio_init_all();  

   
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_put(LED_PIN, 0);

  
    gpio_init(IRQ_PIN);
    gpio_set_dir(IRQ_PIN, GPIO_IN);
    gpio_pull_down(IRQ_PIN);  

    
    gpio_set_irq_enabled_with_callback(
        IRQ_PIN,
        GPIO_IRQ_EDGE_RISE,
        true,
        &gpio_callback
    );

    
    while (1) {
        __wfi();   
    }
}
