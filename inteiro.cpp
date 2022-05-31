#include <iostream>

using namespace std;

int main()
{	// variarel
	char select;

	// MENU
	
	cout << "SQL - CRUD: \n";
	cout << "C-Create \n";
	cout << "R-Read \n";
	cout << "U-Update \n";
	cout << "D-Delete \n";
	cout << "qualquer outro valor para SAIR";
	// leitura
	cin >> select;
	//switch - case
	switch (select)
	
	{
		case 99: //cout << "Selecionou a rotina ==> Create";  break;
		case 67: cout << "Selecionou a rotina ==> Create";  break;
		case 114: //cout << "Selecionou a rotina ==> Read"; break;
		case 82: cout << "Selecionou a rotina ==> Read"; break;
		case 117: //cout << "Selecionou a rotina ==> Update";break;
		case 85: cout << "Selecionou a rotina ==> Update";break;
		case 100: //cout << "Selecionou a rotina ==> Delete"; break;
		case 68: cout << "Selecionou a rotina ==> Delete"; break;
		defaut: cout << "Opção invalida ou Sair";
		}	
		return  0;
}
