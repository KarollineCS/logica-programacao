/*
    Ex: Questão 3 - Lista 4 TEÓRICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <cmath>
#define LIN 3
#define COL 3
using namespace std;

void imprimeExemplo(char M[LIN][COL])
{
    cout << "Posições do tabuleiro: " << endl;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            cout << "[" << i << "][" << j << "]" << " ";
        }
        cout << endl;
	}
}

void imprimeTab(char M[LIN][COL])
{
    int i,j;
    for(i = 0; i < LIN; i++)
    {
        for(j = 0; j < COL; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

main()
{
	setlocale(LC_ALL, "Portuguese");
	char m[LIN][COL] = {{'-', '-', '-'},
                        {'-', '-', '-'},
                        {'-', '-', '-'}};
	int l, c, i, j;
	char exit;

	do{
        cout << "\n--- JOGO DA VELHA ---\n" << endl;

        imprimeExemplo(m);

        cout << endl;

        for(i = 0; i < LIN; i++){
            for(j = 0; j < COL; j++){
                cout << "Escolha a posição: " << endl;
                cin  >> l >> c;
                if(l < 0 || l > 2 || c < 0 || c > 2)
                {
                    cout << "Número inválido! Digite novamente: " << endl;
                    cin  >> l >> c;
                }
                cout << "X ou O: " << endl;
                cin  >> m[l][c];

                system("cls");
                imprimeExemplo(m);
                cout << endl;
                imprimeTab(m);
            }
            cout << endl;
        }

        cout << "Jogar novamente?" << endl;
        cin  >> exit;
        system("cls");
	}while(exit == 's' || exit == 'S');

	cout << endl;
	return 0;
}

/*
   if(i == j)
            {
                if(m[i][j] == 'x'){
                    cout << "Velha!\nx ganhou!" << endl;
                    return 0;
                }
                else if(m[i][j] == 'o'){
                    cout << "Velha!\no ganhou!" << endl;
                }
            }
*/
