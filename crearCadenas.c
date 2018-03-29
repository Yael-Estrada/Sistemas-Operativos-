//Programa en C que crea un número aleatorio de archivos .txt y escribe en ellos una cadena almacenada en un arreglo

#include <Windows.h>
#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{   
   
    srand(time(NULL));
    char dir[100];
    strcpy(dir,"DIRECCION DEL ARCHIVO A CREAR");
    char last[10];
    strcpy(last,".txt");
    int i;
    char obt[10]="cadenas",num[5];
    int numarchivos=rand()%10;
    char chains[30][30]={"Hola","Adios","Bye","Sistemas","Operativos","Linux","Windows","UNIX","UBUNTU","Lenguaje"};
    HANDLE hFile;
    BOOL bFile;
    DWORD numberofbytes;
    DWORD numberwritten=0;
    
    for(i=0;i<numarchivos;i++){
    numberofbytes=strlen(chains[i]);
    sprintf(num,"%d",i);
    strcat(dir,obt);
    strcat(dir,num);
    strcat(dir,last);  
    hFile= CreateFile(dir,GENERIC_READ|GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
    if(hFile== INVALID_HANDLE_VALUE){
               printf("CreateFile failed\n");}
    printf("CreateFile Success!\n");
    bFile= WriteFile(hFile,chains[i],numberofbytes,&numberwritten,NULL);
    if(bFile== FALSE){ printf("Write Failed! \n ");
               }
    printf("Write Success! \n");
    CloseHandle(hFile);
    strcpy(dir,"DIRECCIÓN DE LOS ARCHIVOS A CREAR");                    
    }
  
    return 0;
}
