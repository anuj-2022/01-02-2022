#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *adr;  
};  
struct node *front;  
struct node *rear;   
void insert_enqueue(int item);  
void delete_dqueue();  
void display();  
void main ()  
{  
    	insert_enqueue(10);
    	insert_enqueue(20);
	insert_enqueue(30);
	insert_enqueue(40);
	insert_enqueue(50);
	display();
	delete_dqueue();
	display();  
}  
void insert_enqueue(int item)  
{  
    struct node *ptr;  
     
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("memory is not allocated\n");  
        return;  
    }  
    else  
    {   
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> adr = NULL;  
            rear -> adr = NULL;  
        }  
        else   
        {  
            rear -> adr = ptr;  
            rear = ptr;  
            rear->adr = NULL;  
        }  
    }  
}     
void delete_dqueue()
{  
    struct node *ptr;  
    if(front == NULL)  
    {  
        printf("queue is empty\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> adr;  
        free(ptr);  
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nDATA IS PRINTING\n");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> adr;  
        }  
    }  
}  
