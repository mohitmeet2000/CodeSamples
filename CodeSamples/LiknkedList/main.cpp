#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
}*first=NULL,*last=NULL,*temp=NULL,*ptr=NULL;
void display();
void insertNode()
{
  printf("Enter the data of the node");
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    scanf("%d",&temp->data);
    if(first==NULL)
    {
        first=temp;
        last=temp;
    }
    else
    {
        last->next=temp;
        last=temp;
    }
        //return first;tr
}
void getreverse()
{   struct node *extra,*temp1;
    if(first==NULL||first->next==NULL){
    display();
}else{
    temp=first;
    extra=first->next;
    temp->next=NULL;
while(extra->next!=NULL)
{
    first=extra;
    extra=extra->next;
    first->next=temp;
    temp=first;

}
extra->next=first;
first=extra;
   display(); 
    

}
}
void display()
{

if (first == NULL)
    {
        
        printf(":No nodes in the list to display\n");
    }
else
    {
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {    
            printf("%d\t", ptr->data);
        }
    }


}

int main()
{int input;
	do{
    
    printf( "\n1. Insert\n" );
    printf( "2. Display\n" );
    printf( "3. Reverse\n" );
    printf( "0. Exist\n" );
    
    scanf( "%d", &input );

switch(input)
{
    case 1:            /* Note the colon, not a semicolon */
            insertNode();
                
            break;
    case 2:          
            display();
            break;

    case 3: 
            getreverse();
            break;
    case 0: 
            break;
            
    
}
}
while(input!=0);
return 0;

}