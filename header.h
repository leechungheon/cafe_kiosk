#pragma once
#ifndef HEADER_H
#define HEADER_H
class Init {
public:
    void show();//����, ���� ����
};
class Menu {
public:
    int Menu_count = 0;  //Menu�� ���Ƚ���� count
    int select;
    int show(int& a);//�޴��� ���
    void option(int option[][10]);//����,���� �ɼ�
};
class Bill {
    void show(int option[][10]);
};
#endif HEADER_H