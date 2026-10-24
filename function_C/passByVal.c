#include<stdio.h>

void addTen(int x) {
  x = x + 10;
}

int main() {
  int myNum = 5;
  addTen(myNum);
  printf("%d\n", myNum); // 5
  return 0;
}