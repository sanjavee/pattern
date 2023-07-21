#include <stdio.h>

int main() {
  int size;
  scanf("%d",&size);
  for (int i = 0; i < size; i++) {

    for (int j = 0; j < i; j++) {
      printf(" ");
    }

    for (int k = 0; k < (size-i)*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }

  for (int i = 2; i <= size; i++) {

    for (int j = size; j > i; j--) {
      printf(" ");
    }

    for (int k = 0; k < i*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
