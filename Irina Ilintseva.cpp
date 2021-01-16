#define _USE_MATH_DEFINES 

#include <iostream>
#include <cmath>	

using namespace std;

class Function	
{
public:
	static void display()
	{
		int i = 0;
		double b = 2;

		cout << "|  x  | Solution\n";
		cout << "|_____|_________\n";
		for (double x = 0; x < 3.1; x = x + 0.1)
		{
			switch (i)
			{
			default:
				cout << "| " << x << " | " << solution(b, x) <<endl;
				break;
			case 0:
				cout << "|  " << x << "  | " << solution(b, x) <<endl;
				break;
			case 10:
				cout << "|  " << x << "  | " << solution(b, x) <<endl;
				break;
			case 20:
				cout << "|  " << x << "  | " << solution(b, x) <<endl;
				break;
			case 30:
				cout << "|  " << x << "  | " << solution(b, x) <<endl;
				break;
			}
			++i;
		}
	}
private:
	static double solution(double b = 0, double x = 0)
	{
		double y = 0;
		double a = 0;
		a = x * M_PI;
		y = (b * b * b) + (a * a * a);
		y = 1 + sin(y);
		return y;
	}
};
int main()
{
	Function::display(); 
}