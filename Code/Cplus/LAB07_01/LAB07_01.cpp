#include <iostream>
using namespace std;

// �ѧ��ѹ����Ѻ��Ѻ��Ңͧ������ͧ��������¹�����
void swapValues(int* a, int* b) {
    int temp = *a;  // �纤�Ңͧ����� a ���㹵���ê��Ǥ���
    *a = *b;        // ����¹��Ңͧ a �����ҡѺ��Ңͧ b
    *b = temp;      // ����¹��Ңͧ b �����ҡѺ��Ҫ��Ǥ���
}

int main() {
    int x, y;

    // �Ѻ��Ҩҡ�����
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    // �ʴ���ҡ�͹�����Ѻ
    cout << "\nBefore swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // ���¡�ѧ��ѹ������Ѻ���
    swapValues(&x, &y);

    // �ʴ������ѧ�����Ѻ
    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
