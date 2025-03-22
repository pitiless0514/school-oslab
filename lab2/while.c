#include <stdio.h>

int main(int argc, char * argv[]) {
  int i = 100000000;
  while (i>=0) {
    printf("%d\n", i);
    i--;
  }
  return 0;
}
