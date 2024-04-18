/*
    Color_Detector (Detector de cores)

    Color_Detector.h

    Detector de cor baseado nos componentes NeoPixel e LDR

    Código comentado: https://youtu.be/oHn-RooDAao
    
    O circuito:
    * Pino do NeoPixel conectado ao terminal digital 3
    * Pino do LDR conetado ao terminal analógico A0

    Criado em 07/04/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#ifdef Color_Detector_h
#define Color_Detector_h

#include "Arduino.h"
#include "Adafruit_NeoPixel.h"

class Color_Detector()
{
    public:
        Color_Detector(int pin_np, int pin_ldr, int num_leds);
        void begin();
        void detectColor();

    private: 
        Adafruit_NeoPixel _led;
        int _pin_np;
        int _pin_ldr;
        int _num_leds;
        int _leitura = 0;
        int _minR = 2000, _maxR = 0;
        int _minG = 2000, _maxG = 0;
        int _minB = 2000, _maxB = 0;

        void calibrateRed();
        void calibrateGreen();
        void calibrateBlue();
        void calibrateLDR(int &minVal, int &maxVal);
};

#endif