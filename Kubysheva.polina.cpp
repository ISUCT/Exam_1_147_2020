//Написать класс, содержащий метод, который по введенному возрасту выводил бы «статус» человека, например от 0 до 7 — дошкольник и.т.д.. 
//Возраст передаются в виде параметра метода. Показать пример использования реализованного класса.

#include <iostream>
using namespace std;

class Gradation 
{
public: static string GetStatus(int age)  
{
    if (age <= 0)                    
        return "unborn";            
    else if (age < 8)               
        return "pre-school";        
    else if (age < 19)              
        return "school";            
    else if (age < 30)              
        return "young adult";       
    else if (age < 55)               
        return "middle-aged adult"; 
    else if (age < 90)              
        return "old adult";         
    else if (age <= 110)            
        return "long-liver"; 
    else if (age > 110)             
        return "probably dead";
}
};

int main()
{
    int age;  
    cout << "Enter age and get status >>\n";
    cin >> age;
    cout << Gradation::GetStatus(age); 

}
