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
		case 'c': //cout << "Selecionou a rotina ==> Create";  break;
		case 'C': cout << "Selecionou a rotina ==> Create";  break;
		case 'r': //cout << "Selecionou a rotina ==> Read"; break;
		case 'R': cout << "Selecionou a rotina ==> Read"; break;
		case 'u': //cout << "Selecionou a rotina ==> Update";break;
		case 'U': cout << "Selecionou a rotina ==> Update";break;
		case 'd': //cout << "Selecionou a rotina ==> Delete"; break;
		case 'D': cout << "Selecionou a rotina ==> Delete"; break;
		defaut: cout << "Opção invalida ou Sair";
		}	
		return  0;
}
