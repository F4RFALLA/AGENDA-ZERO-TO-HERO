#include "contato.h"
#include <stdio.h>

void Contato_print(Contato c){
    printf("ID: %u\n", c.id);
    printf("Nome: %s\n", c.nome);
    printf("Telefone: %s\n", c.telefone);
}

Contato Contato_ui_novo(){
    Contato c;
    static unsigned int id = 1;
    printf("Digite os dados de um novo Contato: ");
    printf("Nome: ");
    scanf("%d",c.nome);
    printf("Telefone: ");
    scanf("%s", c.telefone);
    c.id = id++;
    return c;
}
