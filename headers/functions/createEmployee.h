#include "../employee.h"
#include "../utility.h"
#include "../validations.h"
#include <stdio.h>

char dump;

void createEmployee(int *ind, struct Employee emp[]) {
  int id;
  char *fname, *lname, *oname, *aadharNo, *panNo, *nation;
  double CTC, basicSalary;
  int dd, mm, yy;

  printf("\nEnter new EMP Id: ");
  scanf("%d", &id);
  scanf("%c", &dump);

repeatFName:
  printf("Enter First Name: ");
  fname = readStringFromUser();
  if (validateNameAndNatioanlity(fname, strlen(fname)) == 0) {
    printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
    goto repeatFName;
  }

repeatLName:
  printf("Enter Last Name: ");
  lname = readStringFromUser();
  if (validateNameAndNatioanlity(lname, strlen(lname)) == 0) {
    printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
    goto repeatLName;
  }

repeatOName:
  printf("Enter Nick Name: ");
  oname = readStringFromUser();
  if (validateNameAndNatioanlity(oname, strlen(oname)) == 0) {
    printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
    goto repeatOName;
  }

repeatAadhar:
  printf("Enter Aadhar No.: ");
  aadharNo = readStringFromUser();
  if (validateAadhar(aadharNo, strlen(aadharNo)) == 0) {
    printf("\n* Invalid Aadhar No.! Aadhar No. must have 12 digits *\n\n");
    goto repeatAadhar;
  }

repeatPan:
  printf("Enter PAN No.: ");
  panNo = readStringFromUser();
  if (validatePan(panNo, strlen(panNo)) == 0) {
    printf("\n* Invalid Pan No.! Pan No. format is ABCDE1234Z *\n\n");
    goto repeatPan;
  }

repeatNation:
  printf("Enter Nation: ");
  nation = readStringFromUser();
  if (validateNameAndNatioanlity(nation, strlen(nation)) == 0) {
    printf("\n* Invalid Nationality *\n\n");
    goto repeatNation;
  }

  printf("Enter CTC: ");
  scanf("%lf", &CTC);
  printf("Enter Basic Pay: ");
  scanf("%lf", &basicSalary);

  printf("Enter Date of Joining [DD MM YYYY]: ");
  scanf("%d%d%d", &dd, &mm, &yy);

  emp[*ind].empId = id;
  strcpy(emp[*ind].empName.firstName, fname);
  strcpy(emp[*ind].empName.lastName, lname);
  strcpy(emp[*ind].empName.otherName, oname);
  emp[*ind].empCompensation.ctc = CTC;
  emp[*ind].empCompensation.basicPay = basicSalary;
  strcpy(emp[*ind].empIdInfo.aadharNumber, aadharNo);
  strcpy(emp[*ind].empIdInfo.panNumber, panNo);
  strcpy(emp[*ind].empIdInfo.nationality, nation);
  emp[*ind].dateOfJoining.dd = dd;
  emp[*ind].dateOfJoining.mm = mm;
  emp[*ind].dateOfJoining.yy = yy;

  *ind = *ind + 1;

  printf("\n\n ** Employee Created Succfully ** \n\n");
}