/*
    Ex: Questão 2 - Lista 4 TEÓRICA
    Aluna: Karolline Carvalho Silva
*/
#include <iostream>
#include <cmath>
#define n 50
using namespace std;

struct data{
    int dia;
    int mes;
    int ano;
};

struct Agenda{
    string compromisso;
    data comp;
};

void cadastra(Agenda a[], int &qtd)
{
    char resp;
    int i = 0;

    do
    {
    cout << "Qual o compromisso? " << endl;
    cin  >> a[i].compromisso;
    cout << "Data: " << endl
         << "   Dia: ";
    cin  >> a[i].comp.dia;
    cout << "   Mês: ";
    cin  >> a[i].comp.mes;
    cout << "   Ano: ";
    cin  >> a[i].comp.ano;

    cout << endl;
    cout << "Inserir novo compromisso? (digite 's' para sim): ";
    cin  >> resp;
    i++;
    qtd++;
    if(resp == 's' || resp == 'S')
        system("cls");
    }while(i <= n && resp == 's' || resp == 'S');
    system("cls");
}

void exibe(Agenda a[], int m, int year, int qtd)
{
    int i = 0;
    cout << "---Compromissos " << m << "/" << year << "---" << endl;
    do{
        if(a[i].comp.mes == m && a[i].comp.ano == year){
            cout << "Compromisso: " << a[i].compromisso << endl
                 << "Dia: " << a[i].comp.dia << endl;
        }
        i++;
    }while(i <= qtd);
}

main(){
	setlocale(LC_ALL, "Portuguese");

	int quant = 1, mes, ano;
	Agenda a[n];
	data d[n];

	cadastra(a, quant);

	cout << "Digite o mês e o ano para verificar a agenda: " << endl;
	cin  >> mes >> ano;
	cout << endl;

	do{
        if(mes >= 1 && mes <= 12){
            exibe(a, mes, ano, quant);
        }else{
            cout << "Mês inválido" << endl;
        }
	}while(mes < 1 || mes > 12);

	return 0;
}
