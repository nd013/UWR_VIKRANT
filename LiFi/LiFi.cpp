#include"LiFi.h"
#include<Arduino.h>

LiFi :: LiFi()
  {}
  LiFi :: LiFi(int a, int c, int d, int e, int f)
  {
    s0 = a;
    s1 = c;
    s2 = d;
    s3 = e;
    s4 = f;
  }
  void LiFi :: pinsetup()
  {
    pinMode(s0, OUTPUT);
    pinMode(s1, OUTPUT);
    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(s4, INPUT);
    digitalWrite(s0, HIGH);
    digitalWrite(s1, LOW);
  }
  void LiFi :: setparameters(int x, int y, int z)
  {
    redmin = x ;
    redmax = y ;
    saturationvalue = z ;
  }
  int LiFi :: getreadpw()
  {
    bool val;
    int readvalue;
    int pw;
    digitalWrite(s2,LOW);
    digitalWrite(s3,LOW);
    pw = pulseIn(s4,LOW);
    readvalue = map(pw,redmin,redmax,255,0);
    Serial.println(readvalue);
    (readvalue>=saturationvalue)?val=0:val=1;
    return val;
  }
