#include <stdio.h>
#include <stdlib.h>

/**
*   @author Patrick Araújo: https://github.com/patrickaraujo
*   Exercício de Programação 2 do capítulo 2 do livro Conceitos de Linguagens de Programação - Nona Edição de Robert Sebesta
*/

typedef struct est {
    char *nome, *nivel;
    int idade;
    float media;
}Estudante;

char *EntraString(){
    fflush(stdin);
    char tecla;
    char *retorno=NULL;
    int tam=0;
    do {
        tecla=getchar();
        if(!retorno)
            retorno=(char*)malloc(sizeof(char));
        else
            retorno=(char*)realloc(retorno,tam+1);
        if(tecla != '\n')
            retorno[tam]=tecla;
        tam++;
    } while(tecla!='\n');
    retorno[tam-1]='\0';
    return retorno;
}

int main(){
    printf("Digite o nome do estudante:\t");
    char *nome = EntraString();
    printf("\nQual a idade do estudante?:\t");
    int idade;
    scanf("%d", &idade);
    printf("\nQual a media do estudante?:\t");
    float media;
    scanf("%f", &media);
    printf("\nQual o nivel do estudante?:\t");
    char *nivel = EntraString();

    Estudante *pedro = (Estudante*) malloc(sizeof(Estudante));
    pedro->nome = (char *) malloc(sizeof(char));
    pedro->nivel = (char *) malloc(sizeof(char));
    strcpy(pedro->nome, nome);
    strcpy(pedro->nivel, nivel);
    pedro->idade = idade;
    pedro->media = media;
    pedro->nivel = nivel;

    printf("\n\nNome do estudante:\t%s\nIdade:\t%i\nMedia:\t%f\nNivel:\t%s", pedro->nome, pedro->idade, pedro->media, pedro->nivel);
    return 0;
}
