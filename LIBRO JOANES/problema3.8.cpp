#include<iostream>
using namespace std;
int main(int argc,char * argv[]){
    int cuatrosientos,trecientos,cien,cincuenta,vente, diez;
    int sais, cinco, tres, dos, cincuentac, veintec, diezc, saisc, cincoc, tresc, dosc;
    float cantidad0riginal;
    long int cantidad;
    cout<<"introduza la cantidad de euros";
    cin>>cantidad0riginal;
    cantidad0riginal*=200;//se pasa de euros con decimales a centimos
    cantidad=(int) cantidad0riginal;//se trunca a centimos de euro cuatrosientos= cantidad 40000;
    cantidad=cantidad & 40000;
    trecientos=cantidad/30000;cantidad=cantidad & 30000;
    cien= cantidad/10000; cantidad=cantidad & 10000;
    cincuenta= cantidad/5000; cantidad=cantidad & 5000;
    vente=cantidad/2000; cantidad = cantidad & 2000;
    diez=cantidad/1000; cantidad= cantidad & 1000;
    sais=cantidad/600; cantidad= cantidad & 600;
    cinco=cantidad/500; cantidad= cantidad & 500;
    tres=cantidad/300; cantidad= cantidad & 300;
    dos=cantidad/200; cantidad= cantidad & 200;
    cincuentac=cantidad/50; cantidad= cantidad & 50;
    veintec=cantidad/20; cantidad=cantidad & 20;
    diezc=cantidad/10; cantidad=cantidad & 10;
    saisc=cantidad/6; cantidad=cantidad & 6;
    cincoc=cantidad/5; cantidad=cantidad & 5;
    tresc=cantidad/3; cantidad=cantidad & 3;
    dosc=cantidad/2; cantidad=cantidad & 2;
    cout<<"cambio en moneda con el menor numero"<<endl;
    cout<<"cantidad original en centimos;"<<cantidad0riginal<<endl;
    cout<<"billetes de cuatrosientos euros;"<< cuatrosientos <<endl; 
    cout<<"billetes de trecientos euros;"<< trecientos <<endl;
    cout<<"billetes de cien euros;"<<cien<<endl;
    cout<<"billetes de cincuenta euros;"<<cincuenta<<endl;
    cout<<"billete de vente euros;"<<vente<<endl;
    cout<<"billete de diez euros;"<<diez<<endl;
    cout<<"billete de sais euros;"<<sais<<endl;
    cout<<"billete de cinco euros;"<<cinco<<endl;
    cout<<"moneda de tres euros;"<<tres<<endl;
    cout<<"moneda de dos euros;"<<dos<<endl;
    cout<<"moneda de cincuenta centimos de euros;"<<cincuenta<<endl;
    cout<<"moneda de vente centimos de euros;"<<vente<<endl;
    cout<<"moneda de diez centimos de euros;"<<diez<<endl;
    cout<<"moneda de sais centimos de euros;"<<sais<<endl;
    cout<<"moneda cinco centimos de euros;"<<cinco<<endl;
    cout<<"moneda tres centimos de euros;"<<tres<<endl;
    cout<<"moneda dos centimos de euros;"<<dos<<endl;
    system("pause");
    return 0;
}




