#include <stdio.h>
#include <stdlib.h>
#include <freund/freund.h>


int main(int argc, char **argv) {
    struct Freund *head = NULL;
    head = add(head, "Thomas", 32);
    head = add(head, "Max", 43);
    head = add(head, "Klaus", 44);
    print(head);
	clear(head);
    return 0;
}
