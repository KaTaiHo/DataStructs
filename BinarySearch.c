#include <stdlib.h>
#include <stdio.h>
#define true 1
#define false 0


typedef struct node
{
	int n;
	struct node* right;
	struct node* left;
}
node;


int search (int n, node* tree)
{
	if (*tree == NULL)
	{
		return false;
	}
	else if (n < tree->n)
	{
		return search(n, tree->left);
	}
	else if (n > tree->n)
	{
		return search(n, tree->right);
	}
	else // n == tree->n
	{
		return true;
	}
}