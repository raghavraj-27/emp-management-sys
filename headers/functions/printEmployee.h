#include <stdio.h>

void printAllEmployee(int sz, struct Employee emp[]) {
  int i;

  if(sz == 0) {
       printf("\n** No employees exist ** \n\n");
       return;
  }

  for (i = 0; i < sz; i++) {
    printf("\n\nEmployee ID: %d\n", emp[i].empId);
    printf("Employee Full Name: %s %s\n", emp[i].empName.firstName, emp[i].empName.lastName);
    printf("Employee Other Name: %s\n", emp[i].empName.otherName);
    printf("Date of Joining: %02d/%02d/%04d\n", emp[i].dateOfJoining.dd, emp[i].dateOfJoining.mm, emp[i].dateOfJoining.yy);
    printf("Aadhar Number: %s\n", emp[i].empIdInfo.aadharNumber);
    printf("PAN Number: %s\n", emp[i].empIdInfo.panNumber);
    printf("Nationality: %s\n", emp[i].empIdInfo.nationality);
    printf("CTC: %.2lf\n", emp[i].empCompensation.ctc);
    printf("Basic Pay: %.2lf\n\n", emp[i].empCompensation.basicPay);
  }
}

void printEmployeeByEmpID(struct Employee *emp) {
  printf("\n\nEmployee ID: %d\n", emp->empId);
  printf("Employee Full Name: %s %s\n", emp->empName.firstName, emp->empName.lastName);
  printf("Employee Other Name: %s\n", emp->empName.otherName);
  printf("Date of Joining: %02d/%02d/%04d\n", emp->dateOfJoining.dd, emp->dateOfJoining.mm, emp->dateOfJoining.yy);
  printf("Aadhar Number: %s\n", emp->empIdInfo.aadharNumber);
  printf("PAN Number: %s\n", emp->empIdInfo.panNumber);
  printf("Nationality: %s\n", emp->empIdInfo.nationality);
  printf("CTC: %.2lf\n", emp->empCompensation.ctc);
  printf("Basic Pay: %.2lf\n\n", emp->empCompensation.basicPay);
}