#ifndef TWO_LIBS_FIRST_H
#define TWO_LIBS_FIRST_H
#include "Counted.h"
using namespace zxing;
class Bar : public Counted
{
public:
    Bar(int i): data(i){} 
    virtual ~Bar(){}
public:
    int data;
};

class First {
public:
    First();  
    bool test(int i);
private:
    int test(Ref<Bar> a, Ref<Bar> b);
};

#endif // TWO_LIBS_FIRST_H
