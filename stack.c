#include <stdio.h>  
#include <stdlib.h>  
void push_insert(int val);  
void pop_delete(void);  
void display();  
struct node   
{  
int data;  
struct node *adr;  
};  
struct node *head;  
  
void main ()  
{  
    
                push_insert(10);
		push_insert(20);
		push_insert(30);
		push_insert(40);
		push_insert(50);
		display();
		pop_delete();
		display();  
                 
  
}  
void push_insert (int val)  
{  
      
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("Memory is not allocated\n");   
    }  
    else   
    {    
        if(head==NULL)  
        {         
            ptr->data = val;  
            ptr -> adr = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->data = val;  
            ptr->adr = head;  
            head=ptr;  
               
        }  
        printf("DATA PUSH DONE\n");  
          
    }  
}  
  
void pop_delete(void)  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("list is empty\n");  
    }  
    else  
    {  
        item = head->data;  
        ptr = head;  
        head = head->adr;  
        free(ptr);  
        printf("Data Deleted Done\n");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->data);  
            ptr = ptr->adr;  
        }  
    }  
}  

