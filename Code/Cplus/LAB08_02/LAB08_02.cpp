
#include <iostream>
using namespace std;

// ��˹��ç���ҧ struct
struct Address {
    string houseNumber;    //��ҹ�Ţ���
    string villageNumber;  // ������
    string alley;       // ���
    string road;        // ���
    string province;    // �ѧ��Ѵ
    string district;    // �����
    string subDistrict; // �Ӻ�
    string postalCode;  // ������ɳ���

}Address[5];

struct student {
    string idCard;       // �Ţ��Шӵ�ǻ�ЪҪ�
    string title;        // �ӹ�˹�Ҫ���
    string firstName;    // ����
    string lastName;     // ���ʡ��
    string mobile;       // �����Ţ���Ѿ����Ͷ��
    string homePhone;    // �����Ţ���Ѿ���ҹ
    string email;        // �����
    string grade;        // ��鹷����ѧ�֡��
    string school;       // �ç���¹
    string address;     // ������������ҷ���¹��ҹ
    
}students[5];

struct Guardian {
    string title;       // �ӹ�˹�Ҫ���
    string firstName;   // ����
    string lastName;    // ���ʡ��
    string mobile;      // �����Ţ���Ѿ����Ͷ��
    string homePhone;   // �����Ţ���Ѿ���ҹ
    string relation;    // ��������Ǣ�ͧ�Ѻ�ѡ���¹

}Guardians[5];


// Input Functions
int Input_Functions(int i) {

    int choice2;
    
    // �����Źѡ���¹
    cout << "1 Student  Data ) " << endl;
    cout << "2 Address  Data " << endl;
    cout << "3 Guardian Data " << endl;
    cout << "���͡: ";
    cin >> choice2;

    switch (choice2) {

    case 1: {

        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "ID CardD :";
        cin >> students[i].idCard;
        cout << endl;
        cout << "Title : ";
        cin >> students[i].title;
        cout << endl;
        cout << "firstName : ";
        cin >> students[i].firstName;
        cout << endl;
        cout << "LastName : ";
        cin >> students[i].lastName;
        cout << endl;
        cout << "Mobile : ";
        cin >> students[i].mobile;
        cout << endl;
        cout << "MhomePhone : ";
        cin >> students[i].homePhone;
        cout << endl;
        cout << "Email : ";
        cin >> students[i].email;
        cout << endl;
        cout << "Grade : ";
        cin >> students[i].grade;
        cout << endl;
        cout << "School : ";
        cin >> students[i].school;
        cout << endl;
        cout << "Address : ";
        cin >> students[i].address;
        cout << endl;
        }
        break;
    case 2: {
        // �����ŷ�����������ҷ���¹��ҹ (Address)
        cout << "Fill in address information for students :" << i + 1 << ":" << endl;
        cout << "houseNumber : ";
        cin >> Address[i].houseNumber;
        cout << endl;
        cout << "villageNumber : ";
        cin >> Address[i].villageNumber;
        cout << endl;
        cout << "alley : ";
        cin >> Address[i].alley;
        cout << endl;
        cout << "road : ";
        cin >> Address[i].road;
        cout << endl;
        cout << "province : ";
        cin >> Address[i].province;
        cout << endl;
        cout << "district : ";
        cin >> Address[i].district;
        cout << endl;
        cout << "subDistrict : ";
        cin >> Address[i].subDistrict;
        cout << endl;
        cout << "postalCode : ";
        cin >> Address[i].postalCode;
        cout << endl;
        }
        break;
    case 3: {
        // �����ż�黡��ͧ (Guardian)

        cout << "Fill in parental information :" << i + 1 << ":" << endl;
        cout << "title : ";
        cin >> Guardians[i].title;
        cout << endl;
        cout << "firstName : ";
        cin >> Guardians[i].firstName;
        cout << endl;
        cout << "lastName : ";
        cin >> Guardians[i].lastName;
        cout << endl;
        cout << "mobile : ";
        cin >> Guardians[i].mobile;
        cout << endl;
        cout << "homePhone : ";
        cin >> Guardians[i].homePhone;
        cout << endl;
        cout << "relation : ";
        cin >> Guardians[i].relation;
        cout << endl;
        }
        break;
    default: {
        cout << "������͡���١��ͧ\n";
        }
        break;
    }
    return 1 ;
}

int Output_Functions(int o) {
   
    for (int j = 0; j < 5; j++) {
        // �ʴ��Ţ����Źѡ�֡��
        cout << "Student Information:" << o + 1 << endl;
        cout << "ID CardD :" << students[o].idCard << endl;
        cout << "Title : "   << students[o].title  << endl;      
        cout << "firstName : " << students[o].firstName << endl;       
        cout << "LastName : " << students[o].lastName << endl;   
        cout << "Mobile : " << students[o].mobile << endl;       
        cout << "MhomePhone : " << students[o].homePhone << endl;
        cout << "Email : " << students[o].email << endl;
        cout << "Grade : " << students[o].grade << endl;
        cout << "School : " << students[o].school << endl;
        cout << "Address : " << students[o].address << endl;
     
        cout << endl;

        // �����ŷ�����������ҷ���¹��ҹ (Address)
        cout << "Fill in address information for students :" << o + 1 << ":" << endl;
        cout << "houseNumber : " << Address[o].houseNumber << endl;
        cout << "villageNumber : " << Address[o].villageNumber << endl;
        cout << "alley : " << Address[o].alley << endl;
        cout << "road : " << Address[o].road << endl;
        cout << "province : " << Address[o].province << endl;
        cout << "district : "<< Address[o].district << endl;
        cout << "subDistrict : " << Address[o].subDistrict << endl;
        cout << "postalCode : "<< Address[o].postalCode << endl;
        cout << endl;

        // �ʴ������ż�黡��ͧ (Guardian)
        cout << "Fill in parental information :" << o + 1 << ":" << endl;
        cout << "title : " << Guardians[o].title << endl;
        cout << "firstName : " << Guardians[o].firstName << endl;
        cout << "lastName : " << Guardians[o].lastName << endl;
        cout << "mobile : "<< Guardians[o].mobile << endl;
        cout << "homePhone : "<< Guardians[o].homePhone << endl;
        cout << "relation : "<< Guardians[o].relation << endl;
        cout << endl;
        o++;
    }
    return 1;
}

int main() {

    int choice1;
    int run =0;
 
    while ( run == 0) 
    {
        cout << "1 Create an account " << endl;
        cout << "2 Log in " << endl;
        cout << "3 Exit " << endl;
        cout << "���͡: ";
        cin >> choice1;

        switch (choice1) {
        case 1: {
            // ��͡�����Źѡ�֡��
            cout << "Create an accoun:" << endl;
            cout << Input_Functions(0) << endl;
            }
            break;
        case 2: {
            // �ʴ������ŷ�����
            cout << "Information:" << endl;
            cout << Output_Functions(0) << endl;
            }
            break;
        case 3: {
            // �͡�ҡ�к�
            cout << "Exit:" << endl;
            run = 1;
            }
            break;
        default: {
            cout << "������͡���١��ͧ\n";
            }
            break;

        }
    }
    return 0;
}

