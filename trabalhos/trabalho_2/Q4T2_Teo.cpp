/*
    Ex: Quest�o 4 - Trabalho 2 TE�RICA
    Aluna: Karolline Carvalho Silva RA: 2020026008
*/
#include <iostream>
#define n 3
using namespace std;

struct Coordenada{
    int x;
    int y;
};

main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
	Coordenada c[n];

	cout << "\n---VERIFICANDO SE UM PONTO EST� DENTRO DE UM RET�NGULO---\n" << endl;

	do{
        //Leitura do V1
        cout << "Entre com o v�rtice inferior esquerdo do ret�ngulo" << endl;
        cout << "x: ";
        cin  >> c[0].x;
        cout << "y: ";
        cin  >> c[0].y;
        cout << endl;

        //Leitura do V2
        cout << "Entre com o v�rtice superior direito do ret�ngulo" << endl;
        cout << "x: ";
        cin  >> c[1].x;
        cout << "y: ";
        cin  >> c[1].y;

        //Verifica condi��o do segundo v�rtice
        while(c[1].x <= c[0].x || c[1].y <= c[0].y){
            cout << endl;
            cout << "N�s estamos montando um ret�ngulo, o v�rtice superior precisa ser maior que o inferior!" << endl
                 << "Insira os valores corretamente: " << endl;
            cout << "x: ";
            cin  >> c[1].x;
            cout << "y: ";
            cin  >> c[1].y;
        }
        cout << endl;

        //Leitura do ponto P
        cout << "Entre com o ponto a ser verificado" << endl;
        cout << "x: ";
        cin  >> c[2].x;
        cout << "y: ";
        cin  >> c[2].y;
        cout << endl;

        //Verifica��o do ponto P
        if((c[2].x >= c[0].x) && (c[2].y >= c[0].y)){
            if((c[2].x <= c[1].x) && (c[2].y <= c[1].y))
                cout << "O ponto (" << c[2].x << "," << c[2].y << ") est� dentro do ret�ngulo" << endl;
        }else
            cout << "O ponto (" << c[2].x << "," << c[2].y << ") n�o est� dentro do ret�ngulo" << endl;

        cout << endl;
        cout << "Deseja continuar?" << endl;
        cin  >> op;
        if(op == 's' || op == 'S')
            system("cls");
	}while(op == 's' || op == 'S');

	return 0;
}
