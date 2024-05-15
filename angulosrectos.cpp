#include <iostream>
using namespace std;
int main()
{
    float agudo, obtuso, recto, angulo;
    cout << "Que tipo de angulo son? \n";
    cout << "Ingrese datos del triangulo: ";
    cin >> angulo;

    if (angulo > 90)
    {
        cout << "el angulo es obtuso \n";
    }
    else if (angulo < 90)
    {
        cout << "el angulo es agudo \n";
    }
    else{
        cout << "el angulo es recto \n";
    }
    

    return 0;
}