#include <iostream>
#include "header.h"
using namespace std;
int main() {
    Init init;
    Menu menu;
    init.show();// ����/���� ����
    if (menu.show() == 1) {
        menu.option1();
    }
    else if (menu.show() == 2) {
        menu.option2();
    }
    else {
    }
    return 0;
}