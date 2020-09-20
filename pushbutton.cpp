#include "PushButton.h"

pushbutton::pushbutton(bool sure){
  msg= sure;
}
void pushbutton::begin(int serial,bool m , int p){
  Serial.begin(serial);
  mode=m;
  pin=p;
  pinMode(pin,INPUT);
  if(msg){
    Serial.print("PushButton library started with boad rate ");
    Serial.print(serial);
    Serial.print(" and ");
    Serial.print(m);
    Serial.println(" mode(0=GND connect 1=VCC connect");
  }}
bool pushbutton::release(){
  if(mode==true){
    pdata=digitalRead(pin);
    if(pdata==true){
      finishing_r= false;
    }
     if(pdata==false){
      finishing_r= true;
    }
  }
    if(mode==false){
    pdata=digitalRead(pin);
    if(pdata==false){
      finishing_r= false;
    }
     if(pdata==true){
      finishing_r= true;
    }
  }
  return finishing_r;
}
bool pushbutton::press(){
  if(mode==true){
    pdata=digitalRead(pin);
    if(pdata==true){
      finishing_p= true;
    }
     if(pdata==false){
      finishing_p= false;
    }
  }
    if(mode==false){
    pdata=digitalRead(pin);
    if(pdata==false){
      finishing_p= true;
    }
     if(pdata==true){
      finishing_p= false;
    }
  }
  return finishing_p;
}
int pushbutton::data(){
  bdata=digitalRead(pin);
  return bdata;
}
