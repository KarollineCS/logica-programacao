/*
    Ex: Questão 3 - Trabalho 2 TEÓRICA
    Aluna: Karolline Carvalho Silva 
*/
#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int m, n;
	char resp;

	do{
        cout << "Entre com o tamanho da matriz(linha e coluna)" << endl;
        cin  >> m >> n;

        //Verificação da entrada do usuário
        while(m <= 0 || n <= 0){
            cout << "A matriz precisa ter um tamanho, insira valores maiores que zero!" << endl;
            cin  >> m >> n;
            system("cls");
        }

        //Leitura das matrizes
        int A[m][n], B[m][n];
        int i, j;
        cout << "Entrada da matriz A:" << endl;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cout << "m[" << i << "][" << j << "]: ";
                cin  >> A[i][j];
            }
        }

        cout << endl;
        cout << "Entrada da matriz B:" << endl;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cout << "m[" << i << "][" << j << "]: ";
                cin  >> B[i][j];
            }
        }

        system("cls");

        //Saída das matrizes
        int vetA[m] = {};
        cout << "Matriz A: " << endl;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cout << A[i][j] << " ";
                vetA[i] = A[i][j];
            }
            cout << endl;
        }

        int vetB[n] = {};
        cout << endl;
        cout << "Matriz B: " << endl;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cout << B[i][j] << " ";
                vetB[j] = B[i][j];
            }
            cout << endl;
        }

        //Multiplicação das matrizes
        cout << endl;
        int C[m][n], soma = 0;
        cout << "Multiplicação de A*B: " << endl;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                soma += vetA[i]*vetB[j];
                C[i][j] = soma;
                cout << C[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Continuar?" << endl;
        cin  >> resp;
        if(resp == 's' || resp == 'S')
            system("cls");
	}while(resp == 's' || resp == 'S');

	return 0;
}

