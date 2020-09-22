#ifndef error:NotDefined
#define sucessfullyDefined
#if(ARDUINO>=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
class RGBled{
  public:
    RGBled(bool sure);
    void begin(int boad,int r,int g,int b);
    void setcolor(String color);
    void rgbcolor(int r,int g,int b);
  private:
    bool msg;
    int R,G,B;
};
#endif
