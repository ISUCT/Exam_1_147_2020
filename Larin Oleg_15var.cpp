#include <iostream>
using namespace std;

class LenghtConverter 
{
public:
    double length;
    void KilometersToMiles() 
    {
        if (this->length >= 0)
        {
            cout <<(this -> length / n) << " miles\n";
        }
    }
    void MilesToKilometers() 
    {
        if (this->length >= 0)
        {
            cout <<(this->length * n) << " kilometers\n";
        }
    }

private:
    const double n = 1.609; 
};

int main()
{
    LenghtConverter One; 
    cout << "Enter the miles" << endl;
    cin >> One.length;
    
    cout << One.length <<  "  miles = ";
    One.KilometersToMiles(); 

    LenghtConverter Two; 
    cout << "Enter the kilometers" << endl;
    cin >> Two.length;
    
    cout << Two.length << " kilometers = ";
    Two.KilometersToMiles(); 
}