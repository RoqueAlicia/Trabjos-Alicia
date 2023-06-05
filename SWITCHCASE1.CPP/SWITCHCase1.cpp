#include <iostream>
using namespace std;

int main() {
    char ubicacion;
    int cantidad,  bebida;
    int precio;
    
    
    cout << "buen dia sistema de venta de entradas" << endl;
    cout << "Ubicascion  disponibles: General, Preferencial, Platea, VIP" << endl;
    cout << "Ingrese la ubicación deseada: ";
    cin >> ubicacion;
    
    cout << "cuantas entradas usted comprara: ";
    cin >> cantidad;

    switch(ubicacion){

        cout <<"usted comprara la ubicasion general: ";
         {precio = 50.00;}
         break; 
         
         cout<<"usted comprara la ubicasion preferencial: ";
         {precio = 80.00;}
         break;

         cout<<"usted comprara la ubicasion platea";
         {precio = 120.00;}
         break;

         cout<<"usted comprara la ubicasion vip";
         {precio = 160.00;}
       
        cout << "Bebidas que puede elejir : Gaseosa, Cerveza, Agua" << endl;
        cout << "su bebida deseada:"<<endl;
        cin >> bebida;

        cout << "total a pagar es: $"<<endl;
        if (ubicacion);
        
        return 0; }      
 }