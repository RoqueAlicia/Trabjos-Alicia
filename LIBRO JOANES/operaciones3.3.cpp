#include <iostream>
using namespace std;
int main( int argc,char*argv[]){
    float a, b, c, d, e, f, denominador, x , y;
    cout<<"introduzca el valor de a de b de c " ;
    cin >> a >> b >> c; 
    cout<<"introduzca el valor de d de e de f " ;
    cin >> d >> e >> f;
    denominador = a * e - b * d;
    if(denominador==0)
    cout<<"no solucion";
    else{
        x=(c*e-b*f)/denominador;
        y=(a*f-c*d)/denominador;
        cout<<"la solucion del sistema es/n";
        cout<<"x="<< x << " y = "<< y << endl;
    }
    return 0;
}

