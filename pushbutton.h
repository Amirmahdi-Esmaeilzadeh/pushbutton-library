
#ifndef tl
#define tl

#if(ARDUINO>=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
class pushbutton {
  public:
    pushbutton(bool sure);
    bool release();
    bool press();
    int data();
    void begin(int serial, bool m ,int pin);
  private:
    bool msg;
    bool pdata;
    bool finishing_r;
    bool finishing_p;
    bool bdata;
    bool mode;
    int pin;
};
#endif
