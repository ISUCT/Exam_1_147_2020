#include <iostream>
using namespace std;

class fact
{
public:
	static int faktorial(int n)
	{
		int p = 1;
		for (int i = 1;i <= n; i++)
			p = p * i;
		return p;
	}
};

int main()
{
	int n;
	cout <<"Finding the factorial:\n\n" << "Enter a number n: ";
	cin >> n;
	cout << "The answer: " << n << "! = " << fact::faktorial(n) << "\n";
	return 0;
}