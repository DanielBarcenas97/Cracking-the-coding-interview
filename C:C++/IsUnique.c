#include <stdio.h>
#include <string.h>
/*
implement an algorithm to determine if a string has all unique
characters.What if you cannot use additional datas structures
*/

int main(){
    char *palabra = "Peos";
    printf("%s \n",palabra);
    int longitud=0;
    int aux;
    int res=0;
    int arreglo[128];
    int i=0;
    for(i=0; i<128; i++){
        arreglo[i]=0;
    }
    longitud=strlen(palabra);

    for(i=0;i<longitud;i++){
        aux=palabra[i];
        if(arreglo[aux] == 1){
            res=1;
        }else{
            arreglo[aux]=1;
        }
    }
    if(res == 1){
        printf("Tiene caracteres iguales\n");
    }
    else{
        printf("Tiene diferentes caracteres\n");
    }

    
    return 0;
}