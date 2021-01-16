#include <iostream>
#include<cstring>

using namespace std;
class Worker   
{
    string surname;
    int experience, salaryh, hours, salary;
public:
    void setWorker(string sn, int exp, int sh, int h)
    {
        surname = sn;
        experience = exp;
        salaryh = sh;
        hours = h;
        int s;
        s = sh * h;
        salary = s;
    }
    void getWorker() 
    {
        cout << surname << endl << "Experience is " << experience << endl << "Hourly salary is " << salaryh << endl << surname << " Number of hours " << hours << " hours" << endl;
    }
};
int main()
{
    string surname;
    int experience, salaryh, hours, salary;
    cout << "Enter worker's surname: "; 
    cin >> surname; cout << endl; 
    cout << "Enter worker's experience: ";
    cin >> experience; cout << endl; 
    cout << "Enter worker's hourly salary: ";
    cin >> salaryh; cout << endl; 
    cout << "Enter number of hours " << surname << " has worked: "; 
    cin >> hours; cout << endl; 
    Worker resultWorker;
    resultWorker.setWorker(surname, experience, salaryh, hours);  
    resultWorker.getWorker();
    system("pause"); 
    return 0;
}