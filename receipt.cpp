#include <iostream>
#include "header.h"
using namespace std;
void Receipt::name(int menu_select) {
    switch (menu_select) {
    case 1:
        cout << "아메리카노 ";
        break;
    case 2:
        cout << "카페라떼 ";
        break;
    case 3:
        cout << "바닐라라떼 ";
        break;
    case 4:
        cout << "아이스티 ";
        break;
    case 5:
        cout << "딸기스무디 ";
        break;
    case 6:
        cout << "그린티스무디 ";
        break;
    case 7:
        cout << "치즈케잌 ";
        break;
    case 8:
        cout << "초코케잌 ";
        break;
    case 9:
        cout << "아몬드쿠키 ";
        break;

    }
}

