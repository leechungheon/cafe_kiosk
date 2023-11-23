#include <iostream>
#include "header.h"
#include <string>
using namespace std;
void Receipt::name(int select_menu) {
    switch (select_menu) {
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
int Receipt::price_total(int& price, int option[][10])
{
    for (int i = 1; i < 7; i++) {   //0행(무료옵션)은 무료옵션이므로 1행(유료옵션)만 price에 합산한다.
        price += option[1][i];
    }
    return price;
}
void Receipt::receipt_show(int sum_menu[], int sum_price[]) {
    int total = 0;
    int enter = 0;
    cout << "                  [영 수 증]                " << endl;
    cout << "[매장명]  hong coffee & chung bread " << endl;
    cout << "[주 소]  충북 청주시 충대로 E8-7" << endl;
    cout << "[대표자] 홍상우 , 이충헌" << endl;
    cout << "===========================================" << endl;
    cout << " 상  품  명                          금 액" << endl;
    for (int i = 0; i < 10; i++) {
        if (sum_menu[i] != 0 && sum_price[i] != 0) {
            name(sum_menu[i]);
            cout << "                           " << sum_price[i] << endl;
            total += sum_price[i];
        }
        else {
            enter++;
        }
    }
    for (int j = 0; j < enter; j++) {
        cout << endl;
    }
    cout << "===========================================" << endl;
    cout << "합 계 금 액                          " << total << endl;
}