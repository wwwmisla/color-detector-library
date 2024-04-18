/*
    Color_Detector (Detector de cores)

    Color_Detector.cpp

    Detector de cor baseado nos componentes NeoPixel e LDR

    Código comentado: https://youtu.be/oHn-RooDAao
    
    O circuito:
    * Pino do NeoPixel conectado ao terminal digital 3
    * Pino do LDR conetado ao terminal analógico A0

    Criado em 07/04/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#include "Arduino.h"
#include "Color_Detector.h"

Color_Detector::Color_Detector(int pin_np, int pin_ldr, int num_leds)
: _pin_np(pin_np), _pin_ldr(pin_ldr), _num_leds(num_leds), _led(num_leds, pin_led, NEO_GRB + NEO_KHZ800) {}

void Color_Detector::begin()
{
    _led.begin();
    _led.show();

    Serial.begin(9600);

    calibrateRed();
    calibrateGreen();
    calibrateBlue();
}

void Color_Detector::detectColor()
{
    _leitura = analogRead(_pin_ldr);

    Serial.println(_leitura);

    if (_leitura > _minR && _leitura < _maxR) {
        Serial.println("Vermelho");
    } else if (_leitura > _minG && _leitura < _maxG) {
        Serial.println("Verde");
    } else if (_leitura > _minB && _leitura < _maxB) {
        Serial.println("Azul");
    }

    delay(500);
}

void Color_Detector::calibrateRed() 
{
    _led.setPixelColor(0, 255, 0, 0);
    _led.show();
    delay(500);
    _led.setPixelColor(0, 255, 255, 255);
    calibrateLDR(_minR, _maxR);
    delay(1500);
}

void Color_Detector::calibrateGreen() 
{
    _led.setPixelColor(0, 0, 255, 0);
    _led.show();
    delay(500);
    _led.setPixelColor(0, 255, 255, 255);
    calibrateLDR(_minG, _maxG);
    delay(1500);
}

void Color_Detector::calibrateBlue() 
{
    _led.setPixelColor(0, 0, 0, 255);
    _led.show();
    delay(500);
    _led.setPixelColor(0, 255, 255, 255);
    calibrateLDR(_minB, _maxB);
    delay(1500);
}

void Color_Detector::calibrateLDR(int &minVal, int &maxVal) {
    minVal = 2000;
    maxVal = 0;

    for (int i = 0; i < 100; i++) {
        _leitura = analogRead(_pin_ldr);
        
        if (_leitura < minVal) {
            minVal = _leitura;
        }
        if (_leitura > maxVal) {
            maxVal = _leitura;
        }

        delay(100);
    }
}