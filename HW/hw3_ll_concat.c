#include <stdio.h>

typedef struct NODE {
    char value;
    struct NODE* next;
}node_t;

typedef struct LIST {
    node_t* head;
}list_t;

node_t* end(list_t list){
    node_t* current = list.head;
    while(current->next != NULL) { current = current->next; }
    return current;
}

void append(node_t* node, list_t list) {
    node_t* a = end(list);
    a->next = node;
}

void concatenate(list_t first, list_t second) {
    append(second.head, first);
    second.head = first.head;
}

void printCharList(list_t list) {
    node_t* current = list.head;
    while(current->next != NULL) {
	printf("%c", current->value);
	current = current->next;
    }
    printf("%c", current->value);
}

// test program that concatenates two char lists
int main() {
    node_t a = {'y', NULL};
    node_t b = {'o', NULL};
    list_t list1 = {&a}; // first list
    append(&b, list1);

    node_t c = {' ', NULL};
    node_t d = {'m', NULL};
    node_t e = {'a', NULL};
    node_t f = {'n', NULL};
    list_t list2 = {&c}; //second list
    append(&d, list2);
    append(&e, list2);
    append(&f, list2);

    concatenate(list1, list2);
    printCharList(list1);
    printf("\n");

    return 0;
}
