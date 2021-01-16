#include <iostream>
#include<cstring>

using namespace std;
class Work
{
    string surname;
    int experience, salaryh, hours, salary;
public:
    void SetWorkStat(string sn, int exp, int sh, int h)
    {
        surname = sn;
        experience = exp;
        salaryh = sh;
        hours = h;
        int s;
        s = sh * h;
        salary = s;
    }
    void GetWorkStat() 
    {
        cout << surname << endl << "Experience is " << experience << endl << "Hourly salary is " << salaryh << endl << "Number of hours " << hours << " hours" << endl << "The total salary " << salary << endl;
    }
};
int main()
{
    string surname;
    int experience, salaryh, hours, salary;
    cout << "Enter surname: ";
    cin >> surname; cout << endl; 
    cout << "Enter experience: ";
    cin >> experience; cout << endl;
    cout << "Enter hourly salary: ";
    cin >> salaryh; cout << endl; 
    cout << "Enter number of hours " << surname << " has worked: ";
    cin >> hours; cout << endl; 
    Work resultWork;
    resultWork.SetWorkStat(surname, experience, salaryh, hours); 
    resultWork.GetWorkStat();
    return 0;
}
