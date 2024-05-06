#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout << "Ingrese un numero positivo";
    cin >> n; 
    if (n > 0)
    { 
    while (i < n) 
    {
        cout << i ;
        i++;
    }
    return 0;
    }
        
    }