#include <iostream>

using namespace std;

class fact
{
public:
	static int factorial(int n)
	{
		if (n == 0)
		{
			return 0;
		}
		int p = 1;
		for (int i = 1; i <= n; i++)
			p = p * i;
		return p;
	}
};

int main()
{
	int n;
	cout << "Enter a number X" << "\n";
	cin >> n;
	if (n < 0)
	{
		cout << "Error";
		return 0;
	}
	cout << fact::factorial(n);
	return 0;
}
