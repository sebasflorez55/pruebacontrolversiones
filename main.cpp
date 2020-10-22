#include <iostream>
#define TAM (int)10 //variables globales y macros

using namespace std;

int main()
{
    char a[TAM] = {"AB11"};

    for  (int var = 0; var < TAM; var++){
        cout << a[var]<<endl;
    }
    return 0;
}
