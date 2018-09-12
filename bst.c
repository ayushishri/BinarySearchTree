#include<stdio.h>
#include<stdlib.h>

struct bstNode {
	int val;
	bstNode *l; /*left pointer*/
	bstNode *r; /*right pointer*/
} bstNode;



int add_bst(bstNode **root, int val) {
	if (root==NULL)
		return -1;
	if (*root==NULL) {
		(*root)=(bstNode*)malloc(sizeof(bstNode));
		(*root)->val=val;
		(*root)->l=NULL;
		(*root)->r=NULL;
	}
	else {
		if (((*root)->val)<val)
			add_bst(&((*root)->r),val);
		else
			add_bst(&((*root)->l),val);
	}
	return 0;
}

int inorder (bstNode (*root)) {
	if (root==NULL)
		return -1;
	inorder (&(root->l));
	printf("%d\n",(root->val));
	inorder (&(root->r));
	return 0;
}

int preorder (bstNode (*root)) {
	if (root==NULL)
		return -1;
	printf("%d\n",(root->val));
	inorder (&(root->l));
	inorder (&(root->r));
	return 0;
}

int postorder (bstNode (*root)) {
	if (root==NULL)
		return -1;
	inorder (&(root->l));
	inorder (&(root->r));
	printf("%d\n",(root->val));
	return 0;
}


int main (void) {
	int value=0;
	bstNode *bst=NULL;
	while (scanf("%d",&value)!=EOF) {
		add_bst(&bst,value)
	}

}
