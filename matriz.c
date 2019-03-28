//David Pérez Frenández-1ºMecánica-Ej.1 Matrices
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define FIL 5
#define COL 5
int matriz(int mat[FIL][COL]);
int main(){
 srand(time(NULL));
 int a[FIL][COL];
 int i,j;
 matriz (a);
 for(i=0;i<5;i++){
  for(j=0;j<5;j++){
   printf("| %d |",a[i][j]);
}
 printf("\n");
}

 return 0;
}
int matriz(int mat[FIL][COL]){

 int c,b,n;
 for(c=0;c<5;c++){
  for(b=0;b<5;b++){
   n=rand()%16;
   if((n>2)&&(n<16)){
    mat[c][b]=n;
}
}
}
 return (mat[c][b]);
}
  
  

