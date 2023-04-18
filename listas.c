#include <stdio.h>
#include <stdlib.h>

typedef struct nodo 
{
    int valor;
    struct nodo *siguiente;
} nodo;

nodo *crearNodo(int valor) 
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

nodo *agregarPrincipio(nodo *cabeza, int valor) 
{
    nodo *NODO = crearNodo(valor);
    NODO->siguiente = cabeza;
    return NODO;
}

void agregarFinal(nodo *cabeza, int valor) 
{
    nodo *NODO = crearNodo(valor); 
    nodo *aux = cabeza;
    while (aux->siguiente != NULL)
    {
        aux = aux->siguiente;
    }
    aux->siguiente = NODO;
    
}

int listaVacia(nodo *cabeza)
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
        printf("%d \n", aux->valor);
        aux = aux->siguiente;
    }
}

int main() 
{
    nodo *lista = crearNodo(9);
    lista = agregarPrincipio(lista, 2);
    agregarFinal(lista, 6);
    agregarFinal(lista, 0);
    agregarFinal(lista, 7);
    agregarFinal(lista, 4);
    agregarFinal(lista, 4);
    agregarFinal(lista, 8);

    imprimirCola(lista);
    return 0;
}