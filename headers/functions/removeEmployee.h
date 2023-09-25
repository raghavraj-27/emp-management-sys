#include <stdio.h>

void removeEmployee(int ind, int sz, struct Employee emp[]) {
  int i = ind;
  for (; i < sz - 1; i++) {
    emp[i] = emp[i + 1];
  }
}