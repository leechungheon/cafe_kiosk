#include <iostream>
#include "header.h"
using namespace std;

int price = 0;
int option[2][10] = {}; // 1행에 무료옵션 배열, 2행에 유료옵션 배열 저장//값이 0이면 옵션x, 값이 1 이면 옵션 o
void price_total(); //총 금액을 계산하는 함수


int main() {
    Init init;
    Menu menu;
      
    init.show();// 포장/매장 선택
    menu.show(price);  //메인 메뉴를 선택해 price에 합산
    menu.option(option);  //옵션을 선택해 option배열에 저장
    price_total();   //총 금액을 계산하는 함수
    cout << price << endl;
    return 0;
}



//총 금액을 계산하는 함수구현
void price_total()
{
    for (int i = 0; i < 6; i++) {   //0행(무료옵션)은 무료옵션이므로 1행(유료옵션)만 price에 합산한다.
        price += option[1][i];
    }
}
