#ifndef Sparkle_h
#define Sparkle_h

#include "Program.h"

class Sparkle : public Program {
  public:
    int threshold;
    void start();
    void update();
    void writeChannel(uint8_t channelID, uint8_t value);
};

#endif