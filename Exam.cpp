#include <iostream>

using namespace std;

class findMax{
    public: 
    static int maxElement(int a[],int n){
        int max = 0;
        for (int i = 0; i < n; i++)
         if (a[i] > max)
         max = a[i];
    return max;
    }
};

int main (){
    int n;
    cout << "Input amount of numbers\n";
    cin >> n;
     while (n <= 0)
     {
        cout << "N cant be less or equal 0. Input again.\n";
        cin >> n;
     }
     int a[n];
     
     if (n>1)
     cout << "Input "<< n << " numbers\n";
     else
     cout << "Input number\n";
     
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = findMax::maxElement(a,n);
    cout << "Max number: " << findMax::maxElement(a,n);
    return 0;
}