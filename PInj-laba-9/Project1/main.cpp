#include <iostream>
#include "file_reader.h"
#include <fstream>

using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������ 24����1� ������� 1 ���������� ��������" << endl;

	//��������� ������ � ������
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

	//������ ���� ������ �� ���������� ��������
	Info_about_runners Array[101];

	//�������� ����� data.txt ��� ������
	ofstream fdata("data.txt", ios::in);

	fdata.close();
	return 0;
}
