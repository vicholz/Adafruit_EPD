#ifndef _THINKINK_290_GRAYSCALE4_H
#define _THINKINK_290_GRAYSCALE4_H

#include "Adafruit_EPD.h"

// clang-format off

const uint8_t gray4_init_code[] {
  IL0373_POWER_SETTING, 5, 0x03, 0x00, 0x2b, 0x2b, 0x13,
    IL0373_BOOSTER_SOFT_START, 3, 0x17, 0x17, 0x17,
    IL0373_POWER_ON, 0,
    0xFF, 200,
    IL0373_PANEL_SETTING, 1, 0x3F,
    IL0373_PLL, 1, 0x3C,    
    IL0373_VCM_DC_SETTING, 1, 0x12,
    IL0373_CDI, 1, 0x97,
    0xFE // EOM
};

const uint8_t monopart_init_code[] {
  IL0373_POWER_SETTING, 5, 0x03, 0x00, 0x2b, 0x2b, 0x03,
    IL0373_BOOSTER_SOFT_START, 3, 0x17, 0x17, 0x17,
    IL0373_POWER_ON, 0,
    0xFF, 200,
    IL0373_PANEL_SETTING, 2, 0xbF, 0x0d,
    IL0373_PLL, 1, 0x3C,    
    IL0373_VCM_DC_SETTING, 1, 0x12,
    IL0373_CDI, 1, 0x47,
    0xFE // EOM
};

const uint8_t monofull_init_code[] {
    IL0373_BOOSTER_SOFT_START, 3, 0x17, 0x17, 0x17,
    IL0373_POWER_ON, 0,
    0xFF, 200,
    IL0373_PANEL_SETTING, 2, 0x1f, 0x0d,
    IL0373_CDI, 1, 0x97,
    0xFE // EOM
};

const uint8_t monopart_lut_code[] = {
  // const unsigned char lut_vcom1[]
  0x20, 44,
  0x00, 0x01, 0x0E, 0x00, 0x00, 0x01,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00,
  // const unsigned char lut_ww1[]
  0x21, 42,
  0x00, 0x01, 0x0E, 0x00, 0x00, 0x01,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // const unsigned char lut_bw1[]
  0x22, 42,
  0x20, 0x01, 0x0E, 0x00, 0x00, 0x01,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // const unsigned char lut_wb1[]
  0x23, 42,
  0x10, 0x01, 0x0E, 0x00, 0x00, 0x01,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // const unsigned char lut_bb1[]
  0x24, 42,
  0x00, 0x01, 0x0E, 0x00, 0x00, 0x01,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  0xFE // EOM
};

const uint8_t gray4_lut_code[] = {
  //const unsigned char lut_vcom[] =
  0x20, 42,
  0x00, 0x0A, 0x00, 0x00, 0x00, 0x01,
  0x60, 0x14, 0x14, 0x00, 0x00, 0x01,
  0x00, 0x14, 0x00, 0x00, 0x00, 0x01,
  0x00, 0x13, 0x0A, 0x01, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  //const unsigned char lut_ww[] ={
  0x21, 42,
  0x40, 0x0A, 0x00, 0x00, 0x00, 0x01,
  0x90, 0x14, 0x14, 0x00, 0x00, 0x01,
  0x10, 0x14, 0x0A, 0x00, 0x00, 0x01,
  0xA0, 0x13, 0x01, 0x00, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  //const unsigned char lut_bw[] ={
  0x22, 42,
  0x40, 0x0A, 0x00, 0x00, 0x00, 0x01,
  0x90, 0x14, 0x14, 0x00, 0x00, 0x01,
  0x00, 0x14, 0x0A, 0x00, 0x00, 0x01,
  0x99, 0x0C, 0x01, 0x03, 0x04, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  //const unsigned char lut_wb[] ={
  0x23, 42,
  0x40, 0x0A, 0x00, 0x00, 0x00, 0x01,
  0x90, 0x14, 0x14, 0x00, 0x00, 0x01,
  0x00, 0x14, 0x0A, 0x00, 0x00, 0x01,
  0x99, 0x0B, 0x04, 0x04, 0x01, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  //const unsigned char lut_bb[] ={
  0x24, 42,
  0x80, 0x0A, 0x00, 0x00, 0x00, 0x01,
  0x90, 0x14, 0x14, 0x00, 0x00, 0x01,
  0x20, 0x14, 0x0A, 0x00, 0x00, 0x01,
  0x50, 0x13, 0x01, 0x00, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  0xFE // EOM
};

// clang-format on


