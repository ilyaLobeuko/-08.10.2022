#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	// 1.
	/*bool health;
	cin >> health;
	cout << boolalpha << health << endl;*/
	// 2.
	/*int  t;
	cin >> t;
	if (t > 20) {
		cout << "On" << endl;
	}
	if (t <= 20) {
		cout << "Off" << endl;
	}*/
	// 3.
	//int t, c, v; // t -  температура, c - температура в комнате.
	//cin >> t >> c >> v;
	//if (c > t&& v <= 80) {
	//	cout << "On" << endl;
	//}
	//else {
	//	cout << "Off" << endl;
	//}
	// 4.
	/*double y, x;
	cin >> x;
	if (x > 0) {
		y = sqrt(x - 2);
		cout << y << endl;
	}
	else if (x == 0) {
		y = 0;
		cout << y << endl;
	}
	else if (x < 0) {
		y = abs(x);
		cout << y << endl;
	}*/
	// 5.
	int палец;
	cin >> палец;
	switch (палец) {
	case 1: cout << "Большой" << endl; break;
	case 2: cout << "Указательный" << endl; break;
	case 3: cout << "Средний" << endl; break;
	case 4: cout << "Безымяный" << endl; break;
	case 5: cout << "Мизинец" << endl; break;
	default: cout << "Ошибка" << endl;
	}
}