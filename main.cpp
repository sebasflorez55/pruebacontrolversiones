#include <iostream>
#define TAM (int)10 //variables globales y macros

using namespace std;

int main()
{
    char a[TAM] = {"AB11"};

    for  (int var = 0; var < TAM; var++){
        cout << a[var]<<endl;
    }
    cout << "Imprimir los numeros de la cadena original"<< endl;
     for (int var = 0;var < TAM;var++){
         if (a [var] >= '0' or a[var] <= '9'){
             cout << a[var] << endl;
         }
         cout << ""<< endl;
     }
    return 0;
}
