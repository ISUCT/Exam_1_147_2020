#include <iostream>
#include <string>

using namespace std;

class Animal 
{        
public:
	Animal(string l, string b)
	{
		location = l;
		boundaries = b;
	}

	virtual void display() {};
	
	~Animal() {};

	void sleep() 
	{       
		cout << "animal sleep" << endl;
	}

protected:                   
	string location;
	string boundaries;
	
};

class Lion : public Animal 
{               
public:
	Lion(string location, string boundaries) : Animal(location, boundaries) {};
	void display() override
	{
		cout << "Where does the tiger live ? " << endl;
		cin >> location;
		cout << "Especially in what desert ? " << endl;
		cin >> boundaries;
		cout << "Lion is located in " << location << ", expecially in the " << boundaries << endl;
	}
	
};

class Cat : public Animal 
{             
public:
	Cat(string location, string boundaries) : Animal(location, boundaries) {};
	void display() override
	{
		cout << "Where, for example, does the cat live ? " << endl;
		cin >> location;
		cout << "Within the boundaries? " << endl;
		cin >> boundaries;
		cout << "Cat is located in " << location << ", expecially in the " << boundaries << endl;
	}
	
};

int main()
{
	setlocale(LC_ALL, "rus");
	Lion Leva("", "");
	Cat Mur("", "");
	Leva.display();
	Mur.display();
	return 0;
}