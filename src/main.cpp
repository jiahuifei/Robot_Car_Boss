#include "main.h"

void setup()
{
    Confinguration();
    
}

void loop()
{
    IIC_Receieve();
}

void Confinguration()
{
    IIC_Init();
    Serial.begin(9600);//串口初始化化
}
