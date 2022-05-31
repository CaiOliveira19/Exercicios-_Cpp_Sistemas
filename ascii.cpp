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

	// if para letras Maiusculas e Minusculas
	if (select > 90)
	{
		select= select-32;
}

	//switch - case
	switch (select)
	
	{
		case 67: cout << "Selecionou a rotina ==> Create";  break;
		case 82: cout << "Selecionou a rotina ==> Read"; break;
		case 85: cout << "Selecionou a rotina ==> Update";break;
		case 68: cout << "Selecionou a rotina ==> Delete"; break;
		defaut: cout << "Opção invalida ou Sair";
		}	
		return  0;
}
