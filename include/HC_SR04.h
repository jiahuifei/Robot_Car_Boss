#ifndef __HC_SR04_H
#define __HC_SR04_H
//引脚定义
#define Echo_Pin A5
#define Trig_Pin A4

//引脚初始化
void HC_SR04_Pin_Init();
//距离探测
float Distance_Check();

#endif
