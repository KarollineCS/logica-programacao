/*
    Ex: Questão 2 - Trabalho 2 TEÓRICA
    Aluna: Karolline Carvalho Silva RA: 2020026008
*/
#include <iostream>
using namespace std;

//Leitura do vetor
void lervet(float vet[], int num)
{
    cout << "Insira os valores do vetor" << endl;
    for(int i = 0; i < num; i++){
        cout << "v[" << i << "]: ";
        cin  >> vet[i];
    }
}

//Impressão do vetor
void imprimevet(float vet[], int num)
{
    cout << "v[" << num << "] = ";
    for(int i = 0; i < num; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

//Ordenação crescente do vetor
void ordenavet(float vet[], int num)
{
    int i, j;
    float aux = 0;
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++){
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
	int n;
	char resp;
	do{
        cout << "\n---VETOR NA ORDEM CRESCENTE---\n" << endl;
        cout << "Tamanho do vetor: " << endl;
        cin  >> n;

        while(n <= 0){
            cout << endl;
            cout << "O vetor precisa ter um tamanho, digite um valor maior que zero!" << endl;
            cout << "Tamanho do vetor: " << endl;
            cin  >> n;
        }

        float v[n];
        lervet(v, n);

        cout << endl;
        cout << "Vetor original" << endl;
        imprimevet(v, n);
        cout << endl;

        cout << "Vetor ordenado" << endl;
        ordenavet(v, n);
        imprimevet(v, n);
        cout << endl;

        cout << "Deseja continuar?" << endl;
        cin  >> resp;
        if(resp == 's' || resp == 'S')
            system("cls");
	}while(resp == 's' || resp == 'S');

	return 0;
}
