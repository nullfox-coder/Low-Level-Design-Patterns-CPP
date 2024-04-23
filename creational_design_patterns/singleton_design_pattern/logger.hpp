#ifndef logger_h
#define logger_h

#include <string>
#include <mutex>
using namespace std;

class Logger{
private:
    static int ctr;
    static Logger* loggerInstance;
    static mutex mtx;
    Logger();
    Logger(const Logger&);
    Logger operator = (const Logger&);

public:
    static Logger* getInstance();
    void Log(string msg);
};

#endif