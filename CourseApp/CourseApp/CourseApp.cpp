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
				cout << "Ничья";
			else if (b == 2)
				cout << "Победа 1 игрока";
			else if (b == 3)
				cout << "Победа 2 игрока";
			break;

		case 2:
			if (b == 1)
				cout << "Победа 2 игрока";
			else if (b == 2)
				cout << "Ничья";
			else if (b == 3)
				cout << "Победа 1 игрока";
			break;

		case 3:
			if (b == 1)
				cout << "Победа 1 игрока";
			else if (b == 2)
				cout << "Победа 2 игрока";
			else if (b == 3)
				cout << "Ничья";
			break;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Выберете для 1 игрока:" << "\n" << "1 - Камень" << "\n" << "2 - Ножницы" << "\n" << "3 - Бумага" << "\n";
	int a;
	cout << "Ваш выбор: ";
	cin >> a;
	system("cls");

	cout << "Выберете для 2 игрока:" << "\n" << "1 - Камень" << "\n" << "2 - Ножницы" << "\n" << "3 - Бумага" << "\n";
	int b;
	cout << "Ваш выбор: ";
	cin >> b;
	system("cls");

	cout << "Вывод: ";
	Game::for_game(a, b);
}
