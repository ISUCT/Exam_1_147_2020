#include <iostream>
using namespace std;

class car
{
public:
	void start()
	{
		cout << "The car started" << endl;
	}
	void stop()
	{
		cout << "The car stopped" << endl;
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
	car white;
	white.start();
	white.stop();
	white.drive(25);
	return 0;
}