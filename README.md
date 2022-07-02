# [INUTILE] Neurorrhaphos
ESP32 Bluetooth Stereo Audio transliterator to FM Radio 

**ATTENTION:**    FM Radio Module KT0803L is not yielding desired performances (i.e. I2C connexion normal, no discernable FM output). Project halted indefinately. 

**Hardware Requirements:**

1. ESP32 Dev Board

2. ELECHOUSE KT0803L FM Transmitter Module

3. PCM5102 I2S DAC Module

4. (not mandatory) VHF-band Antenna and SMA Socket

5. (not mandatory) 1602 LCD Screen & I2C Converter Module


**Connexion:**

ESP32   |    PCM5102 (I2S bus)

GPIO 26 -    BCK 

GPIO 25 -    LRCK

GPIO 27 -    DIN 

ESP32   |    KT0803L (I2C bus)

GPIO 21 -    SDA

GPIO 22 -    SCL

ESP32   |    LCD 1602 (I2C bus)

GPIO 21 -    SDA

GPIO 22 -    SCL


PCM5102 |    KT0803L (Analogue Audio)

AUX     -    AUX


**References:**

KT0803L Library:    
https://github.com/xantorohara/XantoKT0803

ESP32 Bluetooth Audio I2S Library:      
https://github.com/pschatzmann/ESP32-A2DP
