#include <stdio.h>
#include <stdlib.h>
#include <my_str/utils.h>
#include "freund/freund.h"

struct Freund* add(struct Freund* head, const char *name, int alter) {
    struct Freund *newFriend = malloc(sizeof(struct Freund));
	if (newFriend == NULL) return NULL;

	newFriend->name = myStrDup(name);
	newFriend->alter = alter;

    newFriend->next = head;
    head = newFriend;

    return head;
}


void print(const struct Freund* list){
	if(list == NULL) return;
    print(list->next);
    printf("%10s %3d %p %p\n", list->name, list->alter, list, list->next);
}

void clear(struct Freund* list){
	if(list == NULL) return;
    clear(list->next);
	free(list->name);
	free(list);
}

struct Freund* read(const char *filename){
    FILE *myfile_to_read = fopen(filename, "r") ;
    char name[0xFF];
    int alter;
    int n;
    struct Freund *head = NULL;
    while ((n = fscanf(myfile_to_read, "%d,%s", &alter, name)) > 0){
        printf ("%d, %s,%d\n", n, name, alter);
        head = add(head, name, alter);
    }
    return head;
};
