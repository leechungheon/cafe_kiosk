#pragma once
#ifndef HEADER_H
#define HEADER_H
class Init {
public:
    void show();//포장, 매장 선택
};
class Menu {
public:
    void show();//메뉴판 출력
    int americano = 1500;
    int cafelatte = 2900;
    int vanillalatte = 3300;
    
};
class Option {
public:
    void show1();//옵션 출력-커피류
    void show2();//옵션 출력-스무디류
};
class Myinfor {
public:
    int price=0;
    int number;
    int stamp=0;
};
#endif HEADER_H