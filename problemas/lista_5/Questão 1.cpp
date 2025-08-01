/*
    Ex: Lista 5 - Questão 1 TEÓRICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

bool aloca(int **mat, int lin, int col)
{
    if(!mat){
        cout << "Memória Insuficiente" << endl;
        return 1;
    }

    for(int i = 0; i < lin; i++){
        mat[i] = (int *)malloc(col*sizeof(int));
        if(!mat[i]){
            cout << "Memória Insuficiente" << endl;
            return 1;
        }
    }
}

void ImprimirMat(int **mat, int lin, int col)
{
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void lerMatriz(int **mat, int lin, int col)
{
    cout << "Entre com os elementos da matriz: " << endl;
	for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cout << "[" << i << "][" << j << "]: ";
            cin  >> mat[i][j];
        }
    }
}

void Multiplo(int **mat, int la, int ca, int **matb, int lb, int cb, int **c)
{
    for(int i = 0; i < la; i++){
        for(int j = 0; j < cb; j++){
            for(int l = 0; l < lb; l++){
                c[i][j] = c[i][j]+(mat[i][l]*matb[l][j]);
            }
        }
    }
}

void liberaMemoria(int **mat, int lin, int col)
{
    for(int i = 0; i < lin; i++)
        free(mat[i]);
	free(mat);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	char op;

	int **A, **B, **C;
	int Ma = 0, Na = 0, Mb = 0, Nb = 0;

	do{
        cout << "\n---MULTIPLICAÇÃO DE DUAS MATRIZES---\n" << endl;
        do{
            cout << "Entre com o número de linhas e colunas de A:" << endl;
            cin  >> Ma >> Na;

            cout << "Entre com o número de linhas e colunas de B:" << endl;
            cin  >> Mb >> Nb;

            system("cls");
            if(Ma <= 0 || Na <= 0 || Mb <= 0 || Nb <= 0){
                cout << "Insira valores maiores que zero" << endl;
                cout << endl;
            }
        }while(Ma <= 0 || Na <= 0 || Mb <= 0 || Nb <= 0);

        if(Na == Mb){
            A = (int **)malloc((Ma)*sizeof(int*));
            B = (int **)malloc((Mb)*sizeof(int*));
            C = (int **)malloc((Ma)*sizeof(int*));

            //Alocação
            aloca(A, Ma, Na);
            aloca(B, Mb, Nb);
            aloca(C, Ma, Nb);

            //Leitura das Matrizes
            cout << "Matriz A: " << endl;
            lerMatriz(A, Ma, Na);
            cout << endl;
            cout << "Matriz B:" << endl;
            lerMatriz(B, Mb, Nb);
            system("cls");

            //Impressão das matrizes
            cout << "Matriz A: " << endl;
            ImprimirMat(A, Ma, Na);
            cout << "Matriz B:" << endl;
            ImprimirMat(B, Mb, Nb);

            //Multiplicação das matrizes
            cout << endl;
            cout << "Resultado A*B:" << endl;
            Multiplo(A, Ma, Na, B, Mb, Nb, C);
            for(int i = 0; i < Ma; i++){
                for(int j = 0; j < Nb; j++){
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }

            //Liberando a memória alocada
            liberaMemoria(A, Ma, Na);
            liberaMemoria(B, Mb, Nb);
            liberaMemoria(C, Ma, Nb);
        }else{
            cout << "Impossível multiplicar as matrizes" << endl;
        }

        cout << endl;
        cout << "Continuar?" << endl;
        cin  >> op;
        if(op == 's' || op == 'S')
            system("cls");
	}while(op == 's' || op == 'S');

	return 0;
}
