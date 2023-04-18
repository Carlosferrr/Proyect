#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct examen
{
    char materia[15];
    char tema[15];
    int porcentaje;
} examen;

typedef struct nodo 
{
    examen valor;
    struct nodo *siguiente;
} nodo;


nodo *crearNodo(examen valor) 
{
    nodo *NODO = NULL;
    NODO = (nodo*)malloc(sizeof(nodo));

    if (NODO != NULL)
    {
        NODO->siguiente = NULL;
        NODO->valor = valor;
    }
    return NODO;
}

void agregar(nodo *cabeza, examen valor) 
{
    nodo *NODO = crearNodo(valor); 
    nodo *aux = cabeza;
    while (aux->siguiente != NULL)
    {
        aux = aux->siguiente;
    }
    aux->siguiente = NODO;
    
}

nodo *sacar(nodo *cabeza) 
{
    nodo *siguiente = cabeza->siguiente;
    if (siguiente == NULL) {
        free(cabeza);
    }
    return siguiente;
}

int colaVacia(nodo *cabeza)
{
    if (cabeza == NULL) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void imprimirCola(nodo *cabeza)
{
    nodo *aux = cabeza;
    while (aux != NULL)
    {
        printf("%s: %s (%d%%) \n", aux->valor.materia, aux->valor.tema, aux->valor.porcentaje);
        aux = aux->siguiente;
    }
}

int main() 
{   
    examen prueba1 = {"Programacion", "Colas", 25};
    examen prueba2 = {"Matematica", "Integrales", 25};

    nodo *lista = crearNodo(prueba1);
    agregar(lista, prueba2);
    imprimirCola(lista);
    printf("- \n");
    lista = sacar(lista);
    imprimirCola(lista);
    return 0;
}