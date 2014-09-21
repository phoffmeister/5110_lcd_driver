CC = avr-gcc
CFLAGS = -Os -mmcu=atmega8

lcd_driver.o: lcd_driver.c lcd_driver.h
	$(CC) -c $(CFLAGS) lcd_driver.c
clean:
	rm lcd_driver.o
