
#include <iostream>
using namespace std;

// ��˹������㹡�÷ӧҹ

int i = 0 ;



// ��˹��ç���ҧ struct
struct Student {
    string Data_1;
    string Data_2;
    string Data_3;
    string Data_4;
    string Data_5;
    string Data_6;
    string Data_7;
    string Data_8;
    string Data_9;
};

int main() {
    int choice;
   
    cout << "1 Create an account " << endl;
    cout << "2 Log in " << endl;
    cout << "���͡: ";
    cin >> choice;

    switch (choice) {
    case 1: {

        Student students[3]; // ���ҧ��������ͧ struct ��Ҵ 5
        // �����Źѡ���¹
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "ID CardD : ";
        cin >> students[i].Data_1;
        cout << endl;
        cout << "Title : ";
        cin >> students[i].Data_2;
        cout << endl;
        cout << "firstName : ";
        cin >> students[i].Data_3;
        cout << endl;
        cout << "LastName : ";
        cin >> students[i].Data_4;
        cout << endl;
        cout << "Mobile : ";
        cin >> students[i].Data_5;
        cout << endl;
        cout << "MhomePhone : ";
        cin >> students[i].Data_6;
        cout << endl;
        cout << "Email : ";
        cin >> students[i].Data_7;
        cout << endl;
        cout << "Grade : ";
        cin >> students[i].Data_8;
        cout << endl;
        cout << "School : ";
        cin >> students[i].Data_9;
        cout << endl;

        // �����ŷ�����������ҷ���¹��ҹ (Address)

        cout << "Fill in address information for students :" << i + 1 << ":" << endl;
        cout << "houseNumber : ";
        cin >> students[i].Data_1;
        cout << endl;
        cout << "villageNumber : ";
        cin >> students[i].Data_2;
        cout << endl;
        cout << "alley : ";
        cin >> students[i].Data_3;
        cout << endl;
        cout << "road : ";
        cin >> students[i].Data_4;
        cout << endl;
        cout << "province : ";
        cin >> students[i].Data_5;
        cout << endl;
        cout << "district : ";
        cin >> students[i].Data_6;
        cout << endl;
        cout << "subDistrict : ";
        cin >> students[i].Data_7;
        cout << endl;
        cout << "postalCode : ";
        cin >> students[i].Data_8;
        cout << endl;

        // �����ż�黡��ͧ (Guardian)

        cout << "Fill in parental information :" << i + 1 << ":" << endl;
        cout << "title : ";
        cin >> students[i].Data_1;
        cout << endl;
        cout << "firstName : ";
        cin >> students[i].Data_2;
        cout << endl;
        cout << "lastName : ";
        cin >> students[i].Data_3;
        cout << endl;
        cout << "mobile : ";
        cin >> students[i].Data_4;
        cout << endl;
        cout << "homePhone : ";
        cin >> students[i].Data_5;
        cout << endl;
        cout << "relation : ";
        cin >> students[i].Data_6;
        cout << endl;

    }
        break;

    case 2: {
        // �ʴ������Źѡ�֡��
        cout << "Student Information:" << endl;

    }
        break;
    
    default: {
        cout << "������͡���١��ͧ\n";

    }
          break;

    }


     return 0;
}
