#include <iostream>
#include "header.h"
#include <string>
using namespace std;

void Receipt::name(int select_menu) {
    switch (select_menu) {
    case 1:
        cout<< "�Ƹ޸�ī�� ";
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

void Receipt::option_name(int select_option) {
    switch (select_option) {
    case 1:
        cout << "�ٴҶ� �÷� ";
        break;
    case 2:
        cout << "������� �÷� ";
        break;
    case 3:
        cout << "����ũ�� ";
        break;
    case 4:
        cout << "���߰� ";
        break;
    case 5:
        cout << "���߰� ";
        break;
    case 6:
        cout << "���� �߰� ";
        break;

    }
}


int Receipt::price_main(int& price) {  //���� ���θ޴��� ���� ���� ���
    switch (price) {
    case 1:
        return 1500;
    case 2:
        return 2900;
    case 3:
        return 3300;
    case 4:
        return 4000;
    case 5:;
        return 4000;
    case 6:
        return 4000;
    case 7:
        return 5000;
    case 8:
        return 5000;
    case 9:
        return 2200;
    }
}

int Receipt::price_option(int& select_option) {  //�ɼǿ� ���� ���� ���
    switch (select_option) {
    case 1:
        return 500;
    case 2:
        return 500;
    case 3:
        return 500;
    case 4:
        return 500;
    case 5:;
        return 700;
    case 6:
        return 500;
    case -1:     //���ÿϷ�
        return 0;
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
    cout << "[��ȣ]              1�� " << endl;
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

/*
* void Receipt::receipt_show(int sum_menu[],int main_price[], int select_option[], int price_option[]) {
    int total = 0;
    int enter = 0;
    cout << "                  [�� �� ��]                " << endl;
    cout << "[�����]  hong coffee & chung bread " << endl;
    cout << "[�� ��]  ��� û�ֽ� ���� E8-7" << endl;
    cout << "[��ǥ��] ȫ��� , ������" << endl;
    cout << "===========================================" << endl;
    cout << " ��  ǰ  ��                          �� ��" << endl;


    //���θ޴� ���
    for (int i = 0; i < 10; i++) {
        if (sum_menu[i] != 0 && main_price[i] != 0) {
            name(sum_menu[i]);
            cout << "                             " << main_price[i] << endl;
            //total += main_price[i];
        }
    }

    //�ɼ� ���
    for (int i = 0; i < 10; i++) {
        if (select_option[i] != -1 || price_option[i] != 0) {
            option_name(select_option[i]);
            cout << "                            " << price_option[i] << endl;
            total += price_option[i];
        }
    }
    for (int j = 0; j < 5; j++) {
        cout << endl;
    }

}
*/