#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int value;
    struct node *left, *right;
};

typedef struct node node;
node *root = NULL, *temp, *list;

int count = 0;
int nonleafnodes(struct node* newnode)
{
 
    if (newnode == NULL || (newnode->left == NULL && newnode->right == NULL)) {
        return 0;
    }
    count++;
    nonleafnodes(newnode->left);
    nonleafnodes(newnode->right);
    return count;
 
}

void insert(node * new , node *root)
{
    if (new->value>root->value)
    {
        if (root->right  ==  NULL)
            root->right  =  new;
        else
            insert (new, root->right);
    }
    if (new->value < root->value)
    {
        if (root->left == NULL)
            root->left = new;
        else
            insert (new, root->left);
    }
}

void main()
{
    node *new = NULL;
    int num  = 1;
 
    while (1)
    {
        scanf("%d",  &num);
        if (num == 0)
            break;
        new  =  malloc(sizeof(node));
        new->left  =  new->right  =  NULL;
        new->value  =  num;
        if (root  ==  NULL)
            root  =  new;
        else
        {
            insert(new, root);
        }
    }
    
    printf("%d",nonleafnodes(root));
    printf("\n");      
}
