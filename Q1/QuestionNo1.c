#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
 TypeTag type;
 union {
 int value;
 struct Node* left;
 struct {
 struct Node* left;
 struct Node* right;
 };
 };
} Node;
typedef enum TypeTag {
 ADD,
 MUL,
 SUB
} TypeTag;
Node* makeFunc(TypeTag type) {
 Node* node = (Node*)malloc(sizeof(Node));
 node->type = type;
 return node;
}
Node* makeValue(int value) {
 Node* node = (Node*)malloc(sizeof(Node));
 node->type = -1; // Value type is not defined in the provided structure
 node->value = value;
 return node;
}
int fibo(int n) {
 if (n <= 1)
 return n;
 Node** cache = (Node*)malloc((n + 1) * sizeof(Node));
 cache[0] = makeValue(0);
 cache[1] = makeValue(1);
 for (int i = 2; i <= n; i++) {
 cache[i] = makeFunc(ADD);
 cache[i]->left = cache[i - 1];
 cache[i]->right = cache[i - 2];
 }
 int result = cache[n]->value;
 for (int i = 0; i <= n; i++)
 free(cache[i]);
 free(cache);
 return result;
}
void calc(Node* node) {
 switch (node->type) {
 case ADD:
 node->value = node->left->value + node->right->value;
 break;
 case MUL:
 node->value = node->left->value * node->right->value;
 break;
 case SUB:
 node->value = node->left->value - node->right->value;
 break;
 default:
 printf("Invalid node type\n");
 return;
 }
 printf("%d : %d\n", node->type, node->value);
}
int main() {
 Node* add = (*makeFunc(ADD))(10, 6);
 Node* mul = (*makeFunc(MUL))(5, 4);
 Node* sub = (*makeFunc(SUB))(mul, add);
 Node* fiboNode = (*makeFunc(SUB))(sub, NULL);
 calc(add);
 calc(mul);
 calc(sub);
 calc(fiboNode);
 free(add);
 free(mul);
 free(sub);
 free(fiboNode);
 return 0;
}