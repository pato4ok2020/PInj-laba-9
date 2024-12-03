#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Аникеев Степан 24ПИнж1д вариант 1 Результаты марафона" << endl;

	//Структура данных о бегуне
	struct Info_about_runners
	{
		int num;
		char* surname[30];
		int start_hours;
		int start_minutes;
		int start_seconds;
		int finish_hours;
		int finish_minutes;
		int finish_seconds;
		char* club[100];
	};

	return 0;
}
