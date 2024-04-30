# Biblioteca Color Detector (Detector de Cor)

[![Licence](https://img.shields.io/github/license/Ileriayo/markdown-badges?style=for-the-badge)](./LICENSE)
![Badge em Desenvolvimento](http://img.shields.io/static/v1?label=STATUS&message=DESENVOLVIDA&color=GREEN&style=for-the-badge)

<div style="display: inline_block">

<img width="300px" align="right" src="https://ai.thestempedia.com/wp-content/uploads/2022/07/LDR.png" alt="LDR">

## Índice

- [Título e Imagem de capa](#library_color_detector)
- [Descrição do projeto](#-descrição-do-projeto)
- [Como usar](#-como-usar)
- [Do It Yourself](#-do-it-yourself)
- [Tecnologias Utilizadas](#%EF%B8%8F-tecnologias-utilizadas)
- [Licença](#%EF%B8%8F-licença)

</div>

## :page_facing_up: Descrição do Projeto 

<br>

<img width="300px" align="left" src="https://uk.pi-supply.com/cdn/shop/products/8-LED-NeoPixels-Ring-Top_1200x1200.png?v=1571708735" alt="NeoPixel">

<br>


<p align="justify">A <strong>Color Detector (Detector de Cor)</strong>, se trata de uma biblioteca que foi desenvolvida para oferecer uma solução simples e eficiente na implementação de um Detector de Cor em projetos baseados em pataformas como <strong>Arduino</strong>. Nessa biblioteca, utiliza-se um sensor <strong>LDR (Light Dependent Resistor)</strong> para medir a intensidade de luz incidente e um <strong>LED NeoPixel RGB</strong> para exibir visualmente a cor detectada, sendo assim, ela proporciona pode proporcionar em seus projetos uma maior interatividade ao integrar funcionalidades de Detecção de Cor.
</p>

<br>

## :gear: Como Usar

### Instalação

- Baixe o arquivo ZIP da biblioteca <strong>ColorDetector</strong> do repositório GitHub ou clone este repositório para o seu computador;
- Copie a pasta <strong>ColorDetector</strong> para o diretório libraries do seu ambiente de desenvolvimento Arduino.
    - Em sistemas Windows, geralmente está localizado em `C:\Users\SeuUsuario\Documents\Arduino\libraries`;
    - Em sistemas macOS, geralmente está localizado em `~/Documents/Arduino/libraries`;
    - Em sistemas Linux, geralmente está localizado em `~/Arduino/libraries`.

### Uso básico

```shell
> Comece criando o arquivo color_detector.ino
```

- Inclua a biblioteca no seu sketch Arduino:
```c++
#include <Color_Detector.h> 
```

- Especifique os pinos e crie um objeto <strong>Color_Detector</strong>:
```c++
// Definindo os pinos
#define pin_np 3
#define pin_ldr A0
#define num_leds 1

// Inicializando o objeto da biblioteca
Color_Detector ldrColor(pin_np, pin_ldr, num_leds);
```

- No <strong>setup()</strong>, inicialize o objeto <strong>Color_Detector</strong>:
```c++
void setup()
{
    // Iniciando a biblioteca
    ldrColor.begin();
}
```

- Na função <strong>loop()</strong>, chame <strong>detectColor()</strong> para obter a cor detectada pelo sensor LDR:
```c++
void loop()
{
    // Detectando a cor
    ldrColor.detectColor();
}
```

## :construction_worker: Do It Yourself

<p align="justify">Este exemplo básico permite que você detecte e exiba cores usando um sensor LDR e um LED NeoPixel RGB em seu projeto Arduino. Certifique-se de ajustar as conexões de hardware e os parâmetros da biblioteca conforme necessário para o seu setup específico:</p>

```c++
// Inclusão da Biblioteca
#include <Color_Detector.h>

/*  Conexões de Hardware
 *  Conecte o pino de dados do NeoPixel (pino_np) ao pino digital 3 do Arduino;
 *  Conecte o terminal do LDR (pino_ldr) ao pino analógico A0 do Arduino;
 *  Conecte o terminal restante do LDR ao GND do Arduino.
 */
#define pin_np 3
#define pin_ldr A0
#define num_leds 1

// Inicializando o objeto da biblioteca com os pinos corretos
Color_Detector ldrColor(pin_np, pin_ldr, num_leds);

void setup()
{
    // Iniciando a biblioteca | Chame a função begin() para iniciar a biblioteca.
    ldrColor.begin();
}

void loop()
{
    // Detectando a cor | chame detectColor() para obter a cor detectada pelo sensor LDR.
    ldrColor.detectColor();
}

```
Para mais informações de como o código funciona, <a href="./Examples/Color_Detector/Color_Detector.ino">Acesse o código aqui</a>.


## :hammer_and_wrench: Tecnologias Utilizadas

<div align="center">

![YouTube](https://img.shields.io/badge/YouTube-%23FF0000.svg?style=for-the-badge&logo=YouTube&logoColor=white)
![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23000000.svg?style=for-the-badge&logo=github&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

</div>

# :card_index_dividers: Licença
Licença MIT. Para mais informações sobre a licença, <a href="./LICENSE">Clique aqui</a>

<img src="https://github.com/umroboporaluno/.github/blob/main/profile/ura-logo.png" alt="URA Logo" width="100" align="right" />