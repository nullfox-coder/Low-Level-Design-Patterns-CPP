#include "desktop.hpp"
#include <iostream>

void Desktop::setMonitor(string pMonitor)
{
    monitor = pMonitor;
}
void Desktop::setKeyBoard(string pKeyBoard)
{
    keyboard = pKeyBoard;
}
void Desktop::setMouse(string pMouse)
{
    mouse = pMouse;
}
void Desktop::setProcessor(string pProcessor)
{
    processor = pProcessor;
}
void Desktop::setRam(string pRam)
{
    ram = pRam;
}
void Desktop::setMotherboard(string pMotherBoard)
{
    motherboard = pMotherBoard;
}
void Desktop::showSpecs()
{
    cout<<"Monitor "<<monitor<<endl;
    cout<<"KeyBoard "<<keyboard<<endl;
    cout<<"Mouse "<<mouse<<endl;
    cout<<"Speaker "<<speaker<<endl;
    cout<<"RAM "<<ram<<endl;
    cout<<"Processor "<<processor<<endl;
    cout<<"Mother Board "<<motherboard<<endl;
}
