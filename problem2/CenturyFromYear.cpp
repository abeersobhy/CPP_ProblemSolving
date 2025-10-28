/*
 * The first century spans from the year 1 up to and including the year 100,
 * the second century - from the year 101 up to and including the year 200, etc.

    Task:
    Given a year, return the century it is in.
 */

#include <iostream>
int centuryFromYear(int year);

int main() {
  int n = 0;
  std ::cin >> n;
  std ::cout << centuryFromYear(n) << std ::endl;
}
int centuryFromYear(int year) {
  int numOfCentury = 0;

  while ((year / 100) != 0) {
    year -= 100;
    numOfCentury++;
  }
  if (year == 0) {
    return numOfCentury;
  } else {
    return numOfCentury + 1;
  }
}