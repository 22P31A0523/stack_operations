#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
typedef struct node NODE;
NODE*head=NULL;
NODE*tail=NULL;

void insert_at_head(NODE*nn)
{
if(head==NULL&&tail==NULL)
{
    head=nn;
    tail=nn;
	}	
	else
	{
	    head->prev=nn;
        nn->next=head;
	    head=nn;
	}
}
void insert_at_end(NODE*nn){
	if(head==NULL&&tail==NULL){
		head=nn;
		tail=nn;
	}
	else{
		tail->next=nn;
		nn->prev=tail;
		tail=nn;		
	}
}
void delete_at_head(){
	if(head==NULL&&tail==NULL){
		printf("No nodes\n");
	}
	else if(head==tail){
		printf("Deleted element is :%d",head->data);
		head=NULL;
		tail=NULL;
	}
	else{
		printf("Deleted element is:%d",head->data);
		head=head->next;
		head->prev=NULL;
	}
}
void delete_at_end(){
	if(head==NULL&&tail==NULL){
		printf("No nodes\n");
	}
	else if(head==tail){
		printf("Deleted element is :%d",head->data);
		head=NULL;
		tail=NULL;
	}
	else{
		printf("Deleted element is :%d",tail->data);
		tail=tail->prev;
		tail->next=NULL;
	}
}
void display_from_head()
{
	if(head==NULL && tail==NULL)
	{
		printf("no nodes\n");
	}
	else
	{
		NODE*temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
void display_from_tail()
{
	if(head==NULL && tail==NULL)
	{
		printf("no nodes\n");
	}
	else
	{
		NODE*temp=tail;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->prev;
		}
		printf("\n");
	}
}
int main()
{
	int choice;
	while(1)
	{
	printf("enter\n1.insert at head\n2.insert at tail\n3.delete at head\n4.delete at end\n5.display from head\n6.display from tail\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		//insert at head
	         int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
		 NODE*nn=(NODE *)malloc(sizeof(NODE));
		 nn->data=val;
		 nn->next=NULL;
		 nn->prev=NULL;
		 insert_at_head(nn);
	}
	else if(choice==2)
	{
		//insert at tail
		 int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
		 NODE*nn=(NODE *)malloc(sizeof(NODE));
		 nn->data=val;
		 nn->next=NULL;
		 nn->prev=NULL;
		 insert_at_end(nn);
	}
	else if(choice==3)
	{
		//delete at head
		delete_at_head();
	}
	else if(choice==4)
	{
		//delete at end
		delete_at_end();
	}
	else if(choice==5)
	{
		//display from head
		display_from_head();
	}
	else if(choice==6)
	{
		//dispay from tail
		display_from_tail();
	}
	else
	{
		printf("THANK YOU");
	    break;
	}
}
}
