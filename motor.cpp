#include <iostream>
using namespace std;
int main()
{
    int tipomotor;
    cout << "Ingrese numero para ver la bomba de fluido: \n";
    cin >> tipomotor;

    switch (tipomotor)
    {
    case 0:
    cout << "No esta establecido un valor definido para el tipo de bomba \n";
        break;

    case 1:
    cout << "La bomba es unabomba de agua \n";
        break;
    case 2:
    cout << "La bomba es una bomba de gasolina \n";
        break;
    case 3:
    cout << "La bomba es una bomba de hormigón \n";
        break;
    case 4:
    cout << "La bomba es unan bomba de pasta alimenticia \n";
        break;
    
    default:
    cout << "No existe un valor válido para tipo de bomba \n";
        break;
    }
    return 0;
}