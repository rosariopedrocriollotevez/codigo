#include<iostream>
#define MAX 10
using namespace std;
int main(){
int matriz[MAX][MAX], columna, fila, i=0, j=0;
  cout<<"\n\t*******TRANSPUESTA DE UNA MATRIZ**********"<<endl;
  cout<<"\n\n";
  cout<<">>>>>>>>>Cuantas columnas quiere...? ";
  cin>>columna;
  cout<<"\n\n";
  cout<<">>>>>>>>>>>>>Cuantas filas quiere...?";
  cin>>fila;
  i=0;
  while(i < fila)//Rellenar el matriz
  {   j=0;
      while(j < columna){
        cout<<"ESCRIBE LOS VALORES ["<<i<<"]["<<j<<"] =>\t",i+1, j+1;
        cin>>matriz[i][j];
      	j++;
	  }
    i++;
  }
  cout<<"\n\n\t\tMatriz original";//mostrar el matriz
  cout<<"\n";
  i=0;
  while(i < fila){
       cout<<"\n\t\t";
       j=0;
       while(j<columna){
          cout<<matriz[i][j];
          j++;
          }
    i++;
  }
  
cout<<"\n\tMatriz transpuesta";//transpuesta de la matriz
cout<<"\n";
i=0;
  while(i < columna){
      cout<<"\n\t\t";
      j=0;
      while(j < fila){
          cout<<matriz[j][i];
          j++;
          }
    i++;
  }
  cout<<"\n";
    }
