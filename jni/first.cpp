#include "first.h"
#include <iostream>
First::First() {}
bool First::test(int i)
{
    int ret = 0;
    int x[32] = {0};
    try {
        ret = test(Ref<Bar>(new Bar(0)), Ref<Bar>(new Bar(i)));
    } catch (int e) {
        ret = e;
        std::cout << "got e="<<e<<std::endl;
    }
    std::cout << "got ret="<<ret <<" "<< x[ret]<<std::endl;
    return ret == i;
}
int First::test(Ref<Bar> a, Ref<Bar> b)
{
    if(a->data==b->data){
        throw a->data;
    }else{
        return test(Ref<Bar>(new Bar(a->data+1)), Ref<Bar>(new Bar(b->data)));
    }
}
