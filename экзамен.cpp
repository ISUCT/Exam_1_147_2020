#include <iostream>
using namespace std;

class Car
{
public:
	void start()
	{
		cout <<"start" <<endl;
	}
	void stop()
	{
		cout << "stop" << endl;
	}
	int drive(int howlong)
	{
		int distance = howlong * 60;
		cout << "The car drove " << distance << " km" << endl;
		return distance;
	}

};

int main()
{
	Car bmw;
	bmw.start();
	bmw.drive(100);
	bmw.stop();

}