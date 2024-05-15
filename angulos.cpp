#include <iostream>
using namespace std;
int main()
{
    float alfa, beta, gamma, calculo;
    cout << "Calcular el angulo de un triangulo";
    cout << "datos del primer triangulo";
    cin >> alfa;
    cout << "dato del segundo triangulo";
    cin >> beta;

    calculo = alfa + beta;

    if (calculo >= 180)
    {
        cout << "Los valores dados no son validos. La suma de los valores es 180: ";
    }
    else {
        gamma = 180 - calculo;
        cout << "El valor de gamma es: " << gamma << " /n";
    }
    return 0; 
}