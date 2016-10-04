typedef int Bool;
#define true 1 
#define false 0

typedef struct{
	int value;
	Node* left;
	Node* right;
	Bool visited;
} Node;

Bool isTree (Node* root) {
	Bool a = true;
	Bool b = true;

	if (root->visited == true) {
		return false;
	}

	root->visited = true;

	if (root->left) {
		a = isTree(root->left);
	}
	if (root->right) {
		b = isTree(root->right);
	}

	if (a == false || b == false) {
		return false;
	}

	return true;
}