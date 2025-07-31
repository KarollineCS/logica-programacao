/*
    Ex: Questão 1 - Lista 2
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

    //Variaveis
	float r, C, A, V;
	float pi = 3.1415;

	cout << "Informe o valor do raio para calcular o comprimento, área e volume da esfera: " << endl;
	cin  >> r;

    //Condição
	while (r <= 0)
    {
        cout << "Informe um valor maior que zero!" << endl;
        cin  >> r;
	}

	//Processamento
	C = 2*pi*r;
	A = pi*pow(r,2);
	V = (4*pi*pow(r,3))/3;

	//Saída
	cout << "Comprimento: " << C << endl
         << "Área:        " << A << endl
         << "Volume:      " << V << endl;
    cout << endl << "Dado raio igual a " << r << endl;

	return 0;
}
