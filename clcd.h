/* 
 * File:   clcd.h
 * Author: Jana Ranjani
 *
 * Created on December 2, 2024, 7:36 PM
 */

#ifndef CLCD_H
#define	CLCD_H

#define _XTAL_FREQ                  20000000   //20Mhz

#define CLCD_DATA_PORT_DDR          TRISD
#define CLCD_RS_DDR                 TRISE2
#define CLCD_EN_DDR                 TRISE1

#define CLCD_DATA_PORT              PORTD
#define CLCD_RS                     RE2
#define CLCD_EN                     RE1

#define INST_MODE                   0
#define DATA_MODE                   1

#define HI                          1
#define LOW                         0

#define LINE1(x)                    (0x80 + x)//0x80 0x81
#define LINE2(x)                    (0xC0 + x)// 0xC0
#define LINE3(x)                    (0x90 + x)
#define LINE4(x)                    (0xD0 + x)

#define EIGHT_BIT_MODE              0x33
#define FOUR_BIT_MODE               0x02
#define TWO_LINES_5x8_4_BIT_MODE    0x28
#define CLEAR_DISP_SCREEN           0x01
#define DISP_ON_AND_CURSOR_OFF      0x0C
#define BAR                         0xFF

void init_clcd(void);
void clcd_putch(const char data, unsigned char addr);
void clcd_print(const char *str, unsigned char addr);
void clcd_write(unsigned char byte, unsigned char mode);

#endif	/* CLCD_H */

