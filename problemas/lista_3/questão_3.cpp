/*
    Ex: Questão 3 - Lista 3
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
using namespace std;

void lerVetor(int v[], int n)
{
    int i, acc_par = 0, acc_impar = 0;
    int soma_par = 0, soma_impar = 0;

    for(i = 0; i < n; i++)
    {
        cout << "Digite v[" << i << "]: ";
        cin  >> v[i];
        if(v[i]%2 == 0){
            soma_par += v[i];
            acc_par++;
        }else{
            if(v[i]%2 <= 1){
                soma_impar += v[i];
                acc_impar++;
            }
        }
    }
    cout << endl;
    cout << "Quant pares: " << acc_par << endl
         << "Quant impares: " << acc_impar << endl;
    cout << endl;
    cout << "Soma par: " << soma_par << endl
         << "Soma ímpar: " << soma_impar << endl;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	char op;

    do{
        cout << "Entre com o tamanho do vetor: " << endl;
        cin  >> n;
        int v[n];

        lerVetor(v, n);

        cout << endl;
        cout << "Digite s para continuar: ";
        cin  >> op;
        system("cls");
    }while(op == 's' || op == 'S');
	return 0;
}
