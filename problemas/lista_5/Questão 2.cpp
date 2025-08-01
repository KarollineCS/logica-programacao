/*
    Ex: Lista 5 - Questão 2 TEÓRICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void ordena(int vet[], int n)
{
    int i, j;
    int aux = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

main(){
	setlocale(LC_ALL, "Portuguese");

    string numeros;
    int tam;

    fstream arq;

	arq.open("questao2.txt", ios::in | ios::out | ios::app);
	if(arq.is_open()){
        cout << "\n---ORGANIZANDO NÚMEROS EM UM ARQUIVO---\n" << endl;
        cout << "Quantos números deseja armazenar no arquivo?" << endl;
        cin  >> tam;
        int num[tam];

        srand(time(0));
        for(int i = 0; i < tam; i++){
            num[i] = rand()&50;
            ordena(num, tam);
            arq << num[i] << " ";
        }

        arq.seekp(ios::beg);
        cout << "Números gerados:" << endl;
        while(!arq.eof()){
            getline(arq, numeros);
            cout << numeros << endl;
        }

        arq.close();
	}else{
	    cout << "Não foi possível estabelecer conexão" << endl;
	    return 1;
	}

	return 0;
}
