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
    }
    void getWorker()
    {
        cout << surname << endl << "Опыт: " << experience << endl << "ЗП в час: " << salaryh << endl << surname << " Количество отработаннных часов: " << hours << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    string surname;
    int experience, salaryh, hours, salary;
    cout << "Введите фамилию: ";
    cin >> surname; cout << endl;
    cout << "Введите опыт работы: ";
    cin >> experience; cout << endl;
    cout << "Введите ЗП час: ";
    cin >> salaryh; cout << endl;
    cout << "Введите количество отработанных часов: ";
    cin >> hours; cout << endl;
    Worker resultWorker;
    resultWorker.setWorker(surname, experience, salaryh, hours);
    resultWorker.getWorker();
    system("pause");
    return 0;
}
