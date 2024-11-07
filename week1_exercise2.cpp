#include "mbed.h"

DigitalOut led(LED1);
AnalogIn analogInput(p15);

int main() {
    double period = 2000;
    
    while (1) {
        double percentage = analogInput.read();
        
        led = !led;
        wait_ms(period * percentage);
        led = !led;
        wait_ms(period * (1 - percentage));
    }
}
