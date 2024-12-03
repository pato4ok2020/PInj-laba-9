#include <iostream>
#include "file_reader.h"
#include <fstream>

using namespace std;
//Структура данных о бегуне
struct Info_about_runners
{
	int num;
	char* surname[200];
	int start_hours;
	int start_minutes;
	int start_seconds;
	int finish_hours;
	int finish_minutes;
	int finish_seconds;
	char* club[200];
};

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Аникеев Степан 24ПИнж1д вариант 1 Результаты марафона" << endl;

	

	//Массив всех данных об участниках марафона
	Info_about_runners list[101];

	//Открытие файла data.txt для чтения
	ofstream fdata("data.txt", ios::in);
	file_reader(list, 101);

	//Закрытие файла data.txt
	fdata.close();
	return 0;
}
