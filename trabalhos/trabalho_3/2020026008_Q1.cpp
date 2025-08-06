/*
    Ex: Quest�o 1 - TRABALHO 3 TE�RICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;

	cout << "Entre com um n�mero que esteja entre 999 e 10000" << endl;
    cin >> n;
    while(n < 999 || n > 9999){
        cout << "Entre com um n�mero que esteja no intervalo de 999 a 10000" << endl;
        cin >> n;
    }

    //Pegando d�gito por d�gito
	int mil, centena, dezena, unidade;
	mil = (n - (n%1000))/1000;
	n -= mil*1000;

	centena = (n - (n%100))/100;
	n -= centena*100;

	dezena = (n - (n%10))/10;
	n -= dezena*10;

	unidade = n;

    //Comparando os d�gitos
    if(mil == centena && centena == dezena && dezena == unidade){
        cout << "Todos os n�meros s�o iguais" << endl;
        return 0;
    }else if(mil == centena && centena == dezena){
        cout << "Possui 3 n�meros consecutivos" << endl;
        return 0;
    }else if(centena == dezena && dezena == unidade){
        cout << "Possui 3 n�meros consecutivos" << endl;
        return 0;
    }else if(mil == centena){
        cout << "Possui 2 n�meros consecutivos" << endl;
        return 0;
    }else if(centena == dezena){
        cout << "Possui 2 n�meros consecutivos" << endl;
        return 0;
    }else if(dezena == unidade){
        cout << "Possui 2 n�meros consecutivos" << endl;
        return 0;
    }else{
        cout << "N�o possui n�meros consecutivos" << endl;
        return 0;
    }

	return 0;
}
