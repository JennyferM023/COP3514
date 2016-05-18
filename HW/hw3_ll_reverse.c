#include <stdio.h>
#include <stdlib.h>

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


list_t reverse(list_t list) {
    node_t* current = list.head;
    node_t* previous = 0;
    while(current) {
    	node_t* next = current->next;
    	current->next = previous;
    	previous = current;
    	current = next;
    }
    list.head = previous;
    return list;
}


void printCharList(list_t list) {
    node_t* current = list.head;
    while(current->next != NULL) {
	printf("%c", current->value);
	current = current->next;
    }
    printf("%c", current->value);
}

// test program that reverses char list
int main() {
    node_t a = {'d', NULL};
    node_t b = {'e', NULL};
    node_t c = {'c', NULL};
    node_t d = {'a', NULL};
    node_t e = {'l', NULL};
    list_t list = {&a};
    append(&b, list);
    append(&c, list);
    append(&d, list);
    append(&e, list);

    printCharList(list);
    printf("\n");
    list_t new_list = reverse(list);
    printCharList(new_list);
    printf("\n");

    return 0;
}
