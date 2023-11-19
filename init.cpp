#include <iostream>
#include "header.h"
using namespace std;
void Init::show() {
    int select;
    
        cout << "1. 포장해서 갈래요" << endl;
        cout << "2. 매장에서 먹어요" << endl;
     do {   
         cin >> select;

    } while (select != 1 && select != 2);
}