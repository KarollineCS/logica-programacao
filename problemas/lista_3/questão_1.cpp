/*
    Ex: Questão 1 - Lista 3
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <cmath>
using namespace std;

void lerVetor(int v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "v[" << i << "]: ";
        cin  >> v[i];
    }
}

void soma(int v[], int n, int v2[], int n2)
{
    for(int i = 0; i < n; i++){
        cout << "v[" << i << "]: " << v[i] + v2[i] << endl;
    }
}

void subtracao(int v[], int n, int v2[], int n2)
{
    for(int i = 0; i < n; i++){
        cout << "v[" << i << "]: " << v[i] - v2[i] << endl;
    }
}

void modulo(int v[], int n)
{
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += pow((v[i]),2);
    }
    cout << "||A||: " << sqrt(soma) << endl;
}

void p_escalar(int v[], int n, int v2[], int n2)
{
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += (v[i] * v2[i]);
    }
    cout << soma << endl;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int menu, n, s;
	char op;

	do{
        cout << "---CÁLCULO COM VETORES---" << endl
             << "Entre com o tamanho dos vetores: " << endl;
        cin  >> n;

        int vet1[n], vet2[n];
        cout << "Primeiro vetor: " << endl;
        lerVetor(vet1, n);
        cout << "Segundo vetor: " << endl;
        lerVetor(vet2, n);
        system("cls");

        cout << "Qual operação deseja realizar?" << endl
             << "1 - Adição" << endl
             << "2 - Subtração" << endl
             << "3 - Módulo(Norma)" << endl
             << "4 - Produto Escalar" << endl;
        cin  >> menu;
        system("cls");

        switch(menu){
        case 1:
            cout << "Soma: " << endl;
            soma(vet1, n, vet2, n);
            break;
        case 2:
            cout << "Subtração: " << endl;
            subtracao(vet1, n, vet2, n);
            break;
        case 3:
            cout << "Módulo: " << endl;
            modulo(vet1, n);
            break;
        case 4:
            cout << "Produto Escalar: " << endl;
            p_escalar(vet1, n, vet2, n);
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
        }

        cout << "Digite 'r' para retornar ao menu: ";
        cin  >> op;
        system("cls");
	}while(op == 'r' || op == 'R');
    return 0;
}
