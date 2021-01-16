/*Создайте новый класс и назовите его TemperatureConverter.Добавьте в него метод для преобразования температур,
с такой сигнатурой : public String convertTemp(int temperature, char convertTo) Если аргумент convertTo равен F,
то температура должна быть преобразована в Фаренгейты, если C, то в Цельсии.Когда вы будете вызывать этот метод,
поместите значение аргумента типа char в одинарные кавычки(фаренгейт = 9 / 5 цельсий + 32).Показать пример использования реализованного класса.*/

#include<iostream> 
#include<string> 

using namespace std;

class TemperatureConverter 
{
public:
    string convertTemp(int temperature, char convertTo)
    {
        string result = "NONE";  
        if (convertTo == 'F' || convertTo == 'f')
        {
            result = "Fahrenheit = " + to_string(9 / 5 * (float)temperature + 32);
        }
        
        else if (convertTo == 'C' || convertTo == 'c')
        {
            result = "Celsius = " + to_string(((float)temperature - 32) * 5 / 9);
        }
        return result;
    }
};

int main()
{
    TemperatureConverter type;
    cout << type.convertTemp(4, 'F') << endl;
    cout << type.convertTemp(0, 'C') << endl;
    cout << type.convertTemp(0, 'd') << endl;
    system("pause");
    return 0;
}