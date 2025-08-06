/*
    Ex: Trabalho 1 - Lógica de Programação
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
        cout << "--- Conversão de temperatura (Celsius e Fahrenheit) ---" << endl << endl
             << "Escolha a conversão a ser feita:" << endl
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
            cout << "O valor " << c << " ºC equivale a " << cf << " ºF" << endl;
            break;
        case 2:
            cout << "\n2 - Fahrenheit para Celsius" << endl
                 << "Entre com o valor que deseja converter" << endl;
            cin  >> f;
            fc = (5*(f-32))/9;
            cout << "O valor " << f << " ºF equivale a " << fc << " ºC" << endl;
            break;
        default:
            cout << "Opção inválida! Tente novamente, digitando 1 ou 2 para selecionar a operação" << endl;
            break;
        }

        cout << "\nDigite s para continuar" << endl;
        cin  >> fim;
        system("cls");
    }while(fim == 's' || fim == 'S');

	return 0;
}
