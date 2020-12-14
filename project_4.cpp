#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(0, "ru");
	string alladin;
	int history;
	bool story = true;
	while (story) {
		cout << "основной сюжет" << endl;
		cout << "ответление сюжета" << endl;
		cin >> alladin;
		if (alladin == "основной сюжет") {
		cout << "продолжение основной линнии" << endl;
		story = false;
	}
		else if (alladin == "ответление сюжета") {
			cout << "1.Не нашел лампу" << endl;
			cout << "2.Не был бедняком" << endl;
			cin >> history;
			switch (history) {
			case 1 : 
				cout << "вернулся с сокровищами" << endl;
				cout << "его нашли бандиты и ограбили" << endl;
				story = false;
				break;
			default:
				cout << "развил свой торговый бизнес" << endl;
				cout << "женился и жил счастливо" << endl;
				story = false;
				break;
			}
		}


	}

	cout << "конец истории" << endl;
	return 0;
