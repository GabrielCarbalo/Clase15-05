#include <iostream>
using namespace std;
int main()
{
    float corto1, corto2, parcial1, parcial2, laboratorio, proyecto, promedio;
    cout << "Ingrese nota del corto 1: \n";
    cin >> corto1;
    cout << "Ingrese nota del corto 2: \n";
    cin >> corto2;
    cout << "Ingrese nota del parcial 1: \n";
    cin >> parcial1;
    cout << "Ingrese nota del parcial 2: \n";
    cin >> parcial2;
    cout << "Ingrese nota de laboratorio: \n";
    cin >> laboratorio;
    cout << "Ingrese nota de proyecto: \n";

    promedio = (corto1 * 0.1) + (corto2 * 0.1) + (parcial1 * 0.15) + (parcial2 * 0.15) + (laboratorio * 0.20) + (proyecto * 0.25); 

    if (promedio >= 6)
    {
        cout <<"El estudiante pasa la materia: \n";
    }
    else{
        cout <<"El estudiante deja la materia: \n";
    }
    
}