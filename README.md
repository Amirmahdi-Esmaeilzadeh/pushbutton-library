# pushbutton_library
pushbutton(bool sure);
void begin(int serial, bool m ,int pin);
  int serial: serial baud rate
  bool m: you can tell him that your connection is pullup or pulldown.(1=pullup 0=pulldown)
bool release();
  it will tell you that pushbutton release or no.//this is for pull up or pull down you said . this is release in pullup and in pulldown 
bool press();
  it will tell you that pushbutton pressed or no.//this is for pull up or pull down you said . this is pressed in pullup and in pulldown
int data();
  it will give you the pushbutton output data. .//this is for pull up or pull down you said . this is data in pullup and in pulldown
