#pragma once
#ifndef HEADER_H
#define HEADER_H
class Init {
public:
    void show();//포장, 매장 선택
};
class Menu {
public:
    int Menu_count = 0;  //Menu의 출력횟수를 count
    int select;
    int show(int& a);//메뉴판 출력
    void option(int option[][10]);//무료,유료 옵션
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
    int Get_price();     //총 금액을 계산하는 함수
};
#endif HEADER_H