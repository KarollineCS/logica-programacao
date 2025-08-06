/*
    Ex: Trabalho 1 - Lógica de Programação
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int quant, cem, dez, cinco;
	char op;

    do
    {
	cout << "--- BANCO LORAK ---\n" << endl
         << "Insira a quantidade que deseja sacar: " << endl;
	cin  >> quant;

	if (quant <= 0)
    {
        cout << "Insira um valor maior que zero!" << endl;
        cin  >> quant;
    }

    cem = (quant - (quant%100))/100;
    quant -= cem*100;

    dez = (quant - (quant%10))/10;
    quant -= dez*10;

    cinco = quant/5;
    cout << "\n";

    cout << "--- NOTAS EMITIDAS ---" << endl
         << "Notas de 100: " << cem << endl
         << "Notas de 10: "  << dez << endl
         << "Notas de 5: "   << cinco << endl;

    cout << "\nDeseja sacar novamente?" << endl;
    cin  >> op;
    system("cls");
    }while(op == 's' || op == 'S');

	return 0;
}
