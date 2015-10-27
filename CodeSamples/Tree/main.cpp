#include <stdio.h>
#include <malloc.h>

struct node
{
int data;
struct node * left;
struct node * right;
};

void insertNode(struct node ** node1,int key)
{
if (*node1 == NULL)
    {
    struct node* tmp=(struct node*)malloc(sizeof(struct node*));
    tmp->data=key;
    tmp->left=NULL;
    tmp->right=NULL;
    *node1 = tmp;
    }
 else{
    struct node *tmp = *node1;
    if (key < tmp->data)
    insertNode(&(tmp->left),key);
    else if (key > tmp->data)
       insertNode(&(tmp->right),key);   
 }
    //return node1;
}
void printInorder(struct node* node1)
{
    if (node1 == NULL) return;
    printInorder(node1->left);
    printf("%d", node1->data);  
    printInorder(node1->right); 

}

int main()

{   
struct node* root=NULL;
        insertNode(&root,5);
        insertNode(&root,10);
        insertNode(&root,1);
        insertNode(&root,3);
        insertNode(&root,12);
        insertNode(&root,2);

        printInorder(root);
return 0;

}
