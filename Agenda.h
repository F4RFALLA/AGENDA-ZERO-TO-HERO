#ifndef AGENDA_H
#define AGENDA_H
#include <stdbool.h>

#include "contato.h"

typedef struct _list AGENDA;
/**
 * Cria instâncias de uma lista estática
 * @param unsigned int Tamanho desejado para a lista
 * @return TStaticList*
 */
AGENDA* SList_create(unsigned int);
/**
 * Faz a inserção de um elemento no fim da lista.
 * @param TStaticList* list
 * @param Contato contato a ser armazenado na lista
 * @return boolean informando se a operação foi sucesso
 */
bool SList_insert_end(AGENDA*, Contato);
/**
 * Imprime a lista estática
 * @param TStaticList* list
 */
void SList_print(AGENDA*);
/**
 * Informa se a lista está cheia
 * @param TStaticList* list
 * @return boolean 
 */
bool SList_is_full(AGENDA*);

#endif
