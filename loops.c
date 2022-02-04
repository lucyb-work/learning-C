#include <stdio.h>

int main() {

  int i = 9;
  int square = 0;

  // while loops apply the same as any other language
  while (i >= 0) {
    printf("%d\t%d\n", i, i*i);
    i--;
  }

  // do-while loops are also standard too...
  i = 11;
  do {
    printf("%d\n", i);
    i++;
  } while (i < 10);

    // for loops too...
    for (i = 20; i >=0; i--) {
    printf("%d bottles of pop on the wall.", i);
    printf("Take one down and pass it around.");
    printf("%d bottles of pop on the wall.", i-1);
  }

    // break and continue keywords are present too

}