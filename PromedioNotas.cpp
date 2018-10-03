#include<iostream>
using namespace std;
main (){
	
	float nota[5];//declaracion del arreglo
	float suma = 0;//acumulador
	float promedio;//variable 
	
	//recorre todo el arreglo
	for (int i=0;i<=4;i++) {
		
		do{
		system("cls");
		cout<<"Ingrese la nota "<<i+1<<": "<<endl;//pide un numero al usuario
		cin>> nota[i];
		
	} while (nota[i]<0 || nota[i]>10);//condicion para realizar las acciones 
	
		suma = suma + nota[i];
		
			if (nota[i]<6){
			cout<< "Has Reprobado"<<endl<<endl;}
						
			else{
				cout<<"Has Aprobado!"<<endl;
			}
	}
	
		cout<<"Las notas obtenidas son: "<<endl;
	
	for (int i=0;i<=4;i++){
		cout << nota[i]<<endl;
	}
	
	promedio = suma/5;
	cout <<endl;
	cout<<"El promedio es de: "<<promedio<<endl;
	

	return 0;
}
