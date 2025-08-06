/*
    Ex: Trabalho 1 - Lógica de Programação
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

    int n, resto;
    int i = 1;
    cout << "Entre com um valor inteiro: " << endl;
    cin  >> n;
    while (n <= 0)
    {
        cout << "Tente com valores maiores que zero!" << endl;
        cin  >> n;
        system("cls");
    }

    cout << "Os divisores exatos de " << n << " são: " << endl;
    for(i; i <= n; i++)
    {
        resto = n%i;
        if(resto == 0){
            cout << i << endl;
        }
    }

    return 0;
}
