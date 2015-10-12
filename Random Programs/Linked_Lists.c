/*
Author: Kartik Jagdale
Title: Linked Lists.C

Description:
	A set of items of the same type in which each item points to ("is linked to") the next item in the list. 
	Ordering of items is not part of the definition, therefore, we will not consider the ordering. 
	Yet determined according to the usage.


NOTE: Since sequence of elements is not part of definition of a linked list, many other structures can be implemented using Linked Lists.
E.g. if items are ordered according to the sequence of insertion into the list, this corresponds to a stack,
	in which the top item is pointed by the list "head pointer". 


*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
void printdata(node *);
node * create(int);
node * insert(node*, int, int);
node * delete(node*, int);
int main(){
	node *HEAD;
	int n, x , LOC;
	printf("Enter Number of Nodes :");
	scanf("%d",&n);
	HEAD = create(n);
	/* Priniting DATA */
	printdata(HEAD);

    /* Insert new Data */
    printf("\nEnter Data to Store: ");
    scanf("%d",&x);
	printf("\nEnter Location to store data: ");
    scanf("%d",&LOC);
    HEAD = insert(HEAD, x, LOC);
    printdata(HEAD);

    system("pause");
	return 0;
}

/* Function to create Data */

node * create(int n)
{
     node *p , *HEAD;
    int i;
    HEAD = (node*)malloc(sizeof(node));
	printf("Enter Data for 1st Node: ");
    scanf("%d",&(HEAD->data));
	HEAD->next = NULL;
	p = HEAD;
	for(i=1;i<n;i++){
		p->next = (node*)malloc(sizeof(node));
		p = p->next;
		p->next = NULL;
		scanf("%d",&(p->data));
	}
	return(HEAD);     
}

/* Function to print data */	
void printdata(node *p){
	while(p != NULL){
		printf("\t%d",p->data);
		p = p->next;

	}
	printf("\n");
}


/* Function to Insert data */
node * insert(node *HEAD, int x, int LOC){
	node *p, *q;
	int i;
	p = (node *)malloc(sizeof(node));
	p->data = x;
	p->next = NULL;
	
	/* if LOC is HEAD i.e 1 */
	if(LOC == 1){
		p->next = HEAD;
		return(p); /* Make node p as HEAD */
	}
	/* Any other Location */
	q = HEAD;
	for(i=1;i<LOC-1;i++){
		if(q!=NULL){
					q = q->next;
			}
		else{ /* i.e q == NULL */
			printf("\nOverflow\n");
			return(HEAD);
		}
		}
	/* If LOC found */		
	p->next = q->next;
	q->next = p;
	return(HEAD);
}


/*
Delete Function
*/
node *delete(node *HEAD, int x){
	node *p, q;
	if(x==HEAD->data){
		p = head();
		
	}
}