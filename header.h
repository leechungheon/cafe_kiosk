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
class Bill {
    void show(int option[][10]);
};
#endif HEADER_H