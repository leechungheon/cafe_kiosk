#include <iostream>
#include "header.h"
using namespace std;

int price = 0;
int option[2][10] = {}; // 1�࿡ ����ɼ� �迭, 2�࿡ ����ɼ� �迭 ����//���� 0�̸� �ɼ�x, ���� 1 �̸� �ɼ� o
void price_total(); //�� �ݾ��� ����ϴ� �Լ�


int main() {
    Init init;
    Menu menu;
      
    init.show();// ����/���� ����
    menu.show(price);  //���� �޴��� ������ price�� �ջ�
    menu.option(option);  //�ɼ��� ������ option�迭�� ����
    price_total();   //�� �ݾ��� ����ϴ� �Լ�
    cout << price << endl;
    return 0;
}



//�� �ݾ��� ����ϴ� �Լ�����
void price_total()
{
    for (int i = 0; i < 6; i++) {   //0��(����ɼ�)�� ����ɼ��̹Ƿ� 1��(����ɼ�)�� price�� �ջ��Ѵ�.
        price += option[1][i];
    }
}
