#ifndef _Adafruit_SSD1306_Component_H_
#define _Adafruit_SSD1306_Component_H_

#include "Adafruit_SSD1306.h"

class Adafruit_SSD1306_Component : public Adafruit_SSD1306 {
	public:
		/*
		 * @flower { constructorVariant="Direct wiring" }
		 */
		Adafruit_SSD1306_Component(int8_t SID, int8_t SCLK, int8_t DC, int8_t RST, int8_t CS);
		/*
		 * @flower { constructorVariant="SPI" }
		 */
  		Adafruit_SSD1306_Component(int8_t DC, int8_t RST, int8_t CS);
  		/*
		 * @flower { constructorVariant="I2C" }
		 */
  		Adafruit_SSD1306_Component(int8_t RST);
};

Adafruit_SSD1306_Component::Adafruit_SSD1306_Component(int8_t SID, int8_t SCLK, int8_t DC, int8_t RST, int8_t CS):Adafruit_SSD1306(int8_t SID, int8_t SCLK, int8_t DC, int8_t RST, int8_t CS) {

}

Adafruit_SSD1306_Component::Adafruit_SSD1306_Component(int8_t DC, int8_t RST, int8_t CS):Adafruit_SSD1306(int8_t DC, int8_t RST, int8_t CS) {

}

Adafruit_SSD1306_Component::Adafruit_SSD1306_Component(int8_t RST = -1):Adafruit_SSD1306(int8_t RST = -1) {

}

#endif