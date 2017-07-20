#include "./headers/usart.h"

#define LED_BIT 7
#define LED_DDR DDRB
#define LED_PORT PORTB 

#define BIT(x) (1 << (x))
#define GET_BIT(r,n) ((r >> n)&1)

void init_led();

int main(void) {

  init_led();  
  USART0_init(BAUD_RATE(115200));

  SREG |= BIT(7);

  while(1) {
    
    
  }

  //Unreachable
  return 0;
}

void init_led() {
  LED_DDR |= BIT(LED_BIT);
  LED_PORT |= BIT(LED_BIT);
}