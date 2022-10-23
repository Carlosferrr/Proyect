#include<stdio.h>
//Declaracion de variables
int num1,num2, Func;
//Declaracion de funciones enteras
int suma(int a, int b), multi(int a, int b), div(int a, int b), residuo(int a, int b);

//Funcion principal

int main(){
//Bienvenida al usuario
printf("Bienvenido al Proyecto de Funciones de Programacion II\n\n");
//Recoleccion de datos
for (int i = 1; i > 0; i--)
{
printf("Ingrese 1 para Sumar, 2 para Multiplicar o Ingrese 3 para Dividir.\n");
scanf("%d",&Func);

switch (Func)
{
case 1:
    printf("Ingrese Primer Numero Entero:");
    scanf("%d",&num1);
    printf("Ingrese Segundo Numero Entero:");
    scanf("%d",&num2);
    printf("\nEl resultado de la adiccion es:%d",suma(num1,num2));
    break;
case 2:
    printf("Ingrese Primer Numero Entero:");
    scanf("%d",&num1);
    printf("Ingrese Segundo Numero Entero:");
    scanf("%d",&num2);
    printf("\nEl resultado de la multiplicacion es:%d",multi(num1,num2));
    break;
case 3:
    printf("Ingrese Primer Numero Entero:");
    scanf("%d",&num1);
    printf("Ingrese Segundo Numero Entero:");
    scanf("%d",&num2);
    printf("\nEl resultado de la division es:%d\n",div(num1,num2));
    printf("El residuo de la division entera es:%d",residuo(num1,num2));
    break;
default:
    printf("Ingreso de Opcion Erronea, ingrese otra vez.\n\n");
    i++;
    break;
}
}
}
//Definicion de Funciones
int suma(int a, int b){
    int adiccion;
    adiccion=a+b;
    return adiccion;
}
int multi(int a, int b){
    int producto;
    producto=a*b;
    return producto;
}
int div(int a, int b){
    int cociente;
    cociente=a/b;
    return cociente;
}
int residuo(int a, int b){
    int resto;
    resto=a%b;
    return resto;
}