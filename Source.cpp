#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//for 5
	// Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
		//0.2, . . ., 1 кг конфет
	double c, m;
	cout << "введите стоимость 1 кг конфет: ";
	cin >> c;
	cout << "стоимость кофет " << endl;
	for (m = 0.1; m < 1.1; m += 0.1)
	cout << m << " кг = " << c * m << endl;
}