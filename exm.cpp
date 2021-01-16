#include <iostream>

using namespace std;
class Rabochii    //создаём класс
{
private:
    string familia;//инициализируем переменные
    int stagg, chasovaya, chasy;
public:
    void prisv(string f, int s, int ch, int c) 
    {
        familia = f;
        stagg = s;
        chasovaya = ch;
        chasy = c;
    }
    void vyvod() //метод вывода
    {
        cout <<"Familia is"<< familia << endl << "Stagg is " << stagg << endl << "Chasovaya zp is " << chasovaya << endl << "Colichestvo otrabotannyh chasov " << chasy << endl;
    }
};
int main()
{
    string familia;
    int stagg, chasovaya, chasy;
    cout << "Vvedite familia: ";
    cin >> familia; //ввод фамилии работника
    cout << endl; 
    cout << "Vvedite stagg: ";
    cin >> stagg; //ввод стажа 
    cout << endl; 
    cout << "Vvedite pochasovuyu zp: ";
    cin >> chasovaya; //вводим часовую зарплату работника
    cout << endl; 
    cout << "Vvedite kolichestvo chasov ";
    cin >> chasy; //вводим количество часов
    cout << endl; 
    Rabochii perviy; //создаем объект класса
    perviy.prisv(familia, stagg, chasovaya, chasy); //вызываем метод 
    perviy.vyvod(); //вызываем метод вывода 
    return 0;
}