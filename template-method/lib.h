#include <iostream>
using namespace std;

class NewLib
{
public:
    void Run()
    {
        stableApplicationStart();
        unstableAppOp1();
        unstableAppOp2();
        optionalAppHook();
        stableApplicationEnd();
    }

    void stableApplicationStart() { cout << "[Framework] : Application Started.." << endl; }

    void stableApplicationEnd() { cout << "[Framework] : Application Finished..." << endl; }

protected:
    virtual void optionalAppHook() { cout << "[Framework] : Application Running This Step..." << endl; }

    virtual void unstableAppOp1() = 0;
    virtual void unstableAppOp2() = 0;
};