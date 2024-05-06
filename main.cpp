#include <iostream>
using namespace std;
int main(){
    int n = 1;
    int i = 0;
    cout << "Ingrese una multiplicacion ";
    cin >> n; 
    while ( i < 35) 
    {
        cout << n << " x " << i << " = " << i*n <<"\n";
        i= i+1;
    }
    return 0;

        
    }



