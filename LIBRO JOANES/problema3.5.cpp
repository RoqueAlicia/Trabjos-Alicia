#include<iostream>
using namespace std;
int main(int argc, char*argv[]){
    float n, energia;
    const float c= 2.997925e+10;
    cout<<"introduzca masa/n";
    cin>>n; energia = c*n*n*n;
    cout<<"energia en erglos:"<<energia;
    system("pause");
    return 0;
}
