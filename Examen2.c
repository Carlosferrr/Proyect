// Carlos Fernandez, CI. 29.607.448
#include<stdio.h>
int i,aux=1;
//Declaracion de Estructuras Anidadas
struct boxeador{
    char nombre [50];
    int edad;
    float peso;
    int ganadas;
    int perdidas;
    int empates;
    struct titulos{

  char federacion[50];
  int defensas;
}Campeonatos[4];
    

}boxeadores[4];



//Declaracion de Funciones

void Menu();
void registro();
void impresion();
void salida();



int main(){
    printf("Bienvenido al registro de Campenes en Boxeo.\n");
    printf("___________________________________");
  //Menu();

  return 0;

}

//Definicion

void registro(){
  for(i=0;i<4;i++){

    fflush(stdin);

//Datos Boxeador
    printf("Nombre Boxeador %d: ", i+1);
         gets(boxeadores[i].nombre);
        fflush(stdin);
        printf("Edad: ");
        scanf("%d", &boxeadores[i].edad);
        printf("Peso en libras: ");
        scanf("%f", &boxeadores[i].peso);
        printf("Peleas Ganadas: ");
        scanf("%d", &boxeadores[i].ganadas);
        printf("Peleas Perdidas: ");
        scanf("%d", &boxeadores[i].perdidas);
        printf("Peleas Empatadas: ");
        scanf("%d", &boxeadores[i].empates);

        //Datos Campeonatos

        fflush(stdin);

        printf("Federacion de la que es campeon ");

        gets(boxeadores[i].Campeonatos[i].federacion);

        fflush(stdin);

        printf("Defensas de Titulo");

        scanf("%d", &boxeadores[i].Campeonatos[i].defensas);

        fflush(stdin);

}

}

void mostrar(){

  for(i=0;i<4;i++){

  fflush(stdin);

    printf("Nombre del boxeador %d es: %s ", i+1, boxeadores[i].nombre);
    fflush(stdin);
    printf("\nLa edad de %s es: %d", boxeadores[i].nombre, boxeadores[i].edad);
    printf("El peso de %s es de: %.2f",boxeadores[i].nombre,boxeadores[i].peso);
    printf("%s ha ganado: %d peleas",boxeadores[i].nombre,boxeadores[i].ganadas);
    printf("%s ha perdido: %d peleas",boxeadores[i].nombre,boxeadores[i].perdidas);
    printf("%s ha empatado: %d peleas",boxeadores[i].nombre,boxeadores[i].empates);
    fflush(stdin);
    printf("\nFederacion de la que %s es Campeon: %s", boxeadores[i].nombre, boxeadores[i].Campeonatos[i].federacion);

    fflush(stdin);

    printf("\nLas defensas de titulo %s en la federacion %s son: %d ",boxeadores[i].nombre,boxeadores[i].Campeonatos[i].defensas);

    fflush(stdin);

}

}

void salida(){

  aux--;

}



void Menu(){
 int opc, aux=1;
  do{

  printf(" 1. Ingresar datos.\n 2. Mostrar Datos.\n 3. Salir.\n Ingrese Opcion: ");

  scanf("%d", &opc);

  switch(opc){

    case 1: 

    registro();

  break;

      case 2:

        impresion();

  break;

  case 3:

    salida();

    break;
    default:
    printf("Opcion no  validad, intente otra vez.");

}

}while (aux==1);

}