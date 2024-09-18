#include "Agenda.h"
#include <stdio.h>
#include <stdlib.h>
struct _list{
    unsigned int MAX;
    unsigned int qty;
    Contato *data;
};

AGENDA* SList_create(unsigned int size) {
    AGENDA* list = malloc(sizeof(AGENDA));
    if(list!=NULL){
        list->data = malloc(sizeof(Contato)*size);
        if(list->data==NULL){
            free(list);
            return NULL;
        }
        list->qty = 0;
        list->MAX = size;
    }
    return list;
}

bool SList_insert_end(AGENDA* list, Contato info){
    //Checar se tem espaço
    if(SList_is_full(list))
        return false;
    list->data[list->qty] = info;
    list->qty++;
    return true;
}

bool SList_is_full(AGENDA* list){
    return list->qty == list->MAX;
}


void SList_print(AGENDA* list){
    puts("--------------------------");
    for(unsigned int i=0; i<list->qty; i++)
        Contato_print(list->data[i]);
    putchar('\n');
}
