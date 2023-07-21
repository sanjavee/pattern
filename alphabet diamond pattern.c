#include <stdio.h>

int main() {
  int size;
  scanf("%d",&size);
  int alpha = 65;
  int num = 0;

  for (int i = 1; i <= size; i++) {

    for (int j = size; j > i; j--) {
      printf(" ");
    }

    for (int k = 0; k < i*2-1; k++) {
      printf("%c", alpha + num++);
    }

    num = 0;
    printf("\n");
  }

  for (int i = 1; i <= size-1; i++) {

    for (int j = 0; j < i; j++) {
      printf(" ");
    }

    for (int k = (size-i)*2-1; k > 0; k--) {
      printf("%c", alpha + num++);
    }

    num = 0;
    printf("\n");
  }
  return 0;
}
