//Создайте абстрактный класс утка с методами swim, и  абстрактными методами fly и quack. Показать пример использования реализованного класса.

#include <iostream>

using namespace std;
class Duck 
{
public: static void Swim()
{
	cout << "Мягкий шелест плещется, когда утка протирает клювом по поверхности воды."; 
}
	  virtual void Quack() = 0; 
	  virtual void Fly() = 0; 
};
int main()
{
	setlocale(LC_ALL, "ru");
	Duck::Swim(); 
}
