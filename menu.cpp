#include <iostream>
#include "header.h"
using namespace std;
int Menu::show(int &price) {
   
        cout << "=====================================" << endl;
        cout << "커피" << endl;
        cout << "1. 아메리카노 - 1500원" << endl;
        cout << "2. 카페라떼 - 2900원" << endl;
        cout << "3. 바닐라라떼- 3300원" << endl;
        cout << endl;

        cout << "티/스무디" << endl;
        cout << "4. 아이스티 - 2000원" << endl;
        cout << "5. 딸기스무디 - 4000원" << endl;
        cout << "6. 그린티스무디 - 4000원" << endl;
        cout << endl;

        cout << "디저트" << endl;
        cout << "7. 치즈케잌 - 5000원" << endl;
        cout << "8. 초코케잌 - 5000원" << endl;
        cout << "9. 아몬드쿠키 - 2200원" << endl;
        cout << endl;
        cout << "10. 결제하기" << endl;
        cout << "=====================================" << endl;
        cout << endl;
     do {
        cin >> select;

        if (select == 10 && Menu_count == 0) {
            cout << "다시 입력하시오." << endl;
        }
        else if (0 < select && select < 11)
            Menu_count += 1;//주문한 메뉴 개수
        else
            Menu_count = 0;
    } while (select > 10 || select < 0 || Menu_count == 0); // 범위밖의 숫자, 메뉴가 0일 때 다시수행


    if (select == 1 || select == 2 || select == 3) {
        if (select == 1)price += 1500;
        if (select == 2)price += 2900;

        if (select == 3)price += 3300;
        return price; //커피 옵션
    }
    else if (select == 4 || select == 5 || select == 6) {
        if (select == 4)price += 2000;
        if (select == 5)price += 4000;
        if (select == 6)price += 4000;
        return price;//티/스무디 옵션
    }
    else if (select == 10) {
        return 2;//결제하기로
    }
    else {
        return 0;//
    }
   
}
void Menu::option(int option[][10]) {
    int temp;
    int option_select; // 무료, 유료 옵션 선택
    int option_choose; // 세부 옵션 선택

   
    
        cout << "===========================================" << endl;
        cout << "                1. ICE" << endl;
        cout << "                2. HOT" << endl;
        cout << "===========================================" << endl;
    do {
        cin >> temp;
    } while (temp!=1&&temp!=2);

    //여기까지 핫/ 아이스 결정
    //이제부터 무료, 유료 옵션 결정
    do {
    int repeat = 0;
    cout << "===========================================" << endl;
    cout << "                1. 무료옵션" << endl;
    cout << "                2. 유료옵션" << endl;
    cout << "                3. 선택완료" << endl;
    cout << "===========================================" << endl;
    
    cin >> option_select;
    //무료옵션인 경우
    
        while (option_select == 1) {
            if (repeat == 0) {
                cout << "===========================================" << endl;
                cout << "무료옵션\n" << endl;
                cout << "1. 설탕시럽 추가" << endl;
                cout << "2. 얼음 추가" << endl;
                cout << "3. 농도 연하게" << endl;
                cout << "4. 선택 완료" << endl;
                cout << "===========================================" << endl;
                repeat++;
            }
            cin >> option_choose;
            if (option_choose == 1) {
                option[0][option_choose] = 1;
                cout << "설탕시럽이 추가되었습니다." << endl;
            }
            else if (option_choose == 2) {
                option[0][option_choose] = 1;
                cout << "얼음이 추가되었습니다." << endl;
            }
            else if (option_choose == 3) {
                option[0][option_choose] = 1;
                cout << "농도가 연해졌습니다." << endl;
            }
            else if (option_choose == 4) {
                break;
            }
            else
                cout << "다시 입력하십시오." << endl;
            
        }
        //유료옵션인 경우
        while (option_select == 2) {
            if (repeat == 0) {
                cout << "===========================================" << endl;
                cout << "유료옵션\n" << endl;
                cout << "1. 바닐라 시럽 - 500원" << endl;
                cout << "2. 헤이즐넛 시럽 - 500원" << endl;
                cout << "3. 휘핑크림 - 500원" << endl;
                cout << "4. 샷추가 - 500원" << endl;
                cout << "5. 펄추가 - 700원" << endl;
                cout << "6. 우유 추가 - 500원" << endl;
                cout << "7. 선택 완료" << endl;
                cout << "===========================================" << endl;
                repeat++;
            }
            cin >> option_choose;
            if (option_choose == 1) {
                option[1][option_choose] = 500;
                cout << "바닐라 시럽이 추가되었습니다." << endl;
            }
            else if (option_choose == 2) {
                option[1][option_choose] = 500;
                cout << "헤이즐넛 시럽이 추가되었습니다." << endl;
            }
            else if (option_choose == 3) {
                option[1][option_choose] = 500;
                cout << "휘핑크림이 추가되었습니다." << endl;
            }
            else if (option_choose == 4) {
                option[1][option_choose] = 500;
                cout << "샷 추가되었습니다." << endl;
            }
            else if (option_choose == 5) {
                option[1][option_choose] = 700;
                cout << "펄 추가되었습니다." << endl;
            }
            else if (option_choose == 6) {
                option[1][option_choose] = 500;
                cout << "우유가 추가되었습니다." << endl;
            }
            else if (option_choose == 7) {
                break;
            }
            else
                cout << "다시 입력하십시오." << endl;
        }
    } while (option_select != 3);
}