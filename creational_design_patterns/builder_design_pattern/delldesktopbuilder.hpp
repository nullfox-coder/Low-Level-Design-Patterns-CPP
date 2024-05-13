#ifndef delldesktopbuilder_h
#define delldesktopbuilder

#include "desktopBuilder.hpp"
class DellDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};
#endif