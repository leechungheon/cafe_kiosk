#include <iostream>
#include "header.h"
#include <string>
using namespace std;
int Menu::show(int &price){    
        cout << "=====================================" << endl;
        cout << "Ŀ��" << endl;
        cout << "1. �Ƹ޸�ī�� - 1500��" << endl;
        cout << "2. ī��� - 2900��" << endl;
        cout << "3. �ٴҶ��- 3300��" << endl;
        cout << endl;

        cout << "Ƽ/������" << endl;
        cout << "4. ���̽�Ƽ - 2000��" << endl;
        cout << "5. ���⽺���� - 4000��" << endl;
        cout << "6. �׸�Ƽ������ - 4000��" << endl;
        cout << endl;

        cout << "����Ʈ" << endl;
        cout << "7. ġ���ɟ� - 5000��" << endl;
        cout << "8. �����ɟ� - 5000��" << endl;
        cout << "9. �Ƹ����Ű - 2200��" << endl;
        cout << endl;
        cout << "10. �����ϱ�" << endl;
        cout << "=====================================" << endl;
        cout << endl;
     do {
       
        cin >> select;

        if (select == 10 && Menu_count == 0) {
            cout << "�ٽ� �Է��Ͻÿ�." << endl;
        }
        else if (0 < select && select < 11)
            Menu_count += 1;//�ֹ��� �޴� ����
        else
            cout << "�ٽ� �Է��Ͻÿ�." << endl;
    } while (select > 10 || select < 0 || Menu_count == 0); // �������� ����, �޴��� 0�� �� �ٽü���


    if (select == 1 || select == 2 || select == 3) {
        if (select == 1)price += 1500;
        if (select == 2)price += 2900;
        if (select == 3)price += 3300;
        return select; //Ŀ�� �ɼ�
    }
    else if (select == 4 || select == 5 || select == 6) {
        if (select == 4)price += 2000;
        if (select == 5)price += 4000;
        if (select == 6)price += 4000;
        return select;//Ƽ/������ �ɼ�
    }
    else if (select == 7 || select == 8 || select == 9) {
        if (select == 7)price += 5000;
        if (select == 8)price += 5000;
        if (select == 9)price += 2200;
        return select;//����Ʈ
    }
    else if (select == 10) {
        return 0;//�����ϱ��
    }
    else {
        return 0;//
    }
   
}
int Menu::option(int option[][10]) {
    
    int option_select=0; // ����, ���� �ɼ� ����
    int option_choose_1=0; // ���� �ɼ� ����
    int option_choose_2 = 0; // ���� �ɼ� ����
     
    int repeat = 0;
    cout << "===========================================" << endl;
    cout << "                1. ����ɼ�" << endl;
    cout << "                2. ����ɼ�" << endl;
    cout << "                3. ���ÿϷ�" << endl;
    cout << "===========================================" << endl;
    
    cin >> option_select;

    if (option_select == 3)
        return 0; //option�� �����ϴ� return��

    //����ɼ��� ���
    while (option_select == 1) {
        if (repeat == 0) {
            cout << "===========================================" << endl;
            cout << "����ɼ�\n" << endl;
            cout << "1. �����÷� �߰�" << endl;
            cout << "2. ���� �߰�" << endl;
            cout << "3. �� ���ϰ�" << endl;
            cout << "4. ���� �Ϸ�" << endl;
            cout << "===========================================" << endl;
            repeat++;
        }
        cin >> option_choose_1;
        if (option_choose_1 == 1) {
            option[0][option_choose_1] = 1;
            cout << "�����÷��� �߰��Ǿ����ϴ�." << endl;
        }
        else if (option_choose_1 == 2) {
            option[0][option_choose_1] = 1;
            cout << "������ �߰��Ǿ����ϴ�." << endl;
        }
        else if (option_choose_1 == 3) {
            option[0][option_choose_1] = 1;
            cout << "�󵵰� ���������ϴ�." << endl;
        }
        else if (option_choose_1 == 4) {
            return -1;  //���� �ɼ����� but �߰��� �ɼǼ��� ����
        }
        else
            cout << "�ٽ� �Է��Ͻʽÿ�." << endl;

    }
    //����ɼ��� ���
    while(option_select == 2) {
        if (repeat == 0) {
            cout << "===========================================" << endl;
            cout << "����ɼ�\n" << endl;
            cout << "1. �ٴҶ� �÷� - 500��" << endl;
            cout << "2. ������� �÷� - 500��" << endl;
            cout << "3. ����ũ�� - 500��" << endl;
            cout << "4. ���߰� - 500��" << endl;
            cout << "5. ���߰� - 700��" << endl;
            cout << "6. ���� �߰� - 500��" << endl;
            cout << "7. ���� �Ϸ�" << endl;
            cout << "===========================================" << endl;
            repeat++;
        }
        cin >> option_choose_2;
        if (option_choose_2<1|| option_choose_2>7)
            cout << "�ٽ� �Է��Ͻʽÿ�." << endl;

        if (option_choose_2 == 1) {
            option[1][option_choose_2] = 500;
            cout << "�ٴҶ� �÷��� �߰��Ǿ����ϴ�." << endl;
            return option_choose_2;
        }
        else if (option_choose_2 == 2) {
            option[1][option_choose_2] = 500;
            cout << "������� �÷��� �߰��Ǿ����ϴ�." << endl;
            return option_choose_2;
        }
        else if (option_choose_2 == 3) {
            option[1][option_choose_2] = 500;
            cout << "����ũ���� �߰��Ǿ����ϴ�." << endl;
            return option_choose_2;
        }
        else if (option_choose_2 == 4) {
            option[1][option_choose_2] = 500;
            cout << "�� �߰��Ǿ����ϴ�." << endl;
            return option_choose_2;
        }
        else if (option_choose_2 == 5) {
            option[1][option_choose_2] = 700;
            cout << "�� �߰��Ǿ����ϴ�." << endl;
            return option_choose_2;
        }
        else if (option_choose_2 == 6) {
            option[1][option_choose_2] = 500;
            cout << "������ �߰��Ǿ����ϴ�." << endl;
            return option_choose_2;
                
        }
        else if (option_choose_2 == 7) {
            return -1; //���� �ɼ����� but �߰��� �ɼǼ��� ����
        }
        else
            cout << "�ٽ� �Է��Ͻʽÿ�." << endl;
    }
    
}