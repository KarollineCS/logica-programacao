/*
    Ex: Questão 1 - Lista 4 TEÓRICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <ctime>
#define LIN 10
#define COL 10
using namespace std;

void imprimeMatriz(int m[LIN][COL])
{
    int i, j;
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
            cout << m[i][j] << " ";
            cout << endl;
    }
}

void povoarMat(int m[LIN][COL])
{
    srand(time(0));
    for (int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            m[i][j] = rand()%30;
        }
    }
}

void primeiraTroca(int m[LIN][COL])
{
    int aux;
    for(int i = 0; i < LIN; i++)
    {
        aux = m[1][i];
        m[1][i] = m[LIN - i - 1][8 - 1];
        m[LIN - i - 1][8 - 1] = aux;
    }
}

void segundaTroca(int m[LIN][COL])
{
    int aux;
    for(int i = 0; i < LIN; i++)
    {
        aux = m[9][i];
        m[9][i] = m[LIN - i - 1][4 - 1];
        m[LIN - i - 1][4 - 1] = aux;
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int M[LIN][COL];

    povoarMat(M);
    cout << "Matriz: " << endl;
    imprimeMatriz(M);

    cout << endl;

    primeiraTroca(M);
    cout << "Troca da segunda linha pela oitava coluna: " << endl;
    imprimeMatriz(M);

    cout << endl;

    segundaTroca(M);
    cout << "Troca da quarta coluna pela décima linha: " << endl;
    imprimeMatriz(M);

    return 0;
}
