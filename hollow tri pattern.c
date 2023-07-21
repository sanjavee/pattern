#include <stdio.h>

int main() {

  int size;
  scanf("%d",&size);

  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < i; j++) {

      if (i != size) {

        if (j == 0 || j == i-1) {
          printf("*");
        } else {
          printf(" ");
        }
      }

      else {
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
