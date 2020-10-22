#include <iostream>
#define TAM (int)10 //variables globales y macros

using namespace std;

int main()
{
    char a[TAM] = {"AB16515b1"};
    char numeros [TAM] = {0};
    int contig = 0;

    cout << "Imprimir los numeros de la cadena original"<< endl;
    int numero=0;
    int condigitos=0;
     for (int var = 0;var < TAM;++var){
         if (a [var] >= '0' && a[var] <= '9'){
             numeros [contig++] = a[var];
         }
         cout << ""<< endl;
     }
     for (int var = contig -1;var >=0;--var){
         cout << numeros [var]<< endl;
     }
    return 0;
}
