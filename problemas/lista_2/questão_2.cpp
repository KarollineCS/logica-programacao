/*
    Ex: Questão 2 - Lista 2
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
	cout << "Informe os valores de dois ângulos internos: " << endl;
	cin  >> a1;
	cin  >> a2;

    //Condição de funcionamento
	while((a1 <= 0) || (a2 <= 0))
    {
        cout << "Informe os valores novamente! \n(Os ângulos não podem ser menores e nem iguais a zero)" << endl;
        cin  >> a1;
        cin  >> a2;
    }

    //Processamento
    a3 = 180-(a1 + a2);

    cout << "A medida do 3º ângulo é: " << a3 << endl << endl;
    cout << "O triângulo possui as seguintes características: " << endl;

    //Classificação
    if ((a1 == a2) && (a1 == a3)){
        cout << "Triângulo equilátero" << endl;
    }else if((a1 == a2) || (a1 == a3) || (a2 == a3)){
        cout << "Triângulo isósceles" << endl;
    }else{
        cout << "Triângulo escaleno" << endl;
    }

    //Classificação por ângulos internos
    if ((a1 == 90) || (a2 == 90) || (a3 == 90)){
        cout << "Triângulo retângulo" << endl;
    }else if ((a1 > 90) || (a2 > 90) || (a3 > 90)){
        cout << "Triângulo obtuso" << endl;
    }else{
        cout << "Triângulo agudo" << endl;
    }

	return 0;
}
