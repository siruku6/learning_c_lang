#include <stdio.h>
#include <math.h>

void multiplier(void) {
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      printf("\t %d", i * j);
    }
    printf("\n");
  }
}


void is_prime_number(int x) {
  printf("%d\n", x);
  if (x % 2 == 0) {
    printf(" is not prime number\n");
    return;
  }

  double last = sqrt(x);
  int num = 3;

  while(num < x) {
    printf("x / %d のあまりは %d\n", num, x % num);
    if (x % num == 0) {
      printf(" is not prime number\n");
      break;
    }

    num += 2;
    if ((int)last < num) {
      printf(" is prime number !\n");
      break;
    }
  }
}


int main(void) {
  multiplier();

  printf("数字を入力してね");
  int x;
  scanf("%d", &x);
  is_prime_number(x);

  return 0;
}
