/*
    Ex: Questão 2 - TRABALHO 3 TEÓRICA
    Aluna: Karolline Carvalho
*/
#include <iostream>
#include <fstream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	ifstream arquivo;
	char op;

	arquivo.open("matriz.txt");
	if(arquivo.is_open()){
        cout << "Arquivo acessado" << endl;

        //Lendo e armazenando o conteúdo do arquivo
        int lin;
        arquivo >> lin;

        int col;
        arquivo >> col;

        int mat[lin][col];
        for(int i = 0; i < lin; i++){
            for(int j = 0; j < col; j++){
                arquivo >> mat[i][j];
            }
        }
        cout << "Mapa da cidade: " << endl;
        for(int i = 0; i < lin; i++){
            for(int j = 0; j < col; j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        do{
            cout << endl;
            //(LETRA A)
            int k;
            int vet_chega[col] = {}, vet_sai[lin] = {};
            cout << "Verifique quantas estradas saem e chegam a uma cidade" << endl;
            cout << "Digite o número da cidade que deseja pesquisar: " << endl;
            cin  >> k;
            while(k < 0 || k > l){
                cout << "Por favor, insira um número que esteja no intervalo de 0 e " << lin << endl;
                cin  >> k;
            }

            for(int i = 0; i < lin; i++){
                for(int j = 0; j < col; j++){
                    vet_chega[j] += mat[i][j];
                    vet_sai[i] += mat[i][j];
                }
            }
            cout << k << " possui " << vet_sai[k] << " estradas saindo e " << vet_chega[k] << " estradas chegando." << endl;
            cout << endl;

            //(LETRA B)Verifica em qual cidade chega o maior número de estradas
            int maior = vet_chega[0];
            int id_maior = 0;
            for (int i = 0; i < lin; i++){
                if(vet_chega[i] > maior){
                    maior = vet_chega[i];
                    id_maior = i;
                }
            }
            cout << "A cidade que mais chega estradas é: " << id_maior << endl;
            cout << endl;

            //(LETRA C)Verifica se k tem ligação de ida e volta com as outras cidades
            cout << "Digite o número da cidade que deseja verificar se há ligação com as outras: " << endl;
            cin  >> k;
            while(k < 0 || k > l){
                cout << "Por favor, insira um número que esteja no intervalo de 0 e " << lin << endl;
                cin  >> k;
            }
            for(int i = 0; i < lin; i++){
                for(int j = 0; j < col; j++){
                    if(i == j && k != i){
                        if(mat[k][j] == 1 && mat[i][k] == 1){
                            cout << k << " faz ligação de ida e volta com " << i << endl;
                        }
                    }
                }
            }
            cout << endl;

            //(LETRA D)Roteiro de viagem
            /*
            int m;
            cout << "Por quantas cidades você deseja passar?" << endl;
            cin  >> m;
            int viagem[m];
            cout << "Digite por quais cidades deseja passar: " << endl;
            for(int i = 0; i < m; i++){
                cin >> viagem[i];
                if(viagem[i] < 0 || viagem[i] > lin){
                    cout << "Esta cidade não exite, digite novamente!" << endl;
                    cin  >> viagem[i];
                }
            }
            for(int i = 0; i < lin; i++){
                for(int j = 0; j < col; j++){
                    viagem[i]
                }
            }
            */

            /*
            //(LETRA E)Pesquisa de duas viagens
            int p;
            cout << "De qual cidade você irá sair?" << endl;
            cin  >> k;
            //k == i
            cout << "Para qual cidade irá?" << endl;
            cin  >> p;
            //p == j
            for(int i = k; i <= p; i++){
                cout << mat[]
            }
            */

            //Encerra o programa
            cout << endl;
            cout << "Continuar?" << endl;
            cin  >> op;
            if(op == 's' || op == 'S')
                system("cls");
        }while(op == 's' || op == 'S');

        cout << "Fechando o arquivo e fechando o programa" << endl;
        arquivo.close();
        return 0;
	}else{
	    cout << "Não foi possível acessar o arquivo" << endl;
	    return 1;
	}

	return 0;
}
