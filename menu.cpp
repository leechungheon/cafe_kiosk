#include <iostream>
#include "header.h"
using namespace std;
int Menu::show() {
    int select;
    cout << "Ŀ��" << endl;
    cout << "1. �Ƹ޸�ī��" << endl;
    cout << "2. ī���" << endl;
    cout << "3. �ٴҶ��" << endl;
    cout << endl;

    cout << "Ƽ/������" << endl;
    cout << "4. ���̽�Ƽ" << endl;
    cout << "5. ���⽺����" << endl;
    cout << "6. �׸�Ƽ������" << endl;
    cout << endl;

    cout << "����Ʈ" << endl;
    cout << "7. ġ���ɟ�" << endl;
    cout << "8. �����ɟ�" << endl;
    cout << "9. �Ƹ����Ű" << endl;
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