#include <iostream>
#include "header.h"
using namespace std;

int price = 0;
int count_menu = 0;//�޴� ���� üũ
int select_menu[] = { 0 };
int option[2][10] = {}; // 1�࿡ ����ɼ� �迭, 2�࿡ ����ɼ� �迭 ����//���� 0�̸� �ɼ�x, ���� 1 �̸� �ɼ� o
void price_total(); //�� �ݾ��� ����ϴ� �Լ�
void Receipt_show();//�������� ����ϴ� �Լ�

int main() {
    
    Init init;
    Menu menu;
    Receipt receipt;
   
    init.show();// ����/���� ����
    do {
        price = 0;//���� �ʱ�ȭ
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                option[i][j] = 0;
            }
        }//�ɼ� �ʱ�ȭ
        
        
        select_menu[count_menu] = menu.show(price);  //���� �޴��� ������ price�� �ջ� �� �޴� üũ
        if (select_menu[count_menu] != 0) {
            menu.option(option);  //�ɼ��� ������ option�迭�� ����
            receipt.name(select_menu[count_menu]); //��ǰ�� ���
            price_total();   //�� �ݾ��� ����ϴ� �Լ�
            cout << price << "��" << endl;
        }
        count_menu++;
        
       
    } while (select_menu[count_menu-1]!=0);

    //������ ���
    cout << "                  [�� �� ��]                " << endl;
    cout << "[�����]  hong coffee & chung bread " << endl;
    cout << "[�� ��]  ��� û�ֽ� ���� E8-7" << endl;
    cout << "[��ǥ��] ȫ��� , ������" << endl;
    cout << "===========================================" << endl;
    cout << " ��  ǰ  ��             �� ��        �� ��" << endl;
    for (int i = 0; i < count_menu; i++) {

        if (menu.select == 1)cout << "�Ƹ޸�ī��" << "         " << "     " << "1500" << endl;
        else if (menu.select == 2)cout << "ī���" << "         " << "     " << "2900" << endl;
        else if (menu.select == 3)cout << "�ٴҶ��" << "        " << "3300" << endl;
        else if (menu.select == 4)cout << "���̽�Ƽ" << "       " << "2000" << endl;
        else if (menu.select == 5)cout << "���⽺����" << "       " << "4000" << endl;
        else if (menu.select == 6)cout << "�׸�Ƽ������" << "       " << "4000" << endl;
        else if (menu.select == 7)cout << "ġ���ɟ�" << "       " << "5000" << endl;
        else if (menu.select == 8)cout << "�����ɟ�" << "       " << "5000" << endl;
        else if (menu.select == 9)cout << "�Ƹ����Ű" << "       " << "2200" << endl;
    }
    cout << "===========================================" << endl;
    cout << "�� �� �� ��                  " << price_total << endl;
    return 0;
}
//�� �ݾ��� ����ϴ� �Լ�����
void price_total()
{
    for (int i = 1; i <7; i++) {   //0��(����ɼ�)�� ����ɼ��̹Ƿ� 1��(����ɼ�)�� price�� �ջ��Ѵ�.
        price += option[1][i];
    }
}

