#include<iostream>

using namespace std;

int i=0,j=0,f=20,c=20,n=0,m=0;
int mat[100][100];

void Start(){

  system("clear");

  for(i=0;i<f;i++){
    for(j=0;j<c;j++){
      mat[i][j] = 0;
    }
  }

  f = 0;
  c = 0;
}

void mostrarMatriz(){

  f=c=0;
  cout<<"\n\n";
  while(f < n){
    cout<<"\t["<<mat[f][c]<<"]"; c++;
    if(c >= m){cout<<"\n\n\n"; f++; c = 0;}
  }
}

void cambiarValor(){

  int val = 0;
  f=n+33;
  c=m+33;

  mostrarMatriz();

  f=c=0;

  do{
    cout<<"\n\nEl indice empieza con 0 y termina con "<<n-1;
    cout<<"\nInserte la fila: "; cin>>f;
  }while(f > n-1);

  do{
    cout<<"\n\nEl indice empieza con 0 y termina con "<<m-1;
    cout<<"\nInserte la columna: "; cin>>c;
  }while(c > m-1);

  cout<<"\nInserte el nuevo valor: "; cin>>val;

  mat[f][c] = val;

}

void eliminarDato(){

  f=c=0;

  mostrarMatriz();

  cout<<"\n\nEl indice empieza con 0 y termina con "<<n-1;
  cout<<"\nInserte la fila: "; cin>>f;

  cout<<"\n\nEl indice empieza con 0 y termina con "<<m-1;
  cout<<"\nInserte la columna: "; cin>>c;

  mat[f][c] = 0;

  mostrarMatriz();

}

void cambiarDimension(){

  int op = 0;

  f=c=0;

  cout<<"\n\nDimension actual: "<<n<<"x"<<m;

  cout<<"\n\nOpciones: \n\t1 - Cambiar n filas. \n\t2 - Cambiar m columnas. \n\t3 - Cambiar ambos. \n\t4 - volver.";

  cout<<"\n\nOpcion: "; cin>>op;

  switch(op){
    case 1:
      cout<<"\n\nInserte el numero: "; cin>>f;
      n = f;
      break;
    case 2:
      cout<<"\n\nInserte el numero: "; cin>>c;
      m = c;
      break;
    case 3:
      cout<<"\n\nInserte el numero de filas: "; cin>>f;
      cout<<"\n\nInserte el numero de columnas: "; cin>>c;
      n = f;
      m = c;
      break;
    case 4:
      break;
    default:
      cout<<"\n\nError";
      break;
  }

  mostrarMatriz();

}

void chiste(){

  cout<<"\n\nMe quede sin pastillas rojas y azules.\n\n";

}

void menu(int op){

  int bk = 0;

  switch(op){

    case 0:
      system("clear");
      cout<<"Fin del programa.\n\n";
      break;

    case 1:
      mostrarMatriz();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 2:
      cambiarValor();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 3:
      eliminarDato();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 4:
      cambiarDimension();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 5:
      chiste();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    default:
      cout<<"\n\nError\n\n";
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;
  }

}

int main(){

  Start();

  int op = 0;

  f=c=0;

  cout<<"Inserte el numero de filas: "; cin>>n;
  cout<<"Inserte el numero de columnas: "; cin>>m;

  do{
    op = 0;
    system("clear");

    cout<<"\t    Menu de Opciones \n\tCreado por nachengue007 \n\tgithub.com/nachengue007 \n\n Version 1.0";
    cout<<"\n\n1 - Mostrar matriz.";
    cout<<"\n2 - Cambiar valor de casilla.";
    cout<<"\n3 - Eliminar el valor de una casilla.";
    cout<<"\n4 - Cambiar la dimension de la matriz.";
    cout<<"\n5 - Entrar a la Matrix.";

    cout<<"\n\n0 - Salir";

    cout<<"\n\nOpcion: "; cin>>op;

    menu(op);
  }while(op != 0);

  return 0;
}
