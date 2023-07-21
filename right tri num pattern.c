#include <stdio.h>

int main() {

  int size;
  scanf("%d",&size);

  for (int i = 0; i < size; i++) {

    for (int j = 1; j < size-i; j++) {
      printf(" ");
    }

    for (int k = 0; k <= i; k++) {
      printf("%d", (k+1));
    }
    printf("\n");
  }
  return 0;
}
