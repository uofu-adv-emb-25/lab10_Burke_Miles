## Activity 1
1. VSYS
2. 1.8V to 5.5V

## Activity 2
WAKE_EN0 = 0xFFFF
WAKE_EN1 = 0x3FFF

SLEEP_EN0 = 0xFFFF
SLEEP_EN1 = 0x3FFF

ENABLED0 = 0x0000
ENABLED1 = 0x0000

## Activity 3
VSYS to GND: 4.98 V, 2 mA

## Activity 4
blink_sleep_ms: ~.1 Watts at 5V drawing 18-19mA toggling
blink_freertos: ~.1 Watts at 5V drawing 18-22 mA toggling
blink_busy: ~.1 Watts at 5V drawing 18-22 mA toggling

blink_irq:
    -1KHz: ~.1 Watts at 5V drawing 24 mA
    -10KHz: ~.1 Watts at 5V drawing 24 mA
    -100KHz: ~.1 Watts at 5V drawing 24 mA
    -1MHz: ~.1 Watts at 5V drawing 22 mA

hello_sleep_alarm behavior: Watched power source go from 16mA current draw to 0mA and then back to 16mA indicating proper sleep cycle behavior

hello_dormant_gpio behavior: Let pico w go to sleep (0 mA) and then woke up with wave gen (11 mA -> 16 mA). This correctly follows what we are expecting.
