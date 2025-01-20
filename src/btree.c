#include "btree.h"

// creer le noeud 
TreeNode* create(int id, const char* name) {
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	if (!node) {
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}
	node->id = id;
	strcpy(node->name, name);
	node->left = NULL; 
	node->right = NULL;
	return node; 
}

// inserer
TreeNode* insert(TreeNode* root, int id, const char* name) {
	if (root == NULL) {
		return create(id, name);
	}
	if (id < root->id) {
		root->left = insert(root->left, id, name);
	} else if (id > root->id) {
		root->right = insert(root->right, id, name);
	}
	return root;
}

// rechercher avec id
TreeNode* search(TreeNode* root, int id) {
	if (root == NULL || root->id == id) {
		return root;
	}
	if (id < root->id) {
		return search(root->left, id);
	}
	return search(root->right, id);
}

	
