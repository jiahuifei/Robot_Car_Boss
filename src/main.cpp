#include "main.h"

// 用户函数
void Confinguration(void); // 外设初始化总函数

void setup()
{
  Confinguration();
}
void loop()
{
  IIC_Transmission();
}
void Confinguration(void) // 外设初始化总函数
{
  IIC_Init();
}