#include "unity.h"
#include <stdbool.h>
#include <stdint.h>

#include "mock_gpio.h"

#include "led.h"


#define LED_INDEX                       1
#define PORT_INDEX                      1


void setUp(void)
{
}

void tearDown(void)
{
}

void test_led_on(void)
{
    /* led_init call the gpio_init function
     * set the mock to replay the gpio_init function when called by led_init */
    gpio_init_IgnoreAndReturn((gpio_hdl)0xFFFFFFFF);
    led_hdl p_led = led_init(LED_INDEX);

    /* set the gpio_set mock function and test the led_on interface function */
    gpio_set_ExpectAndReturn(p_led->p_gpio, 1, 1, true);
    TEST_ASSERT_TRUE(led_on(p_led));
}
