#include <stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

Node* getNode(int n){
    Node* temp = malloc(sizeof(Node));
    temp->data = n;
    temp->prev = NULL;
    temp->next = NULL;
}
void insertAtTail(Node* s,int n){
    Node*node = getNode(n);
    if(s==NULL){
        s = node;
    }
    else{
        while(s->next!=NULL){
            s=s->next;
        }
        s->next = node;
        node->prev = s;
    }
}
void print(Node *s){
    while(s!=NULL){
        printf("%d ",s->data);
        s= s->next;
    }
}
int main(){
    Node* first = getNode(3);
    insertAtTail(first,4);
    insertAtTail(first,5);
    insertAtTail(first,6);
    print(first);
}