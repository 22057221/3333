#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//for 5
	// ���� ������������ ����� � ���� 1 �� ������.������� ��������� 0.1,
		//0.2, . . ., 1 �� ������
	double c, m;
	cout << "������� ��������� 1 �� ������: ";
	cin >> c;
	cout << "��������� ����� " << endl;
	for (m = 0.1; m < 1.1; m += 0.1)
	cout << m << " �� = " << c * m << endl;
}