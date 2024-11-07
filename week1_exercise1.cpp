#include "mbed.h"

DigitalIn button(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (1) {
        led = button.read();
        wait_ms(500); 
    }
}
