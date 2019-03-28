//David Pérez Frenández-1ºMecánica-Ej.1 Vectores
#include<stdio.h>
#include<math.h>
#define TAM 2
int distancia(int v1[TAM], int v2[TAM]);
void cargar(int v[TAM]);

int main(){
 int p1[TAM];
 int p2[TAM];
 cargar (p1);
 cargar (p2);
 float resultado=distancia(p1,p2);
 printf("El resultado es=%f\n",resultado);
 return 0;
}
void cargar(int v[TAM]){
 int i;
  for(i=0;i<TAM;i++){
   printf("introduce los puntos:\n");
   scanf("%d",&v[TAM]);
}
}
int distancia(int v1[TAM], int v2[TAM]){
 int resta1= v2[0]-v1[0];
 int resta2= v2[1]-v1[1];
 float raiz= sqrt(pow(resta1,2)+pow(resta2,2));
 return raiz;
}
