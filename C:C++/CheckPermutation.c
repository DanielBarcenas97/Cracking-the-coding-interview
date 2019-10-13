//Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.

#include <stdio.h>
#include <string.h>


int main(){

    char wordOne[] = "Hola";
    char wordTwo[] = "Adios";
    int i;

    printf("%s", wordOne);
    printf("%s \n",wordTwo);

    for(i=0; i<strlen(wordOne); i++){
        printf("%c\n", wordOne[i]);
    }


    return 0;
}