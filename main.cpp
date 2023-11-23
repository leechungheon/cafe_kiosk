#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int price = 0;
int count_option = 0;  //옵션 선택 개수 체크
int count_menu = 0;//메뉴 개수 체크
int select_menu[] = { 0 };  

int select_option[] = { 0 };  //유료 옵션 선택의 리턴값을 저장하는 배열
int option[2][10] = {}; // 1행에 무료옵션 배열, 2행에 유료옵션 배열 저장//값이 0이면 옵션x, 값이 1 이면 옵션 o
int price_option[10] = { 0 }; //option의 가격을 저장하는 배열

int main_price[10];
int sum_price[10];
int sum_menu[10];
int num=0;



int main() {
    
    Init init;
    Receipt receipt;
    Menu menu;
    init.show();// 포장/매장 선택
    int basic_option = 0;

    do {            
        price = 0;//가격 초기화

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                option[i][j] = 0;
            }
        }//옵션 초기화
        
        select_menu[count_menu] = menu.show(price);  //메인 메뉴를 선택해 price에 합산 및 메뉴 체크
                                                     //메뉴선택 완료 후 결제하기를 누른다면 0값이 저장되어 반복문을 빠져나간다. 
        

        if (select_menu[count_menu] != 0) { //결제 하기 아니라면
            if (select_menu[count_menu] != 7 && select_menu[count_menu] != 8 && select_menu[count_menu] != 9) {//디저트 아닐경우
                for (int i = 0; i<10; i++) {               
                    if (basic_option == 0) {
                        int temp;
                        basic_option++;
                        
                        do {
                            cout << "===========================================" << endl;
                            cout << "                1. ICE" << endl;
                            cout << "                2. HOT" << endl;
                            cout << "===========================================" << endl;
                            cin >> temp;
                            if (temp == 1)
                                cout << "ICE를 선택하였습니다." << endl;
                            else if (temp == 2)
                                cout << "HOT를 선택하였습니다." << endl;
                        } while (temp != 1 && temp != 2);
                    }
                    //여기까지 핫/ 아이스 결정
                    //이제부터 무료, 유료 옵션 결정


                    select_option[i] = menu.option(option);    //option의 리턴값 저장              
                    price_option[count_option] = receipt.price_option(select_option[i]); //option의 가격을 저장한다.
                    count_option++;
                    if (select_option[i] == 0)
                        break;
                }
                
            } //옵션을 선택해 option배열에 저장

            receipt.name(select_menu[count_menu]); //상품명 출력
            cout<< receipt.price_total(price, option)<<endl;   //총 금액을 계산하는 함수(price값에 option값을 더한다.)

            sum_price[num] = receipt.price_total(price, option); 

            main_price[num] = receipt.price_main(select_menu[count_menu]); //main menu 번호에 맞는 가격을 저장
            sum_menu[num] = select_menu[count_menu];

            
            num++;

        }
        count_menu++;
       
    } while (select_menu[count_menu-1]!=0);

    receipt.receipt_show(sum_menu,main_price,select_option,price_option);


    return 0;
}