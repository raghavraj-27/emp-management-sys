// #include "../employee.h"
#include <stdio.h>

void removeEmployee(int ind, int sz, struct Employee emp[]) {
  int i = ind;
  // struct Employee empToBeRemoved = emp[i];
  for (; i < sz - 1; i++) {
    emp[i] = emp[i + 1];
  }
}