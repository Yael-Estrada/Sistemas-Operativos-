#include<stdio.h>
#include<stdlib.h>
#include"Pila.h"

int parIz(char e){return e=='('||e=='['||e=='{';}
int EsBal(char *exp){
Pila a=empty();
int bal=1;
int i=0;
char c;
while((c=*(exp+i))&&bal){
if(parIz(c))
a=push(c,a);
else{
if(isempty(a))
bal=0;
else
a=pop(a);
}
i++;
} 
if(isempty(a)&&!bal)
return 1;
else{
if(isempty(a)&&bal)
return 0;
else
return -1;
}
}


int main(){
char c[20];
puts("Ingrese la expresion con parentesis");
scanf("%s",c);
int i=EsBal(c);
if(i==0){
printf("Esta balanceado\n");
}
else{
if(i==1){
printf("Esta desbalanceado por la derecha\n");
}
else
printf("Esta desbalanceado por la izquierda\n");
}
return 0;
}
