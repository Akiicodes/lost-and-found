#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"
#include "utils.h"

static struct Item items[MAX_ITEMS];
static int nextId = 1;

void report_item() {
    int pos = -1;

    for (int i = 0; i < MAX_ITEMS; i++)
        if (!items[i].present) { pos = i; break; }

    if (pos == -1) {
        printf("Storage full.\n");
        return;
    }

    read_line("Enter name: ", items[pos].name, STR_LEN);
    read_line("Enter colour: ", items[pos].color, STR_LEN);
    read_line("Enter type: ", items[pos].type, STR_LEN);

    items[pos].id = nextId++;
    items[pos].present = 1;

    printf("Item saved with ID %d\n", items[pos].id);
}

void search_item() {
    char key[STR_LEN];
    int found = 0;

    read_line("Enter name to search: ", key, STR_LEN);

    for (int i = 0; i < MAX_ITEMS; i++) {
        if (items[i].present && same_ci(items[i].name, key)) {
            printf("ID:%d Name:%s Colour:%s Type:%s\n",
                   items[i].id, items[i].name,
                   items[i].color, items[i].type);
            found = 1;
        }
    }

    if (!found) printf("No item found.\n");
}

void withdraw_item() {
    char buf[20];
    int rid, done = 0;

    read_line("Enter ID to withdraw: ", buf, sizeof(buf));
    rid = atoi(buf);

    for (int i = 0; i < MAX_ITEMS; i++) {
        if (items[i].present && items[i].id == rid) {
            items[i].present = 0;
            printf("Item withdrawn.\n");
            return;
        }
    }

    printf("No item with that ID.\n");
}

void show_items() {
    int any = 0;
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (items[i].present) {
            printf("ID:%d Name:%s Colour:%s Type:%s\n",
                   items[i].id, items[i].name,
                   items[i].color, items[i].type);
            any = 1;
        }
    }
    if (!any) printf("No items stored.\n");
}

void start_program() {
    for (int i = 0; i < MAX_ITEMS; i++) items[i].present = 0;

    while (1) {
        printf("\n--- LOST AND FOUND ---\n");
        printf("1. Report found item\n");
        printf("2. Search lost item\n");
        printf("3. Withdraw item\n");
        printf("4. Show all items\n");
        printf("5. Exit\n");

        char buf[20];
        read_line("Enter choice: ", buf, sizeof(buf));
        int choice = atoi(buf);

        switch (choice) {
            case 1: report_item(); break;
            case 2: search_item(); break;
            case 3: withdraw_item(); break;
            case 4: show_items(); break;
            case 5: printf("Exiting...\n"); return;
            default: printf("Invalid choice.\n");
        }
    }
}
