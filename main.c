#include "headers/functions/functions.h"
#include <stdio.h>

int main() {
  struct Employee employees[50];
  int ind = 0;
  printf("\n**** WELCOME TO EMPLOYEE MANAGEMENT SYSTEM ****\n");
  char choice;
  do {
    printf("\n1. Show All Employee Details");
    printf("\n2. Search Employee");
    printf("\n3. Create Employee");
    printf("\n4. Update Employee Details");
    printf("\n5. Delete/Remove Employee");
    printf("\n6. Calculate Net Pay of an Employee");
    printf("\n7. Exit");

    printf("\n\nEnter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
    case '1':
      printAllEmployee(ind, employees);
      break;
    case '2':
      searchEmployee(&ind, employees, "print");
      break;
    case '3':
      createEmployee(&ind, employees);
      break;
    case '4':
      searchEmployee(&ind, employees, "update");
      break;
    case '5':
      searchEmployee(&ind, employees, "remove");
      break;
    case '6':
      searchEmployee(&ind, employees, "calcNetPay");
      break;
    case '7':
      printf("\n********** EXITED **********\n");
      break;
    default:
      printf("\nInvalid entry, try again\n");
    }
  } while (choice != '7');
  return 0;
}