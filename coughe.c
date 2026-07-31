#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  float price;
} Item;

int main() {

  Item menu[] = {
    {"chicken", 12.12},
    {"pizza", 8.00},
    {"pasta", 7.00},
  };
  int size = sizeof(menu) / sizeof(menu[0]);

  char response[100];
  printf("what you want\n");
  fgets(response, sizeof(response), stdin);
  printf("%s", response);

  int good = 0;
  for (int i = 0; i < size; i++) {
    printf("%s\n", menu[i].name);
    printf("%s\n", response);
    (strcmp(response, menu[i].name) == 0) ? (good = 1) : (good = 0);
  }
  printf("%d\n", good);

  return 0;
}

