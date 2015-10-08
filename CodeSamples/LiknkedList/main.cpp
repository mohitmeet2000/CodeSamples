#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
int *insertNode()
{

}
int *deleteNode()
{

}

int main()
{int input;
	do{
    
    printf( "1. Insert\n" );
    printf( "2. Delete\n" );
    printf( "0. Exit\n" );
    scanf( "%d", &input );

switch(input)
{
    case 1:            /* Note the colon, not a semicolon */
            insertNode();
            break;
    case 2:          
            deleteNode();
            break;

    case 3: 
            break;
            
    
}
}while(input!=0);
    	
return 0;

}
