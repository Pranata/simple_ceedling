#ifndef _LED_H_
#define _LED_H_

/* forward declaration */
typedef struct led_obj_t* led_hdl;


/* led struct definition */
struct led_obj_t {
    bool     is_initialized;
    gpio_hdl p_gpio;
};


/* interface prototypes */
led_hdl led_init (uint8_t index);
bool    led_on   (led_hdl p_led);

#endif
