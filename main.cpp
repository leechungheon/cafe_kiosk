#include <iostream>
#include "header.h"
using namespace std;

int main() {
    int price = 0;
    int option[2][10] = {}; // 1�࿡ ����ɼ� �迭, 2�࿡ ����ɼ� �迭 ����//���� 0�̸� �ɼ�x, ���� 1 �̸� �ɼ� o
    Init init;
    Menu menu;
    init.show();// ����/���� ����
    menu.show(price);
    menu.option(option);
    //price_total.Get_price();
    return 0;
}