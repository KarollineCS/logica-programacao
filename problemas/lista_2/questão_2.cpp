/*
    Ex: Quest�o 2 - Lista 2
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

    //Variaveis
	float a1, a2, a3;

    //Entradas
	cout << "Informe os valores de dois �ngulos internos: " << endl;
	cin  >> a1;
	cin  >> a2;

    //Condi��o de funcionamento
	while((a1 <= 0) || (a2 <= 0))
    {
        cout << "Informe os valores novamente! \n(Os �ngulos n�o podem ser menores e nem iguais a zero)" << endl;
        cin  >> a1;
        cin  >> a2;
    }

    //Processamento
    a3 = 180-(a1 + a2);

    cout << "A medida do 3� �ngulo �: " << a3 << endl << endl;
    cout << "O tri�ngulo possui as seguintes caracter�sticas: " << endl;

    //Classifica��o
    if ((a1 == a2) && (a1 == a3)){
        cout << "Tri�ngulo equil�tero" << endl;
    }else if((a1 == a2) || (a1 == a3) || (a2 == a3)){
        cout << "Tri�ngulo is�sceles" << endl;
    }else{
        cout << "Tri�ngulo escaleno" << endl;
    }

    //Classifica��o por �ngulos internos
    if ((a1 == 90) || (a2 == 90) || (a3 == 90)){
        cout << "Tri�ngulo ret�ngulo" << endl;
    }else if ((a1 > 90) || (a2 > 90) || (a3 > 90)){
        cout << "Tri�ngulo obtuso" << endl;
    }else{
        cout << "Tri�ngulo agudo" << endl;
    }

	return 0;
}
