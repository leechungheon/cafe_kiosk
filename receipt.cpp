#include <iostream>
#include "header.h"
#include <string>
using namespace std;
void Receipt::name(int select_menu) {
    switch (select_menu) {
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
int Receipt::price_total(int& price, int option[][10])
{
    for (int i = 1; i < 7; i++) {   //0��(����ɼ�)�� ����ɼ��̹Ƿ� 1��(����ɼ�)�� price�� �ջ��Ѵ�.
        price += option[1][i];
    }
    return price;
}
void Receipt::receipt_show(int sum_menu[], int sum_price[]) {
    int total = 0;
    int enter = 0;
    cout << "                  [�� �� ��]                " << endl;
    cout << "[�����]  hong coffee & chung bread " << endl;
    cout << "[�� ��]  ��� û�ֽ� ���� E8-7" << endl;
    cout << "[��ǥ��] ȫ��� , ������" << endl;
    cout << "===========================================" << endl;
    cout << " ��  ǰ  ��                          �� ��" << endl;
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
    cout << "�� �� �� ��                          " << total << endl;
}