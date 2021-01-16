#include <iostream>


class LenghtConverter
{
public:
	void KilometersToMiles(double x = 0) 
	{
		if (x >= 0)
		{
			std::cout << (x / n) << " miles\n";
		}
	}
	void MilesToKilometers(double x = 0)
	{
		if (x >= 0)
		{
			std::cout << (x * n) << " kilometers\n";
		}
	}

private:
	const double n = 1.609;
};

int main()
{
	LenghtConverter Randonumber;
	std::cout << " 23 mile = ";
	Randonumber.MilesToKilometers(23);
	std::cout << " 15 kilometers = ";
	Randonumber.KilometersToMiles(15);
}
