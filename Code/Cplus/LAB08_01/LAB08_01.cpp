#include <iostream>
#include<string>
using namespace std;
// ���˹��ç���ҧ struct
struct Student {
	string studentID;
	string nickname;
	string Branch;
	string GPA;
};
int main() {
	Student students[10]; // ���ҧ��������ͧ struct ��Ҵ 5
	// �Ѻ�����Źѡ�֡��
	for (int i = 0; i < 10; i++) 
	 {
		cout << "Enter information for student " << i + 1 << ":" << endl;
		cout << "Student ID: ";
		cin >> students[i].studentID;
		cout << "Nickname: ";
		cin >> students[i].nickname;
		cout << "Line ID: ";
		cin >> students[i].Branch;
		cout << "GPA: ";
		cin >> students[i].GPA;
		cout << endl;
	 }
	// �ʴ������Źѡ�֡��
	cout << "Student Information:" << endl;
	for (int a = 0; a < 10; a++) 
	{
		cout << "Student " << a + 1 << ":" << endl;
		cout << " Student ID: " << students[a].studentID << endl;
		cout << " Nickname: " << students[a].nickname << endl;
		cout << " Line ID: " << students[a].Branch << endl;
		cout << " GPA: " << students[a].GPA << endl;
		cout << endl;
	}
	return 0;
}
