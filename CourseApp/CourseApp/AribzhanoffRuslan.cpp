#include <iostream>
using namespace std;

class Car 
{
public:
	void start() //создаем метод 
	{
		cout << "The car started" << endl; 
	}
	void stop()
	{
		cout << "The car stopped" << endl;
	}
	float drive(float howlong)
	{
		float distance = howlong * 60; 
		cout << "The car go " << distance << " km" << endl; 
		return distance; 
	}
};

int main()
{
	Car lamborgini; 
	lamborgini.start();
	lamborgini.stop();
	lamborgini.drive(50);

}