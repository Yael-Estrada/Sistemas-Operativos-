

typedef char Elem;

void ImpElem(Elem e){
printf("%c",e);
}

int numero(char c){
    return (int)c-48;
}

int dosnumeros(char a,char b){
 return ((int)a-48)*10+((int)b-48);   
}

int EsMayor(Elem a,Elem b){
	return a>b;
}

int IgualesElem(Elem a,Elem b){
return a==b;	
}
