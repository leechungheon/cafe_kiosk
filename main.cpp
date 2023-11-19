#include <iostream>
#include "header.h"
using namespace std;

int price = 0;
int count_menu = 0;//메뉴 개수 체크
int select_menu[] = { 0 };
int option[2][10] = {}; // 1행에 무료옵션 배열, 2행에 유료옵션 배열 저장//값이 0이면 옵션x, 값이 1 이면 옵션 o
void price_total(); //총 금액을 계산하는 함수
void Receipt_show();//영수증을 출력하는 함수

int main() {
    
    Init init;
    Menu menu;
    Receipt receipt;
   
    init.show();// 포장/매장 선택
    do {
        price = 0;//가격 초기화
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                option[i][j] = 0;
            }
        }//옵션 초기화
        
        
        select_menu[count_menu] = menu.show(price);  //메인 메뉴를 선택해 price에 합산 및 메뉴 체크
        if (select_menu[count_menu] != 0) {
            menu.option(option);  //옵션을 선택해 option배열에 저장
            receipt.name(select_menu[count_menu]); //상품명 출력
            price_total();   //총 금액을 계산하는 함수
            cout << price << "원" << endl;
        }
        count_menu++;
        
       
    } while (select_menu[count_menu-1]!=0);

    //영수증 출력
    cout << "                  [영 수 증]                " << endl;
    cout << "[매장명]  hong coffee & chung bread " << endl;
    cout << "[주 소]  충북 청주시 충대로 E8-7" << endl;
    cout << "[대표자] 홍상우 , 이충헌" << endl;
    cout << "===========================================" << endl;
    cout << " 상  품  명             수 량        금 액" << endl;
    for (int i = 0; i < count_menu; i++) {

        if (menu.select == 1)cout << "아메리카노" << "         " << "     " << "1500" << endl;
        else if (menu.select == 2)cout << "카페라떼" << "         " << "     " << "2900" << endl;
        else if (menu.select == 3)cout << "바닐라라떼" << "        " << "3300" << endl;
        else if (menu.select == 4)cout << "아이스티" << "       " << "2000" << endl;
        else if (menu.select == 5)cout << "딸기스무디" << "       " << "4000" << endl;
        else if (menu.select == 6)cout << "그린티스무디" << "       " << "4000" << endl;
        else if (menu.select == 7)cout << "치즈케잌" << "       " << "5000" << endl;
        else if (menu.select == 8)cout << "초코케잌" << "       " << "5000" << endl;
        else if (menu.select == 9)cout << "아몬드쿠키" << "       " << "2200" << endl;
    }
    cout << "===========================================" << endl;
    cout << "합 계 금 액                  " << price_total << endl;
    return 0;
}
//총 금액을 계산하는 함수구현
void price_total()
{
    for (int i = 1; i <7; i++) {   //0행(무료옵션)은 무료옵션이므로 1행(유료옵션)만 price에 합산한다.
        price += option[1][i];
    }
}

