#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int price = 0;
int count_option = 0;  //�ɼ� ���� ���� üũ
int count_menu = 0;//�޴� ���� üũ
int select_menu[] = { 0 };  

int select_option[] = { 0 };  //���� �ɼ� ������ ���ϰ��� �����ϴ� �迭
int option[2][10] = {}; // 1�࿡ ����ɼ� �迭, 2�࿡ ����ɼ� �迭 ����//���� 0�̸� �ɼ�x, ���� 1 �̸� �ɼ� o
int price_option[10] = { 0 }; //option�� ������ �����ϴ� �迭

int main_price[10];
int sum_price[10];
int sum_menu[10];
int num=0;



int main() {
    
    Init init;
    Receipt receipt;
    Menu menu;
    init.show();// ����/���� ����
    int basic_option = 0;

    do {            
        price = 0;//���� �ʱ�ȭ

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 10; j++) {
                option[i][j] = 0;
            }
        }//�ɼ� �ʱ�ȭ
        
        select_menu[count_menu] = menu.show(price);  //���� �޴��� ������ price�� �ջ� �� �޴� üũ
                                                     //�޴����� �Ϸ� �� �����ϱ⸦ �����ٸ� 0���� ����Ǿ� �ݺ����� ����������. 
        

        if (select_menu[count_menu] != 0) { //���� �ϱ� �ƴ϶��
            if (select_menu[count_menu] != 7 && select_menu[count_menu] != 8 && select_menu[count_menu] != 9) {//����Ʈ �ƴҰ��
                for (int i = 0; i<10; i++) {               
                    if (basic_option == 0) {
                        int temp;
                        basic_option++;
                        
                        do {
                            cout << "===========================================" << endl;
                            cout << "                1. ICE" << endl;
                            cout << "                2. HOT" << endl;
                            cout << "===========================================" << endl;
                            cin >> temp;
                            if (temp == 1)
                                cout << "ICE�� �����Ͽ����ϴ�." << endl;
                            else if (temp == 2)
                                cout << "HOT�� �����Ͽ����ϴ�." << endl;
                        } while (temp != 1 && temp != 2);
                    }
                    //������� ��/ ���̽� ����
                    //�������� ����, ���� �ɼ� ����


                    select_option[i] = menu.option(option);    //option�� ���ϰ� ����              
                    price_option[count_option] = receipt.price_option(select_option[i]); //option�� ������ �����Ѵ�.
                    count_option++;
                    if (select_option[i] == 0)
                        break;
                }
                
            } //�ɼ��� ������ option�迭�� ����

            receipt.name(select_menu[count_menu]); //��ǰ�� ���
            cout<< receipt.price_total(price, option)<<endl;   //�� �ݾ��� ����ϴ� �Լ�(price���� option���� ���Ѵ�.)

            sum_price[num] = receipt.price_total(price, option); 

            main_price[num] = receipt.price_main(select_menu[count_menu]); //main menu ��ȣ�� �´� ������ ����
            sum_menu[num] = select_menu[count_menu];

            
            num++;

        }
        count_menu++;
       
    } while (select_menu[count_menu-1]!=0);

    receipt.receipt_show(sum_menu,main_price,select_option,price_option);


    return 0;
}