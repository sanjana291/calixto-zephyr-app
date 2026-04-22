#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

#define SLEEP_MS 1000

// #define LED0 DT_ALIAS(led0)
// const struct gpio_dt_spec led0 = GPIO_DT_SPEC_GET(LED0, gpios);

int main(void)
{
	
  // int ret = gpio_pin_configure_dt(&led0, GPIO_OUTPUT_INACTIVE);
  // if(ret < 0){
  //   return 1;
  // }
  
  bool led_state = true;


  while(1){
    // ret = gpio_pin_toggle_dt(&led0);
    // if (ret < 0) {
    //   return 0;
    // } 
       
    led_state = !led_state;
    printf("LED state: %s\n", led_state ? "ON" : "OFF");
    k_msleep(SLEEP_MS);
  }

	return 0;
}
