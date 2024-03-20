#include <iostream>

using namespace std;

main(){
	 int tam, suma=0, promedio=0;
	 char nombre[50];
	 
	 //suma y promedio de notas de un arreglo
	 cout<<"Cuantas notas desea agregar: ";
	 cin>>tam;
	 
	 int notas[tam];
	 
	 for(int i=0; i<tam; i++){
	 	cout<<"Digite la nota "<<i+1<<": ";
	 	cin>>notas[i];
	 }
	 
	 cout<<"\n";
	 for(int i=0; i<tam; i++){
	 	cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;
	 	suma += notas[i];
	 }
	
	promedio = suma / tam;
	cout<<"\nPromedio de las notas: "<<promedio<<endl;
	
	//Escribir un nombre en un arreglo
	fflush(stdin);
	cout<<"Digite su nombre: ";
	cin.get(nombre,50);
	
	cout<<"\nNombre: "<<nombre<<endl;
	
	
	//Dias de la semana en un arreglo
	string semana[7] = {"LUNES", "MARTES", "MIERCOLES", "JUEVES", "VIERNES", "SABADO", "DOMINGO"};
	for(int i=0; i<7; i++){
		cout<<"\nDia: "<<semana[i];
	}
	
	
	cout<<"\n";
	system ("pause");
}
