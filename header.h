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
    void option(int option[][10]);//����,���� �ɼ�
};
class Receipt: public Menu {
public:
    int menu_select;
    void name(int select_menu);
    int price_total(int& price, int option[][10]);
    void receipt_show(int a[], int b[]);
};
#endif