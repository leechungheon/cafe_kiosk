#include <iostream>
#include "header.h"
using namespace std;
int Menu::show() {
    int select;
    cout << "커피" << endl;
    cout << "1. 아메리카노" << endl;
    cout << "2. 카페라떼" << endl;
    cout << "3. 바닐라라떼" << endl;
    cout << endl;

    cout << "티/스무디" << endl;
    cout << "4. 아이스티" << endl;
    cout << "5. 딸기스무디" << endl;
    cout << "6. 그린티스무디" << endl;
    cout << endl;

    cout << "디저트" << endl;
    cout << "7. 치즈케잌" << endl;
    cout << "8. 초코케잌" << endl;
    cout << "9. 아몬드쿠키" << endl;
    cout << endl;
    do {
        cin >> select;

    } while (select > 9 || select < 1);

    if (select == 1 || select == 2 || select == 3) {
        return 1;
    }
    else if (select == 4 || select == 5 || select == 6) {
        return 2;
    }
    else {
        return 0;
    }
}
void Menu::option1() {
    int temp;
    cout << "1. ICE" << endl;
    cout << "2. HOT" << endl;
    do {
        cin >> temp;
    } while (temp!=1||temp!=2);
}