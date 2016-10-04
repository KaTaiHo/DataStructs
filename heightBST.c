typedef struct{
	int value;
	Node* left;
	Node* right;
} Node;

int height (Node* root) {
	int a = 0;
	int b = 0;

	if (root->left) {
		a = height(root->left) + 1;
	}
	if (root->right) {
		b = height(root->right) + 1;
	}

	if (a < b) {
		return b;
	}

	return a;
}