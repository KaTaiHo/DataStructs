#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

typedef struct node
{
    int n;
    struct node * next;
} 
node;

int search (int, node*);

int main(void)
{
    int value, difference;
    node * current, * head;
    int array[30];
    int i = 0;
    current = (node *)malloc(sizeof(node));
    head = current;

    printf("Please enter node value\n");
    scanf("%d,", &value);

    while (value != -1) 
    {
        current->n = value;
        scanf("%d", &value);
        if(value == -1)
        {
            break;
        }
        current->next = malloc(sizeof(node));
        current = current->next;
    }

    current->next = NULL;
    current = head;

    while(current != NULL)
    {
        printf("%d\n", current->n);
        //array[i] = current->n;
        current = current->next;
        i = i + 1;
    }


return 0;
}

int search(int n, node* list) 
{
    node* ptr = list;
    while (ptr != NULL)
    {
        if (ptr->n == n)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}

    /*this section of code is the print the linked list backwards using an array*/
   /* current = head;
    i = i - 1;
    
    while(current != NULL){
        current->n = array[i--];
        current = current->next;
    }

    for(current = head; current != NULL; current = current->next){
        printf("%d\n", current->n);
    }*/
