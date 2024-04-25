#ifndef hpdesktopbuilder_h
#define hpdesktopbuilder

#include "desktopBuilder.hpp"
class HpDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};
#endif