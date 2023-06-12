#include "lib.h"

class NewAppA : public NewLib
{
public:
    void unstableAppOp1() { cout << "[Application] : unstableAppOp1 from App A" << endl; }
    void unstableAppOp2() { cout << "[Application] : unstableAppOp2 from App A" << endl; }
};

class NewAppB : public NewLib
{
public:
    void unstableAppOp1() { cout << "[Application] : unstableAppOp1 from App B" << endl; }
    void unstableAppOp2() { cout << "[Application] : unstableAppOp2 from App B" << endl; }
    void optionalAppHook() { cout << "[Application] : Application Running This Step..." << endl; }
};

int main()
{
    NewAppA a;
    NewAppB b;
    a.Run();
    b.Run();
    return 0;
}