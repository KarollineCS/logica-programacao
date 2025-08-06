/*
    Ex: Questão 1 - TRABALHO 3 TEÓRICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n;

	cout << "Entre com um número que esteja entre 999 e 10000" << endl;
    cin >> n;
    while(n < 999 || n > 9999){
        cout << "Entre com um número que esteja no intervalo de 999 a 10000" << endl;
        cin >> n;
    }

    //Pegando dígito por dígito
	int mil, centena, dezena, unidade;
	mil = (n - (n%1000))/1000;
	n -= mil*1000;

	centena = (n - (n%100))/100;
	n -= centena*100;

	dezena = (n - (n%10))/10;
	n -= dezena*10;

	unidade = n;

    //Comparando os dígitos
    if(mil == centena && centena == dezena && dezena == unidade){
        cout << "Todos os números são iguais" << endl;
        return 0;
    }else if(mil == centena && centena == dezena){
        cout << "Possui 3 números consecutivos" << endl;
        return 0;
    }else if(centena == dezena && dezena == unidade){
        cout << "Possui 3 números consecutivos" << endl;
        return 0;
    }else if(mil == centena){
        cout << "Possui 2 números consecutivos" << endl;
        return 0;
    }else if(centena == dezena){
        cout << "Possui 2 números consecutivos" << endl;
        return 0;
    }else if(dezena == unidade){
        cout << "Possui 2 números consecutivos" << endl;
        return 0;
    }else{
        cout << "Não possui números consecutivos" << endl;
        return 0;
    }

	return 0;
}
