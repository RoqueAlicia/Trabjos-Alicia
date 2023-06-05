#include<iostream>
using namespace std;
int main( int argc, char*argv[]){
    int hectometros, decametros, metros, decimetros;
    cout<<"introduzca hectometro, decametro y metros";
    cin>>hectometros>> decametros>>metros;
    decimetros=((hectometros*10+decametros)*10+metros)*10;
    cout<<" numero de decimetros es "<<decimetros<<endl;
    system("pause");
    return 0;
}