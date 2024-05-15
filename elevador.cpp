#include <iostream>
using namespace std;
int main()
{
    int nivelactual= 1;
    int niveldeseado;

    
    cout << "Estás en el nivel " << nivelActual << ".\n";
    cout << "Por favor, introduce a qué nivel quieres ir (1-25): ";
    cin >> nivelDeseado;

    while(nivelDeseado < 1 || nivelDeseado > 25) {
        cout << "El nivel introducido no es válido. Por favor, introduce un número entre 1 y 25.\n";
        cin >> nivelDeseado;
    }

    cout << "Yendo al nivel " << nivelDeseado << "...\n";
    nivelActual = nivelDeseado;
    cout << "Has llegado al nivel " << nivelActual << ".\n";

    if(nivelActual < 25) {
        cout << "Puedes presionar el botón de subir para ir a un nivel superior.\n";
    }
    if(nivelActual > 1) {
        cout << "Puedes presionar el botón de bajar para ir a un nivel inferior.\n";
    }
    return 0;
}