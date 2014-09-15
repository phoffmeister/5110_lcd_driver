#ifndef F_CPU
//#warning "F_CPU war noch nicht definiert, wird nun mit 1000000 definiert"
#define F_CPU 1000000UL 
#endif
#include <util/delay.h>

/*MAP TO CORRECT PINS*/
#define LCD_CLK PB5
#define LCD_DI PB3
#define LCD_RES PB1
#define LCD_CE PB2
#define LCD_SEND_DATA PB0
#define LCD_DDR DDRB
#define LCD_PORT PORTB
#define LCD_RES_TIME 1000
#define LCD_SEND_DELAY 7


void inline lcd_sendComand(uint8_t);
void inline lcd_sendData(uint8_t);
void lcd_reset();
void lcd_setup();
void lcd_clearAll( uint8_t pixel[][6]);
void lcd_invert(uint8_t pixel[][6]);
void lcd_modifyPixel(uint8_t pixel[][6], uint8_t, uint8_t, uint8_t);
void lcd_updateDisplay( uint8_t pixel[][6]);
void lcd_write_num(uint8_t pixel[][6], uint8_t col, uint8_t row ,uint32_t num);
void lcd_write_string(uint8_t pixel[][6], uint8_t col, uint8_t row , char* text);
