#include <iostream>

using namespace std;

int main()
{
	int i ;
	int x;
	int j;
	
	cout << "quantas linha: \n";
	cin >> x;
	
	i=1;
	j=1;
	
	for ( i=1 ;i<=x ;i++){
	
			for (j=1 ; j<=i;j++){
		
				cout << "*";
			}
				cout << "\n";
	}
}

