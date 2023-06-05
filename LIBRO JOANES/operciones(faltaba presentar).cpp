#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double numero1, numero2,resultado;
    int operaciones;

    cout<< "primer numero:";
    cin>>numero1;
    cout<< "segundo numero:";
    cin>>numero2;

    cout<< "****realizar operaciones****"<<endl;
    cout<< "1.- suma" <<endl;
    cout<< "2.- resta" <<endl;
    cout<< "3.- division" <<endl;
    cout<< "4.- multiplicacion" <<endl;
    cout<< "5.- potencia" <<endl;
    cout<< "INGRESE LA OPERACION: "<<endl;

    cin>>operaciones;

    switch (operaciones)
    {
        case 1:
        resultado = numero1+numero2;
        cout<<"el resultado de la suma es: "<<resultado <<endl;
        break;
        case 2:
        resultado = numero1-numero2;
        cout<<"el resultado de la resta es: "<<resultado <<endl;
        break;
        case 3:
        resultado = numero1*numero2;
        cout<<"el resultado de la division es: "<<resultado <<endl;
        break;
        case 4:
        resultado = numero1/numero2;
        cout<<"el resultado de la multiplicacion es: "<<resultado <<endl;
        break;
        case 5:
        resultado = pow(numero1,numero2);
        cout<<"el resultado de la potencia es: "<<resultado <<endl;
        break;
        default:
        cout<<"opcion no valida";
    }
    return 0;
}