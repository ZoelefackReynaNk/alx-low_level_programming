# include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


struct node {
    int key;
    int value;

    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void printList(){
    struct node *ptr = head;
    printf("\n[ ");
    while(ptr!=NULL){
        printf("(%d, %d)", ptr->key, ptr->value);
        ptr = ptr->next;
    }

    printf("]");
    
}

//insert into a linklist
void insertIntoList(int value, int key){
    struct node *link =  (struct node* )malloc(sizeof(struct node));
    link->key = key;
    link->value = value;
    link->next = head;
    head = link;
}

int main(){
   
    insertIntoList(12,23);
    insertIntoList(11,22);
    insertIntoList(10,21);
    insertIntoList(9,20);
    insertIntoList(8,19);
    insertIntoList(7,18);
    
    printList();
}
