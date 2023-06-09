#include <cstdlib> // PARA QUE UTILIZAMOS ESTA LIBRERIA
#include <iostream>
using namespace std;
int main(int argc , char * argv[]) // QUE SIGNIFICAN ESOS PARAMETROS
{
    int x;
    cout<< "dame un numero entero";
    cin >> x; x = 2 * x;
    cout << "su doble es"<< x <<"su triple es" << 3 * x << endl;
    system("pause");
    
    return 0;
}



