#include <iostream>

int simpleMultiplication(int num);

int main() {
  int num = 0;
  std ::cin >> num;

  std ::cout << simpleMultiplication(num) << std ::endl;
  return 0;
}

int simpleMultiplication(int num) {
  /*Even number multiplied by 8, otherwise multiplied by 9.*/
  if (num % 2 == 0) {
    return num * 8;
  } else {
    return num * 9;
  }
}