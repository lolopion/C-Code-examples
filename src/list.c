#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int data;
    struct node_t* next;
}node_t;
int main(){

 node_t* list_remove_tail (node_t* node){
     node_t* result = node;
     if(node != NULL){
         if(node->next == NULL){
             free(node);
             result=NULL;
         } else {
             node->next=list_remove_tail(node->next);
         }
     }
     return result;
 }
 return 0;
}