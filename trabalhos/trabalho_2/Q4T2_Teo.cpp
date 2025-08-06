/*
    Ex: Questão 4 - Trabalho 2 TEÓRICA
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

	cout << "\n---VERIFICANDO SE UM PONTO ESTÁ DENTRO DE UM RETÂNGULO---\n" << endl;

	do{
        //Leitura do V1
        cout << "Entre com o vértice inferior esquerdo do retângulo" << endl;
        cout << "x: ";
        cin  >> c[0].x;
        cout << "y: ";
        cin  >> c[0].y;
        cout << endl;

        //Leitura do V2
        cout << "Entre com o vértice superior direito do retângulo" << endl;
        cout << "x: ";
        cin  >> c[1].x;
        cout << "y: ";
        cin  >> c[1].y;

        //Verifica condição do segundo vértice
        while(c[1].x <= c[0].x || c[1].y <= c[0].y){
            cout << endl;
            cout << "Nós estamos montando um retângulo, o vértice superior precisa ser maior que o inferior!" << endl
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

        //Verificação do ponto P
        if((c[2].x >= c[0].x) && (c[2].y >= c[0].y)){
            if((c[2].x <= c[1].x) && (c[2].y <= c[1].y))
                cout << "O ponto (" << c[2].x << "," << c[2].y << ") está dentro do retângulo" << endl;
        }else
            cout << "O ponto (" << c[2].x << "," << c[2].y << ") não está dentro do retângulo" << endl;

        cout << endl;
        cout << "Deseja continuar?" << endl;
        cin  >> op;
        if(op == 's' || op == 'S')
            system("cls");
	}while(op == 's' || op == 'S');

	return 0;
}