class ThinkInk_290_Grayscale4 : public Adafruit_IL0373 {
 private:

 public:

  ThinkInk_290_Grayscale4(int8_t SID, int8_t SCLK, int8_t DC,
                          int8_t RST, int8_t CS, int8_t SRCS, int8_t MISO,
                          int8_t BUSY = -1) 
    : Adafruit_IL0373(296, 128, SID, SCLK, DC, RST, CS, SRCS, MISO, BUSY)
    {
    };

  ThinkInk_290_Grayscale4(int8_t DC, int8_t RST, int8_t CS,
                          int8_t SRCS, int8_t BUSY = -1, SPIClass *spi = &SPI)
    : Adafruit_IL0373(296, 128, DC, RST, CS, SRCS, BUSY, spi) 
    {
    };

  void begin(thinkinkmode_t mode = THINKINK_GRAYSCALE4_FULL) {
    Adafruit_EPD::begin(true);
    setBlackBuffer(1, true); // layer 0 uninverted
    setColorBuffer(0, true); // layer 1 uninverted

    if (mode == THINKINK_GRAYSCALE4_FULL) {
      _epd_init_code = gray4_init_code;
      _epd_fulllut_code = gray4_lut_code;

      layer_colors[EPD_WHITE] = 0b00;
      layer_colors[EPD_BLACK] = 0b11;
      layer_colors[EPD_RED] = 0b01;
      layer_colors[EPD_GRAY] = 0b10;
      layer_colors[EPD_LIGHT] = 0b01;
      layer_colors[EPD_DARK] = 0b10;
    } 
    if (mode == THINKINK_MONO_FULL) {
      _epd_init_code = monofull_init_code;

      layer_colors[EPD_WHITE] = 0b10;
      layer_colors[EPD_BLACK] = 0b01;
      layer_colors[EPD_RED] = 0b01;
      layer_colors[EPD_GRAY] = 0b01;
      layer_colors[EPD_LIGHT] = 0b10;
      layer_colors[EPD_DARK] = 0b01;
    }

    default_refresh_delay = 1000;

    powerDown();
  };

  void displayPartial(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    uint8_t buf[7];
    uint8_t c;

    // x1 and x2 must be on byte boundaries
    x1 -= x1 % 8; // round down;
    x2 = (x2 + 7) & ~0b111; // round up

    uint16_t part_width = x2 - x1;
    uint16_t part_height = y2 - y1;

    //Serial.println("Partial update!");

    const uint8_t *init_code_backup = _epd_init_code;
    const uint8_t *lut_code_backup = _epd_fulllut_code;
    // change init to the partial code
    _epd_init_code = monopart_init_code;
    _epd_fulllut_code = monopart_lut_code;

    // perform standard power up
    powerUp();

    EPD_command(IL0373_PARTIAL_ENTER);
    buf[0] = x1;
    buf[1] = x2-1;
    buf[2] = y1 >> 8;
    buf[3] = y1 & 0xFF;
    buf[4] = (y2-1) >> 8;
    buf[5] = (y2-1) & 0xFF;
    buf[6] = 0x28;
    EPD_command(IL0373_PARTIAL_WINDOW, buf, 7);

    // display....

    // write image
    writeRAMCommand(0);
    dcHigh();
    for (uint16_t y = y1; y < y2; y++) {
      for (uint16_t x = x1; x < x2; x+=8) {
        uint16_t i = (x / 8) + y * 16;
        SPItransfer(~buffer1[i]);
      }
    }
    csHigh();
    
    delay(2);
    
    writeRAMCommand(1);
    dcHigh();
    
    Serial.print("Transfering: ");

    for (uint16_t y = y1; y < y2; y++) {
      for (uint16_t x = x1; x < x2; x+=8) {
        uint16_t i = (x / 8) + y * 16;
        /*
        Serial.print(i); 
        Serial.print(" (0x"); 
        Serial.print(buffer2[i]);
        Serial.print("), ");
        if (i % 16 == 15) Serial.println();
        */
        SPItransfer(~buffer2[i]);
      }
    }
    Serial.println();
    csHigh();
    
#ifdef EPD_DEBUG
      Serial.println("  Update");
#endif

    update();

    EPD_command(IL0373_PARTIAL_EXIT);

#ifdef EPD_DEBUG
  Serial.println("  Powering Down");
#endif

    powerDown();
    // change init back
    _epd_fulllut_code = lut_code_backup;
    _epd_init_code = init_code_backup;
  }

  
};



#endif // _THINKINK_290_GRAYSCALE4_H
