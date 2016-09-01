#include <stdio.h>
#include <stdlib.h>
/**
    @author: Marcos Freitas
    @project: Listas Encadeadas
    @exhibition: 10/09/16
**/
typedef struct bloco Bloco;
struct bloco {
    int chave;
    Bloco *proximo;
};
//
Bloco *create(void){
    return NULL;
}
Bloco *insert(Bloco *ponteiro, int conteudo){
    Bloco *novo = (Bloco *)malloc(sizeof(Bloco));
    novo -> chave = conteudo;
    novo -> proximo = ponteiro;
}
//
void print(Bloco *lst_encad){
    if(lst_encad != NULL){
        printf("Chave: %d / Localizac\706o: %d\n", lst_encad -> chave, lst_encad -> proximo);
        print(lst_encad -> proximo);
    }
}
//
Busca(Bloco *lst_encad, int item_busca){
    Bloco *aux;
    aux = lst_encad;
    while(aux != NULL && aux -> chave != item_busca){
        aux = aux -> proximo;
    }
    return aux;
}
int main(){
    Bloco *lista;
    //
    lista = create();
    lista = insert(lista, 10);
    lista = insert(lista, 11);
    print(lista);
    int busca;
    busca = Busca(lista, 10);
    printf("\n%d\n", busca);
    //
    return EXIT_SUCCESS;
}
