#pragma once
#ifndef HEADER_H
#define HEADER_H
class Init {
public:
    void show();//����, ���� ����
};
class Menu {
public:
    int show(int& a);//�޴��� ���
    void option1(int option[][10]);//Ŀ�ǿɼ�
    void option2();//������ɼ�
};
class Price {
public:
    int americano = 1500;
    int cafelatte = 2900;
    int vanillalatte = 3300;
    int icetea = 2000;
    int strawberrysmoothe = 4000;
    int greenteasmoothe = 4000;
    int cheesecake = 5000;
    int chococake = 5000;
    int amondcookie = 2200;
};
#endif HEADER_H