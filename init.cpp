#include <iostream>
#include "header.h"
#include <string>
using namespace std;
void Init::show() {
    int select;
    
        cout << "1. �����ؼ� ������" << endl;
        cout << "2. ���忡�� �Ծ��" << endl;
     do {   
         cin >> select;
         if (select < 1 || select > 2)
             cout << "�ٽ� �Է��Ͻʽÿ�." << endl;
    } while (select != 1 && select != 2);
}