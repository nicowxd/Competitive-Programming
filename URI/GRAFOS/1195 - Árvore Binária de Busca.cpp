// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Árvore Binária de Busca
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1195

#include <bits/stdc++.h>

using namespace std;

struct BST {
	int value;
	struct BST *left;
	struct BST *right;
	BST(int x) : value(x), left(NULL), right(NULL) {}
};

BST* insert(BST* root, int data)
{
	if (root == NULL)
	{
		root = new BST(data);
		root->value = data;
		return root;
	}

	if (data <= root->value)
		root->left = insert(root->left, data);
	else if (data > root->value)
		root->right = insert(root->right, data);
	
	return root;
}

void preorder(BST *root)
{
	if (root != NULL)
	{
		printf(" %d", root->value);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(BST *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf(" %d", root->value);
		inorder(root->right);
	}
}

void postorder(struct BST *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf(" %d", root->value);
	}
}

int main()
{

	int c, n, x;
	scanf("%d", &c);

	for (int i = 1; i <= c; i++)
	{
		scanf("%d", &n);
		
		BST *root;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &x);
			root = insert(root, x);
		}
		printf("Case %d:\n", i);
		printf("Pre.:");
		preorder(root);
		printf("\n");
		printf("In..:");
		inorder(root);
		printf("\n");
		printf("Post:");
		postorder(root);
		printf("\n\n");
		root = NULL;
	}

	return 0;
}
