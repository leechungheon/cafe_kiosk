#include <iostream>
#include "header.h"
using namespace std;
void Init::show() {
    int select;
    
        cout << "1. �����ؼ� ������" << endl;
        cout << "2. ���忡�� �Ծ��" << endl;
     do {   
         cin >> select;

    } while (select != 1 && select != 2);
}