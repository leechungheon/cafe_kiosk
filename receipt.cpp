#include <iostream>
#include "header.h"
using namespace std;
void Receipt::name(int menu_select) {
    switch (menu_select) {
    case 1:
        cout << "�Ƹ޸�ī�� ";
        break;
    case 2:
        cout << "ī��� ";
        break;
    case 3:
        cout << "�ٴҶ�� ";
        break;
    case 4:
        cout << "���̽�Ƽ ";
        break;
    case 5:
        cout << "���⽺���� ";
        break;
    case 6:
        cout << "�׸�Ƽ������ ";
        break;
    case 7:
        cout << "ġ���ɟ� ";
        break;
    case 8:
        cout << "�����ɟ� ";
        break;
    case 9:
        cout << "�Ƹ����Ű ";
        break;

    }
}

