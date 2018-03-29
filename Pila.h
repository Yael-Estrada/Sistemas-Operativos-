
#include "Elem.h"

typedef struct nodo{
Elem tope;
struct nodo *sig;
} *Pila;

Pila empty(){return NULL;}

Pila push(Elem e,Pila P){
Pila b=(Pila)malloc(sizeof(struct nodo));
b-> tope=e;
b-> sig= P;
return b;
}

int isempty(Pila P){return P==NULL;}
Elem top(Pila P){return P->tope;}
Pila pop(Pila P){return P->sig;}

void ImpPila(Pila P){
if(!isempty(P))
{
ImpElem(top(P));
ImpPila(pop(P));
}}
