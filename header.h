#pragma once
#ifndef HEADER_H
#define HEADER_H
class Init {
public:
    void show();//����, ���� ����
};
class Menu {
public:
    int Menu_count = 0; //Menu�� ���Ƚ���� count
    int select=0;
    int show(int& price);//�޴��� ���
    int option(int option[][10]);//����,���� �ɼ�
};
class Receipt: public Menu {
public:
    int menu_select = 0;
    void name(int select_menu);
    void option_name(int a);
    int price_total(int& price, int option[][10]);
    int price_main(int& price);
    int price_option(int& select_option);
    void receipt_show(int a[], int b[], int c[], int d[]);
    
};
#endif