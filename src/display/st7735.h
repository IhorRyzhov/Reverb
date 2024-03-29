#ifndef DISPLAY_ST7735_H_
#define DISPLAY_ST7735_H_

#include <stdint.h>
#include "color565.h"
#include "font5x7.h"
#include "font7x11.h"



//ST7735 COMMANDS
#define ST7735_NOP     0x00
#define ST7735_SWRESET 0x01
#define ST7735_RDDID   0x04
#define ST7735_RDDST   0x09
#define ST7735_SLPIN   0x10
#define ST7735_SLPOUT  0x11
#define ST7735_PTLON   0x12
#define ST7735_NORON   0x13
#define ST7735_INVOFF  0x20
#define ST7735_INVON   0x21
#define ST7735_DISPOFF 0x28
#define ST7735_DISPON  0x29
#define ST7735_CASET   0x2A
#define ST7735_RASET   0x2B
#define ST7735_RAMWR   0x2C
#define ST7735_RAMRD   0x2E
#define ST7735_PTLAR   0x30
#define ST7735_COLMOD  0x3A
#define ST7735_MADCTL  0x36
#define ST7735_FRMCTR1 0xB1
#define ST7735_FRMCTR2 0xB2
#define ST7735_FRMCTR3 0xB3
#define ST7735_INVCTR  0xB4
#define ST7735_DISSET5 0xB6
#define ST7735_PWCTR1  0xC0
#define ST7735_PWCTR2  0xC1
#define ST7735_PWCTR3  0xC2
#define ST7735_PWCTR4  0xC3
#define ST7735_PWCTR5  0xC4
#define ST7735_VMCTR1  0xC5
#define ST7735_RDID1   0xDA
#define ST7735_RDID2   0xDB
#define ST7735_RDID3   0xDC
#define ST7735_RDID4   0xDD
#define ST7735_PWCTR6  0xFC
#define ST7735_GMCTRP1 0xE0
#define ST7735_GMCTRN1 0xE1

#define	ST7735_BLACK   0x0000
#define	ST7735_BLUE    0x001F
#define	ST7735_RED     0xF800
#define	ST7735_GREEN   0x07E0
#define ST7735_CYAN    0x07FF
#define ST7735_MAGENTA 0xF81F
#define ST7735_YELLOW  0xFFE0
#define ST7735_WHITE   0xFFFF


void ST7735_Init(void);

void ST7735_deinit(void);

void ST7735_AddrSet(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);

void ST7735_Clear(uint16_t Color);

void ST7735_DrawChar(uint8_t x, uint8_t y, uint8_t chr, uint16_t Color, uint16_t BackgroundColor);

void ST7735_DrawChar7x11(uint8_t x, uint8_t y, uint8_t chr, uint16_t Color, uint16_t BackgroundColor);

void ST7735_DrawString(uint8_t x, uint8_t y, const char* chr, uint16_t Color, uint16_t BackgroundColor);

void ST7735_DrawString7x11(uint8_t x, uint8_t y, const char* chr, uint16_t Color, uint16_t BackgroundColor);

#endif /* DISPLAY_ST7735_H_ */
