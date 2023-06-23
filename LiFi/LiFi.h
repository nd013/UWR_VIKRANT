#ifndef LiFi_h
#define LiFi_h
#include<Arduino.h>
class LiFi
{
  private:
  int s0;
  int s1;
  int s2;
  int s3;
  int s4;

  int redmin;
  int redmax;
  int saturationvalue;

  public:
  LiFi();
  LiFi(int a, int c, int d, int e, int f);
  void pinsetup();
  void setparameters(int x, int y, int z);
  int getreadpw();
};
#endif
