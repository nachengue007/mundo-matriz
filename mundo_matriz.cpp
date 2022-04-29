/*
   __  __                 _         __  __       _        _
  |  \/  |               | |       |  \/  |     | |      (_)
  | \  / |_   _ _ __   __| | ___   | \  / | __ _| |_ _ __ _ ____
  | |\/| | | | | '_ \ / _` |/ _ \  | |\/| |/ _` | __| '__| |_  /
  | |  | | |_| | | | | (_| | (_) | | |  | | (_| | |_| |  | |/ /
  |_|  |_|\__,_|_| |_|\__,_|\___/  |_|  |_|\__,_|\__|_|  |_/___|

  v2.23 Alpha

*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX_NUM 100 // NO PONER 80 PORQUE TIRA UNA VIOLACION DE SEGMENTO

using namespace std;

int i=0,j=0,f=MAX_NUM,c=MAX_NUM,n=-1,m=-1;
int mat[MAX_NUM][MAX_NUM];

void Start(){

  system("clear");

  srand(time(NULL));

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

void aleatorios(int op){

  if(op == 1){
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        mat[i][j] = rand() % 9 + 1;
      }
    }
  }
  if(op == 0){
    mat[f][c] = rand() % 9 + 1;
  }

}

void ingresoDeDatos(bool fila, bool columna){

  bool flag;

  int f = 0, c = 0;

  flag = false;

  while(flag == false){

    if(fila == false){
      flag = true;
    }
    else{
      if(f < 1 || f > MAX_NUM){
        f = -1;
        cout<<"Inserte el numero de filas: "; cin>>f;
      }
      else{
        n = f;
        flag = true;
      }
    }

  }

  flag = false;

  while(flag == false){

    if(columna == false){
      flag = true;
    }
    else{
      if(c < 1 || c > MAX_NUM){
        c = -1;
        cout<<"Inserte el numero de columnas: "; cin>>c;
      }
      else{
        m = c;
        flag = true;
      }
    }
  }

}

void cambiarValor(){

  int val = 0, op = 0;
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

  cout<<"\n\nQuieres que: \n\t1 - El programa te de un numero aleatorio. \n\t2 - Elige usted. \n\nOpcion: ";
  cin>>op;

  if(op == 1){
    aleatorios(0);
  }
  else{
    cout<<"\nInserte el nuevo valor: "; cin>>val;
    mat[f][c] = val;
  }

  mostrarMatriz();

}

void eliminarDato(){

  f=c=0;

  mostrarMatriz();

  do{
    cout<<"\n\nEl indice empieza con 0 y termina con "<<n-1;
    cout<<"\nInserte la fila: "; cin>>f;
  }while(f > n-1);

  do{
    cout<<"\n\nEl indice empieza con 0 y termina con "<<m-1;
    cout<<"\nInserte la columna: "; cin>>c;
  }while(c > m-1);

  mat[f][c] = 0;

  mostrarMatriz();

}

void cambiarDimension(){

  int op = 0;

  cout<<"\n\nDimension actual: "<<n<<"x"<<m;

  cout<<"\n\nOpciones: \n\t1 - Cambiar n filas. \n\t2 - Cambiar m columnas. \n\t3 - Cambiar ambos. \n\t4 - volver.";

  cout<<"\n\nOpcion: "; cin>>op;

  switch(op){
    case 1:
      ingresoDeDatos(true,false);
      break;
    case 2:
      ingresoDeDatos(false,true);
      break;
    case 3:
      ingresoDeDatos(true,true);
      break;
    case 4:
      break;
    default:
      cout<<"\n\nError";
      break;
  }

  mostrarMatriz();

}

void traspuesta(){
  int mT[m][n];

  cout<<"\nMatriz normal: ";
  mostrarMatriz();

  cout<<"\nMatriz traspuesta\n\n";

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      mT[i][j] = mat[j][i];
      cout<<"\t["<<mT[i][j]<<"]";
    }
  cout<<"\n\n\n";
  }

}

void chiste(){

  cout<<"\n\nMe quede sin pastillas rojas y azules.\n\n";

}

void titulo(){

  cout<<"\n\t __  __                 _         __  __       _        _";
  cout<<"\n\t|  \\/  |               | |       |  \\/  |     | |      (_)";
  cout<<"\n\t| \\  / |_   _ _ __   __| | ___   | \\  / | __ _| |_ _ __ _ ____";
  cout<<"\n\t| |\\/| | | | | '_ \\ / _` |/ _ \\  | |\\/| |/ _` | __| '__| |_  /";
  cout<<"\n\t| |  | | |_| | | | | (_| | (_) | | |  | | (_| | |_| |  | |/ /";
  cout<<"\n\t|_|  |_|\\__,_|_| |_|\\__,_|\\___/  |_|  |_|\\__,_|\\__|_|  |_/___|\n\n";


  cout<<"\n\nHecho en: patorjk.com/software/taag/#p=display&f=Big&t=Mundo Matriz\n";
}

void menu(int op){

  int bk = 0;

  switch(op){

    case 0:
      system("clear");
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
      cout<<"\nMatriz antigua:";
      mostrarMatriz();
      aleatorios(1);
      cout<<"\nMatriz nueva:";
      mostrarMatriz();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 6:
      traspuesta();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 7:
      chiste();
      while(bk != 1){
        cout<<"\n1 para volver: "; cin>>bk;
      }
      break;

    case 8:
      titulo();
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

  cout<<"\t    Menu de Opciones";
  cout<<"\n\tCreado por nachengue007";
  cout<<"\n\tgithub.com/nachengue007";
  cout<<"\n\n Version 2.23 Alpha\n\n";

  ingresoDeDatos(true,true);

  do{
    cout<<"\n\nQuieres que los valores inicien en: \n\t1 - Numero Aleatorio. \n\t2 - 0. \n\nOpcion: ";
    cin>>op;
  }while(op != 1 && op != 2);

  if(op == 1){
    aleatorios(1);
  }

  do{
    op = 0;
    system("clear");

    cout<<"\t    Menu de Opciones";
    cout<<"\n\tCreado por nachengue007";
    cout<<"\n\tgithub.com/nachengue007";
    cout<<"\n\n Version 2.23 Alpha";

    cout<<"\n\n1 - Mostrar matriz.";
    cout<<"\n2 - Cambiar valor de casilla.";
    cout<<"\n3 - Eliminar el valor de una casilla.";
    cout<<"\n4 - Cambiar la dimension de la matriz.";
    cout<<"\n5 - Reemplazar todas las valores aleatoriamente.";
    cout<<"\n6 - Sacar matriz traspuesta.";
    cout<<"\n7 - Entrar a la Matrix.";
    cout<<"\n8 - Titulo.";

    cout<<"\n\n0 - Salir";

    cout<<"\n\nOpcion: "; cin>>op;

    menu(op);
  }while(op != 0);

  return 0;
}
