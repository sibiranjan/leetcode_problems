#include<stdio.h>
#include<stdlib.h>


struct node{
int data;
struct node *next;
};
struct node *head;
//creating a newnode
struct node *Newnode(int data){
  struct node *Newnode;
  Newnode=(struct node*)malloc(sizeof(struct node));
  Newnode->data=data;
  Newnode->next=NULL;
  return Newnode;
}

//Creating an insertion at end on linked list
void insert_at_end(int data){
  struct node *newnode = Newnode(data);
  struct node *temp = head;
  if(temp==NULL){
    head=newnode;
  }
  else{
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=newnode;
  }
  
}
void display(){
    printf("The linked list are");
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main(){
  struct node *head=NULL;
  insert_at_end(1);
  insert_at_end(2);
  insert_at_end(3);
  insert_at_end(4);

  display();
  
}
