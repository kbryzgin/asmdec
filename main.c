#include <stdlib.h>
#include <stdio.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* create_node(int data) {
    Node* node = malloc(sizeof(Node));
    if (node == NULL) {
        printf("Memory allocated error\n");
        return NULL;
    }
    
    node->data = data;
    node->next = NULL;

    return node;
}

int main() {

}
