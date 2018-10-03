#include<iostream>
using namespace std;
main(){
	//declarion de las matricez
	int	mat[5][5];
	int	mat2[5][5];
	int	mat3[5][5];
	
	for (int fila = 0; fila < 5; fila++){
		for (int colum = 0; colum < 5; colum++){
			mat[fila][colum] = 0;
			
			///condicones para cambiar valores de la matriz
			if (fila == 4 || colum==2){
			
			mat2[fila][colum] = 0;
			}
			
			else {
			mat2[fila][colum] = 1;
			}
		
			mat2[4][colum] = 0;
			mat3[fila][colum] = mat[fila][colum]+ mat2 [fila][colum];
		}	
}


	for (int fila= 0; fila<5;fila++){
		for(int colum=0;colum<5;colum++){
			
			cout<<mat3[fila][colum]<<" ";
		}
		
		cout<<endl;
	}
	system("pause");
	
}
