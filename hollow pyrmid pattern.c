#include <stdio.h>

int main() {

  int size;
  scanf("%d",&size);
  for (int  i = 0; i < size; i++) {

    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }

    for (int k = 0; k < 2*i+1; k++) {
      if(k == 0 || k == 2*i || i == size-1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
