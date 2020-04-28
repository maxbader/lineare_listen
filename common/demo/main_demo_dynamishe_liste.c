#include <stdio.h>
#include <stdlib.h>
#include <freund/freund.h>


int main(int argc, char **argv) {
    struct Freund *head = NULL;
    head = read("../names.txt");
    print(head);
    return 0;
}
