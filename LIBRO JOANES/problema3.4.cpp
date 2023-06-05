#include<iostream>
using namespace std;
int main(int argc,char*argv[]){
    const float G = 6.673e-8;
    float masa1, masa2, distancia, fuerza;
    cout<<"introduzca la masa de los dos lados cuerpos en gramos:/n";
    cin>>masa1>>masa2;
    cout<<"introduzca la distancia entre ellos en centimetros:/n";
    cin>>distancia;
    if((masa1<=0)||(masa2<=0)||(distancia<=0));
    cout<<"no solucion/n";

    {
        fuerza=G*masa1*masa2/(distancia*distancia);
        cout<<"la solucion es:/n";
        cout<<"fuerza en dinas="<<fuerza<<endl;
    }
        system("pause");
        return 0;
}


