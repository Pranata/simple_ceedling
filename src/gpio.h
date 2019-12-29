#ifndef _GPIO_H_
#define _GPIO_H_

#include "port.h"

typedef struct gpio_obj_t* gpio_hdl;

gpio_hdl gpio_init (uint8_t port_index);
bool     gpio_set  (gpio_hdl p_gpio, uint8_t port_num, uint8_t pin_num);

#endif