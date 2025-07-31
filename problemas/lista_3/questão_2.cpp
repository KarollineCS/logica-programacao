/*
    Ex: Questão 2 - Lista 3
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
using namespace std;

void potencia(int a, int b)
{
    int pot = a;
    for(int i = 1; i < b; i++)
    {
        pot *= a;
    }
    cout << "Resultado: " << pot << endl;
}

main(){
	setlocale(LC_ALL, "Portuguese");

	int x, y;

	cout << "---POTÊNCIA SEM FUNÇÕES PRÉ-DEFINIDAS---\n" << endl
         << "Entre com os valores de x e y: " << endl;
	cin  >> x >> y;

	if(y <= 0)
    {
        if(y < 0)
        {
            cout << "Use um expoente positivo!!" << endl;
            return 0;
        }
        x = 1;
        cout << "Resultado: " << x << endl;
        return 0;
    }

	potencia(x, y);

	return 0;
}
