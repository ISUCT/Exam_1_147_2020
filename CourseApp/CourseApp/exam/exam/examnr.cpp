//�������� ����������� ����� ���� � �������� swim, �  ������������ �������� fly � quack. �������� ������ ������������� �������������� ������.

#include <iostream>

using namespace std;
class Duck 
{
public: static void Swim()
{
	cout << "������ ������ ��������, ����� ���� ��������� ������ �� ����������� ����."; 
}
	  virtual void Quack() = 0; 
	  virtual void Fly() = 0; 
};
int main()
{
	setlocale(LC_ALL, "ru");
	Duck::Swim(); 
}
