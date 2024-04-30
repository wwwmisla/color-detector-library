#include <Color_Detector.h>

// Definindo os pinos
#define pin_np 3
#define pin_ldr A0
#define num_leds 1

// Inicializando o objeto da biblioteca
Color_Detector ldrColor(pin_np, pin_ldr, num_leds);

void setup()
{
    // Iniciando a biblioteca
    ldrColor.begin();
}

void loop()
{
    // Detectando a cor
    ldrColor.detectColor();
}