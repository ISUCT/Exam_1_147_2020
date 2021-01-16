#include<iostream>
using namespase std;

class car
{
 public: 
	void star()
	{
		cout << "car started" << endl; 
	}

	void stop()
	{
		cout << "car stops" << endl;
	}

	int drive(int howlong)
	{
		int distance = howlong * 60; 
		cout << "car drove " << distance << " km" << endl; 
		return distance;
	}
}

int main()
{
	Car car; 
	car.start();
	car.stop();
	car.drive(25);
}