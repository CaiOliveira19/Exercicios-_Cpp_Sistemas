#include <iostream>

using namespace std;

int main()
{
	int select;
	
	cout << "SQL - CRUD: \n";
	cout << "1-Create \n";
	cout << "2-Read \n";
	cout << "3-Update \n";
	cout << "4-Delete \n";
	cout << "qualquer outro valor para SAIR";
	
	cin >> select;
	
	switch(select)
	{
		case 1: cout << "Selecionou a rotina ==> Create"; break;
		case 2: cout << "Selecionou a rotina ==> Read"; break;
		case 3: cout << "Selecionou a rotina ==> Update"; break;
		case 4: cout << "Selecionou a rotina ==> Delete"; break;
		defaut: cout << "Opção invalida ou Sair";
		}	
		return  0;
}
