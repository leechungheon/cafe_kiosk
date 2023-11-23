#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int price = 0;
int count_menu = 0;//메뉴 개수 체크
int select_menu[] = { 0 };
int option[2][10] = {}; // 1행에 무료옵션 배열, 2행에 유료옵션 배열 저장//값이 0이면 옵션x, 값이 1 이면 옵션 o
int sum_price[10];
int sum_menu[10];
int num = 0;
int main() {

    Init init;
    Receipt receipt;
    Menu menu;
    init.show();// 포장/매장 선택
    do {


        price = 0;//가격 초기화

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 10; j++) {

                option[i][j] = 0;

            }

        }//옵션 초기화

        select_menu[count_menu] = menu.show(price);  //메인 메뉴를 선택해 price에 합산 및 메뉴 체크

        if (select_menu[count_menu] != 0) { //결제 하기 아니라면

            if (select_menu[count_menu] != 7 && select_menu[count_menu] != 8 && select_menu[count_menu] != 9) {//디저트 아닐경우
                menu.option(option);
            } //옵션을 선택해 option배열에 저장

            receipt.name(select_menu[count_menu]); //상품명 출력
            cout << receipt.price_total(price, option) << endl;   //총 금액을 계산하는 함수

            sum_price[num] = receipt.price_total(price, option);
            sum_menu[num] = select_menu[count_menu];
            num++;

        }
        count_menu++;

    } while (select_menu[count_menu - 1] != 0);

    receipt.receipt_show(sum_menu, sum_price);

    return 0;
}