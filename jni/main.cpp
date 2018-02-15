#include <stdio.h>

struct A {
    ~A() {
        printf("dtor\n");
    }
};

void step2() {
    throw 0;
}

void step1() {
    A obj;
    step2();
}

int main() {
    try {
        step1();
    } catch (int e) {
    }
    return 0;
}
