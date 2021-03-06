#include <project.h>
//#include "fonts.h"
//#include  "glcd_verdana_ukr_font.h"
#include  "glcd_font_ukr_16x16.h"

// Screen orientation defines:
#define LCD_ORIENTATION_0    0
#define LCD_ORIENTATION_90   96
#define LCD_ORIENTATION_180  160
#define LCD_ORIENTATION_270  192
// Write Command/Data
#define AO_COMMAND  0
#define AO_DATA     1
// TFT LCD dimensions
#define LCD_WIDTH   128
#define LCD_HEIGHT  128
 
// ILI9163 LCD Controller Commands
#define NOP                     0x00
#define SOFT_RESET              0x01
#define GET_RED_CHANNEL         0x06
#define GET_GREEN_CHANNEL       0x07
#define GET_BLUE_CHANNEL        0x08
#define GET_PIXEL_FORMAT        0x0C
#define GET_POWER_MODE          0x0A
#define GET_ADDRESS_MODE        0x0B
#define GET_DISPLAY_MODE        0x0D
#define GET_SIGNAL_MODE         0x0E
#define GET_DIAGNOSTIC_RESULT   0x0F
#define ENTER_SLEEP_MODE        0x10
#define EXIT_SLEEP_MODE         0x11
#define ENTER_PARTIAL_MODE      0x12
#define ENTER_NORMAL_MODE       0x13
#define EXIT_INVERT_MODE        0x20
#define ENTER_INVERT_MODE       0x21
#define SET_GAMMA_CURVE         0x26
#define SET_DISPLAY_OFF         0x28
#define SET_DISPLAY_ON          0x29
#define SET_COLUMN_ADDRESS      0x2A
#define SET_PAGE_ADDRESS        0x2B
#define WRITE_MEMORY_START      0x2C
#define WRITE_LUT               0x2D
#define READ_MEMORY_START       0x2E
#define SET_PARTIAL_AREA        0x30
#define SET_SCROLL_AREA         0x33
#define SET_TEAR_OFF            0x34
#define SET_TEAR_ON             0x35
#define SET_ADDRESS_MODE        0x36
#define SET_SCROLL_START        0X37
#define EXIT_IDLE_MODE          0x38
#define ENTER_IDLE_MODE         0x39
#define SET_PIXEL_FORMAT        0x3A
#define WRITE_MEMORY_CONTINUE   0x3C
#define READ_MEMORY_CONTINUE    0x3E
#define SET_TEAR_SCANLINE       0x44
#define GET_SCANLINE            0x45
#define READ_ID1                0xDA
#define READ_ID2                0xDB
#define READ_ID3                0xDC
#define FRAME_RATE_CONTROL1     0xB1
#define FRAME_RATE_CONTROL2     0xB2
#define FRAME_RATE_CONTROL3     0xB3
#define DISPLAY_INVERSION       0xB4
#define SOURCE_DRIVER_DIRECTION 0xB7
#define GATE_DRIVER_DIRECTION   0xB8
#define POWER_CONTROL1          0xC0
#define POWER_CONTROL2          0xC1
#define POWER_CONTROL3          0xC2
#define POWER_CONTROL4          0xC3
#define POWER_CONTROL5          0xC4
#define VCOM_CONTROL1           0xC5
#define VCOM_CONTROL2           0xC6
#define VCOM_OFFSET_CONTROL     0xC7
#define WRITE_ID4_VALUE         0xD3
#define NV_MEMORY_FUNCTION1     0xD7
#define NV_MEMORY_FUNCTION2     0xDE
#define POSITIVE_GAMMA_CORRECT  0xE0
#define NEGATIVE_GAMMA_CORRECT  0xE1
#define GAM_R_SEL               0xF2    
    
// define colors in format BGR15
#define TRANSPARENT  0x0000
#define BLUE         0xF800
#define RED          0x001F
#define GREEN        0x07E0
#define MAGENTA      0xF81F
#define YELLOW       0x07FF
#define WHITE        0xFFFF
#define LIGHTGREY    0xC618
#define BLACK        0x0001    
// Char dimensions    
#define WIDTH_CHAR  8
#define HIGHT_CHAR  16   
// Char size    
#define SIZE_NORMAL 1
#define SIZE_BIG    2
#define SIZE_HUGE   3

//--------------------------------------------------------------------------------------------------
// Public function prototypes
//--------------------------------------------------------------------------------------------------
void LcdInit (uint8_t orientation);

void writeData(uint8_t data);
void putPixel(uint16_t data);
void writeCommand (uint8_t command);
void LcdReset(void); 
void setLcdOrientation(uint8_t orientation);
void LcdPlot(uint16_t x, uint16_t y, uint16_t colour);
void drawCircle(uint16_t xCentre, uint16_t yCentre, uint16_t radius, uint16_t colour);
void drawRectFilled(uint16_t x,uint16_t y,uint16_t w,uint16_t h,uint16_t colour);
void LcdClearDisplay(uint16_t colour);
void setMemLcdFrame(int8_t x0, int8_t y0, int8_t x1, int8_t y1);
void LcdPutChr(wchar_t character, uint8_t x, uint8_t y, uint16_t chrColour, uint16_t bgColour, uint8_t sizeChr);
void LcdPutStr(char *string, uint8_t x, uint8_t y, uint16_t chrColour, uint16_t bgColour);
unsigned char getCharCode(const wchar_t character);
void Mova(void); 

