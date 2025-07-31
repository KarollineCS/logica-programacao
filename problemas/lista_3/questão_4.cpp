/*
    Ex: Questão 4 - Lista 3
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
using namespace std;

void lerVetor(float v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "Digite v[" << i << "]: ";
        cin  >> v[i];
    }
    system("cls");
}

void imprimeVetor(float v[], int n)
{
    int acc = 1;
    float num = 0;
    for(int i = 0; i < n; i++){
        acc = 0;
        for(int j = 0; j < n; j++){
            if (v[i] == v[j])
            {
                acc++;
                num = v[i];
            }
        }
        cout << num << " ocorre " << acc << " vezes" << endl;
    }
}

main(){
	setlocale(LC_ALL, "Portuguese");

	int n;

	cout << "Digite o tamanho do vetor: " << endl;
	cin  >> n;
    float vet[n];

    lerVetor(vet, n);
    cout << "Sequência: " << endl;
    imprimeVetor(vet, n);

    return 0;
}
