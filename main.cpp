#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int price = 0;
int count_menu = 0;//�޴� ���� üũ
int select_menu[] = { 0 };
int option[2][10] = {}; // 1�࿡ ����ɼ� �迭, 2�࿡ ����ɼ� �迭 ����//���� 0�̸� �ɼ�x, ���� 1 �̸� �ɼ� o
int sum_price[10];
int sum_menu[10];
int num = 0;
int main() {

    Init init;
    Receipt receipt;
    Menu menu;
    init.show();// ����/���� ����
    do {


        price = 0;//���� �ʱ�ȭ

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 10; j++) {

                option[i][j] = 0;

            }

        }//�ɼ� �ʱ�ȭ

        select_menu[count_menu] = menu.show(price);  //���� �޴��� ������ price�� �ջ� �� �޴� üũ

        if (select_menu[count_menu] != 0) { //���� �ϱ� �ƴ϶��

            if (select_menu[count_menu] != 7 && select_menu[count_menu] != 8 && select_menu[count_menu] != 9) {//����Ʈ �ƴҰ��
                menu.option(option);
            } //�ɼ��� ������ option�迭�� ����

            receipt.name(select_menu[count_menu]); //��ǰ�� ���
            cout << receipt.price_total(price, option) << endl;   //�� �ݾ��� ����ϴ� �Լ�

            sum_price[num] = receipt.price_total(price, option);
            sum_menu[num] = select_menu[count_menu];
            num++;

        }
        count_menu++;

    } while (select_menu[count_menu - 1] != 0);

    receipt.receipt_show(sum_menu, sum_price);

    return 0;
}