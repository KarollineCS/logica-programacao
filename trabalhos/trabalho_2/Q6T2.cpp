/*
    Ex: Questão 6 - Trabalho 2 TEÓRICA
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
        cout << "\n---DESCRIPTOGRAFANDO JÚLIO CÉSAR---\n" << endl;
        cout << "Para começar, escolha um número para ser utilizado como frequência de troca: " << endl;
        cin  >> k;

        string palavra;

        cout << "Digite a palavra a ser descriptografada:" << endl;
        cin  >>  palavra;

        int tam = palavra.size();

        cout << endl;
        cout << "Palavra descriptografada" << endl;
        for(int i = 0; i < tam; i++){
            palavra[i];
            if((palavra[i] - k) < 97 || (palavra[i]-k) < 65){
                printf("%c", palavra[i]+=26 - k);
            }else
                printf("%c", palavra[i] - k);
        }

        cout << endl;
        cout << "Continuar?" << endl;
        cin  >> op;
        if(op == 's' || op == 'S')
            system("cls");
    }while(op == 's' || op == 'S');

	return 0;
}
