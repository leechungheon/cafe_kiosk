#pragma once
#ifndef HEADER_H
#define HEADER_H
class Init {
public:
    void show();//����, ���� ����
};
class Menu {
public:
    void show();//�޴��� ���
    int americano = 1500;
    int cafelatte = 2900;
    int vanillalatte = 3300;
    
};
class Option {
public:
    void show1();//�ɼ� ���-Ŀ�Ƿ�
    void show2();//�ɼ� ���-�������
};
class Myinfor {
public:
    int price=0;
    int number;
    int stamp=0;
};
#endif HEADER_H