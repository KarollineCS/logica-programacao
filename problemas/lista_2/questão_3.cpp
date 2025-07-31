/*
    Ex: Questão 3 - Lista 2
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <math.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");

	float custo_fab, dist, imp, p_final;

	cout << "Insira o custo de fábrica do carro para calcular o valor final: " << endl;
	cin  >> custo_fab;

	while (custo_fab <= 0)
    {
        cout << "Insira um valor maior que zero!" << endl
             << "Custo de fábrica: ";
        cin  >> custo_fab;
    }

    if (custo_fab <= 12000.00)
    {
        cout << "Caso 1" << endl;
        dist = custo_fab*0.05;
        cout << "% do dist: " << dist << endl;
        imp = 0;
        cout << "% do imp: " << imp << endl;
    }
    else if ((custo_fab > 12000.00)&&(custo_fab <= 25000.00))
    {
        cout << "Caso 2" << endl;
        dist = custo_fab*0.10;
        cout << "% do dist: " << dist << endl;
        imp  = custo_fab*0.15;
        cout << "% do imp: " << imp << endl;
    }
    else
    {
        cout << "Caso 3" << endl;
        dist = custo_fab*0.15;
        cout << "% do dist: " << dist << endl;
        imp  = custo_fab*0.20;
        cout << "% do imp: " << imp << endl;
    }
    cout << endl;

    p_final = dist + imp + custo_fab;
    cout << "Preço final: " << p_final << endl;

	return 0;
}
