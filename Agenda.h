#ifndef AGENDA_H
#define AGENDA_H
#include <stdbool.h>

typedef struct _list AGENDA;
/**
 * Cria instâncias de uma lista estática
 * @param unsigned int Tamanho desejado para a lista
 * @return AGENDA*
 */
AGENDA* SList_create(unsigned int);
/**
 * Faz a inserção de um elemento no fim da lista.
 * @param AGENDA* list
 * @param int valor inteiro a ser inserido na lista
 * @return boolean informando se a operação foi sucesso
 */
bool SList_insert_end(AGENDA*, int);
/**
 * Faz a inserção de um elemento no inicio da lista.
 * @param AGENDA* list
 * @param int valor inteiro a ser inserido na lista
 * @return boolean informando se a operação foi sucesso
 */
bool SList_insert_begin(AGENDA*, int);
/**
 * Imprime a lista estática
 * @param AGENDA* list
 */
void SList_print(AGENDA*);
/**
 * Informa se a lista está cheia
 * @param AGENDA* list
 * @return boolean 
 */
bool SList_is_full(AGENDA*);

#endif
