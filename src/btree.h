
#ifndef BTREE_H
#define BTREE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// struct pour le tree bin

typedef struct TreeNode {
	int id; 
	char name[255];
	struct TreeNode* left; 
	struct TreeNode* right;
} TreeNode;

TreeNode* create(int id, const char* name);
TreeNode* insert(TreeNode* root, int id, const char* name);
TreeNode* search(TreeNode* root, int id);

#endif


