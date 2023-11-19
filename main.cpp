#include <iostream>
#include "header.h"
using namespace std;

int main() {
    int price = 0;
    int option[2][10] = {}; // 1행에 무료옵션 배열, 2행에 유료옵션 배열 저장//값이 0이면 옵션x, 값이 1 이면 옵션 o
    Init init;
    Menu menu;
    init.show();// 포장/매장 선택
    menu.show(price);
    menu.option(option);
    //price_total.Get_price();
    return 0;
}