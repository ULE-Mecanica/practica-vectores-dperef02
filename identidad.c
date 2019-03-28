//David Pérez Frenández-1ºMecánica-Ej.2 Matrices
#include<stdio.h>
#include<stdlib.h>
void identidad(int m[9][9]);
int main(){
 int a[9][9];
 identidad (a);
 return 0;
}
void identidad(int m[9][9]){
 int m2[9][9]={0},i,j;
 for(i=0;i<9;i++){
  for(j=0;j<9;j++){
   if(i==j){
    m2[i][j]=1;
}
}
}
 for(i=0;i<9;i++){
  for(j=0;j<9;j++){
   printf("|%d|",m2[i][j]);
}
 printf("\n");
}
}
