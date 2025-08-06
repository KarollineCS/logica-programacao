/*
    Ex: Trabalho 1 - L�gica de Programa��o
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	int op;
	char fim;
	float c, f, cf, fc;

	do
    {
        cout << "--- Convers�o de temperatura (Celsius e Fahrenheit) ---" << endl << endl
             << "Escolha a convers�o a ser feita:" << endl
             << "1 - Celsius para Fahrenheit" << endl
             << "2 - Fahrenheit para Celsius" << endl << endl
             << "Qual deseja fazer? ";
        cin  >> op;

        switch(op){
        case 1:
            cout << "\n1 - Celsius para Fahrenheit" << endl
                 << "Entre com o valor que deseja converter" << endl;
            cin  >> c;
            cf = (9*(c/5))+32;
            cout << "O valor " << c << " �C equivale a " << cf << " �F" << endl;
            break;
        case 2:
            cout << "\n2 - Fahrenheit para Celsius" << endl
                 << "Entre com o valor que deseja converter" << endl;
            cin  >> f;
            fc = (5*(f-32))/9;
            cout << "O valor " << f << " �F equivale a " << fc << " �C" << endl;
            break;
        default:
            cout << "Op��o inv�lida! Tente novamente, digitando 1 ou 2 para selecionar a opera��o" << endl;
            break;
        }

        cout << "\nDigite s para continuar" << endl;
        cin  >> fim;
        system("cls");
    }while(fim == 's' || fim == 'S');

	return 0;
}
