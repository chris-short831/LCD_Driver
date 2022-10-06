
#ifndef INC_LCD_H_
#define INC_LCD_H_

//Define Macros for LCD control bits
#define RS GPIO_PIN_6
#define RW GPIO_PIN_4
#define E GPIO_PIN_5
#define DATA_OUT GPIOC

//Define Mask Macros
#define UPPER_NIB 0xF0
#define LOWER_NIB 0x0F

//Define LCD Command Macros
#define RETURN_HOME 0x80
#define CLEAR_DISPLAY 0x01
#define NEW_LINE 0xc0

//Define Functions
void delay_us(const uint32_t time_us);
void SysTick_Init(void);
void Write_Command(uint8_t LCDcommand);
void LCD_GPIO_Init(void);
void Lcd_Init(void);
void String_Write(char Lcdstring[]);

#endif /* INC_LCD_H_ */
