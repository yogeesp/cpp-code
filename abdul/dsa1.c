#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

struct node* newNode(int data){

  struct node* node = (struct node*)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return(node);
}

void printPostorder(struct node* node){

  if (node==NULL){
    return;
  }

  printPostorder(node->left);
  printPostorder(node->right);

  printf("%d\n", node->data);
}

void printInorder(struct node* node){
  if(node == NULL){
    return;
  }

  printInorder(node->left);
  printf("%d\n", node->data );
  printInorder(node->right);
}

void printPreorder(struct node* node){
  if (node == NULL){
    return;
  }

  printf("%d\n", node->data);

  printPreorder(node->left);

  printPreorder(node->right);

}

void iterativeInorder(struct node* node){
  struct node* save[100];
  int top = 0;

  while(node != NULL){
    while(node != NULL){
      if (node->right != NULL){
        save[top++] = node->right;
      }
      save[top++] = node;
      node = node->left;
    }
    node = save[--top];
    while(top != 0 && node->right == NULL){
      printf("%d\n", node->data);
      node = save[--top];
  }

  printf("%d\n", node->data);
  node = (top != 0) ? save[--top] : (struct node*) NULL;


  }
}

int main(){

  struct node* root = newNode(1);

  root->left = newNode(2);
  root->right = newNode(3);

  root->left->left = newNode(4);
  root->left->right= newNode(5);

  int choice;

  iterativeInorder(root);

  while(1){
    printf("1. Pre Order Traversal\n");
    printf("2. In Order Traversal\n");
    printf("3. Post Order Traversal\n");
    printf("4. Quit\n");

    printf("\nEnter the choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
        printf("Pre Order Traversal\n");
        printPreorder(root);
        break;
      case 2:
        printf("In Order Traversal\n");
        printInorder(root);
        break;
      case 3:
        printf("Post Order Traversal\n");
        printPostorder(root);
        break;
      case 4:
        exit(1);
      default:
        printf("Wrong Choice\n");
    }

  }

  getchar();
  return 0;
}
