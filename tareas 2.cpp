#include <iostream>

using namespace std;

main(){
	
	int matriz[100][100];
	int fil, col;
	
	cout<<"Digite el numero de filas: ";
	cin>>fil;
	cout<<"Digite el numero de columnas: ";
	cin>>col;
	
	//insertando matriz
	for (int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout<<"Digite un numero: ";
			cin>>matriz[i][j];
		}
	}
	
	//mostrando matriz
	for (int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout<<matriz[i][j]<<endl;
		}
	}
	
	system("pause");
}
