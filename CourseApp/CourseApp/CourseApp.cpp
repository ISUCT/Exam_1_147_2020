#include <iostream>
using namespace std;

class Game
{
private:
	int rock = 1;
	int skissors = 2;
	int paper = 3;

public:

	static void for_game(int a, int b)
	{
		switch (a)
		{
		case 1:
			if (b == 1)
				cout << "�����";
			else if (b == 2)
				cout << "������ 1 ������";
			else if (b == 3)
				cout << "������ 2 ������";
			break;

		case 2:
			if (b == 1)
				cout << "������ 2 ������";
			else if (b == 2)
				cout << "�����";
			else if (b == 3)
				cout << "������ 1 ������";
			break;

		case 3:
			if (b == 1)
				cout << "������ 1 ������";
			else if (b == 2)
				cout << "������ 2 ������";
			else if (b == 3)
				cout << "�����";
			break;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "�������� ��� 1 ������:" << "\n" << "1 - ������" << "\n" << "2 - �������" << "\n" << "3 - ������" << "\n";
	int a;
	cout << "��� �����: ";
	cin >> a;
	system("cls");

	cout << "�������� ��� 2 ������:" << "\n" << "1 - ������" << "\n" << "2 - �������" << "\n" << "3 - ������" << "\n";
	int b;
	cout << "��� �����: ";
	cin >> b;
	system("cls");

	cout << "�����: ";
	Game::for_game(a, b);
}
