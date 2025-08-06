/*
    Ex: Questão 5 - Trabalho 2 TEÓRICA
    Aluna: Karolline Carvalho Silva RA: 2020026008
*/
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int k;
	char op;

    do{
        cout << "\n---CRIPTOGRAFIA DE JÚLIO CÉSAR---\n" << endl;
        cout << "Para começar, escolha um número para ser utilizado como frequência de troca: " << endl;
        cin  >> k;

        string palavra;

        cout << "Digite a palavra a ser criptografada:" << endl;
        cin  >>  palavra;

        //Define o tamanho da palavra
        int tam = palavra.size();

        cout << endl;
        cout << "Palavra criptografada" << endl;
        //Pega o valor da tabela ASCII de cada caracter da palavra e soma com o inteiro K
        for(int i = 0; i < tam; i++){
            palavra[i];
            if(palavra[i] == 'z' || palavra[i] == 'Z'){
                printf("%c", (palavra[i]-25) + (k-1));
            }else
                printf("%c", palavra[i] + k);
        }

        cout << endl;
        cout << "Continuar?" << endl;
        cin  >> op;
        if(op == 's' || op == 'S')
            system("cls");
    }while(op == 's' || op == 'S');

	return 0;
}
