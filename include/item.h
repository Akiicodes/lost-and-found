#ifndef ITEM_H
#define ITEM_H

#define MAX_ITEMS 50
#define STR_LEN 20

struct Item {
    int id;
    char name[STR_LEN];
    char color[STR_LEN];
    char type[STR_LEN];
    int present;
};

void start_program(void);

#endif
