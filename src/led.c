/* standard includes */
#include <stdint.h>
#include <stdbool.h>

/* dependency includes */
#include "gpio.h"

/* module includes */
#include "led.h"


#define MAX_LED_INSTANCE      2  //max number of LED instances
#define PORT_INDEX            1  //example for port index


/* static allocated of led instances */
static struct led_obj_t gLedObj[MAX_LED_INSTANCE];


led_hdl led_init (uint8_t index)
{
    gLedObj[index].p_gpio = gpio_init(PORT_INDEX);
    gLedObj[index].is_initialized = true;
    
    return &gLedObj[index];
}


bool led_on (led_hdl p_led)
{
    return gpio_set(p_led->p_gpio, 1, 1);
}
