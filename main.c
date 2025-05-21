#include "pico/stdlib.h"
#include "hardware/adc.h"

int main() {
    // Инициализация
    stdio_init_all();

    adc_init();             
    adc_gpio_init(26);       
    adc_select_input(0);      

    while (true) {
        uint16_t raw = adc_read();
        printf("ADC: %u\n", raw);
        sleep_ms(500); 
    }
    return 0;
}



