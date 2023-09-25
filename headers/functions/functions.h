// #include "../employee.h"
#include "createEmployee.h"
#include "netPayEmployee.h"
#include "printEmployee.h"
#include "removeEmployee.h"
#include "searchEmployee.h"
#include "updateEmployee.h"

// char dump;

// void printAllEmployee(int sz, struct Employee emp[]) {
//   int i;
//   for (i = 0; i < sz; i++) {
//     printf("\n\nEmployee ID: %d\n", emp[i].empId);
//     printf("Employee Full Name: %s %s\n", emp[i].empName.firstName,
//            emp[i].empName.lastName);
//     printf("Employee Other Name: %s\n", emp[i].empName.otherName);
//     printf("Date of Joining: %02d/%02d/%04d\n", emp[i].dateOfJoining.dd,
//            emp[i].dateOfJoining.mm, emp[i].dateOfJoining.yy);
//     printf("Aadhar Number: %s\n", emp[i].empIdInfo.aadharNumber);
//     printf("PAN Number: %s\n", emp[i].empIdInfo.panNumber);
//     printf("Nationality: %s\n", emp[i].empIdInfo.nationality);
//     printf("CTC: %.2lf\n", emp[i].empCompensation.ctc);
//     printf("Basic Pay: %.2lf\n\n", emp[i].empCompensation.basicPay);
//   }
// }

// void calculateNetPay(struct Employee *emp) {
//   double dearnessAllowance = 0.4 * emp->empCompensation.basicPay;
//   double travellingAllowance = 0.1 * emp->empCompensation.basicPay;
//   double providentFund = 0.05 * emp->empCompensation.basicPay;

//   printf("\nEmployee ID: %d", emp->empId);
//   printf("\nEmployee Full Name: %s %s", emp->empName.firstName,
//          emp->empName.lastName);
//   printf("\nDearness Allowance: %lf", dearnessAllowance);
//   printf("\nTravelling Allowance: %lf", travellingAllowance);
//   printf("\nProvident Fund: %lf\n", providentFund);
// }

// void printEmployeeByEmpID(struct Employee *emp) {
//   printf("\n\nEmployee ID: %d\n", emp->empId);
//   printf("Employee Full Name: %s %s\n", emp->empName.firstName,
//          emp->empName.lastName);
//   printf("Employee Other Name: %s\n", emp->empName.otherName);
//   printf("Date of Joining: %02d/%02d/%04d\n", emp->dateOfJoining.dd,
//          emp->dateOfJoining.mm, emp->dateOfJoining.yy);
//   printf("Aadhar Number: %s\n", emp->empIdInfo.aadharNumber);
//   printf("PAN Number: %s\n", emp->empIdInfo.panNumber);
//   printf("Nationality: %s\n", emp->empIdInfo.nationality);
//   printf("CTC: %.2lf\n", emp->empCompensation.ctc);
//   printf("Basic Pay: %.2lf\n\n", emp->empCompensation.basicPay);
// }

// void updateEmployeeByEmpID(struct Employee *emp) {
//   char choice1, choice2;
//   do {
//     printf("\n\nWhat to update ?");
//     printf("\n1. Employee ID");
//     printf("\n2. Name");
//     printf("\n3. National ID Information");
//     printf("\n4. Compensation");
//     printf("\n5. Exit");

//     printf("\n\nEnter choice: ");
//     scanf(" %c", &choice1);
//     switch (choice1) {
//     case '1':
//       printf("Enter new Emp ID: ");
//       scanf("%d", &emp->empId);
//       scanf("%c", &dump);
//       printf("Updated!!");
//       break;
//     case '2':
//       do {
//         printf("\n\nWhich part of name needs to be update ?");
//         printf("\n1. First Name");
//         printf("\n2. Last Name");
//         printf("\n3. Other Name");
//         printf("\n4. Exit");

//         printf("\n\nEnter choice: ");
//         scanf(" %c", &choice2);
//         scanf("%c", &dump);

//         switch (choice2) {
//         case '1':
//           printf("\nEnter new first name: ");
//           char *updatedFname = readStringFromUser();
//           strcpy(emp->empName.firstName, updatedFname);
//           // fgets(emp->empName.firstName, sizeof(emp->empName.firstName),
//           // stdin);
//           printf("First name updated !!\n");
//           break;
//         case '2':
//           printf("\nEnter new last name: ");
//           char *updatedLname = readStringFromUser();
//           strcpy(emp->empName.lastName, updatedLname);
//           // fgets(emp->empName.lastName, sizeof(emp->empName.lastName),
//           stdin); printf("Last name updated"); break;
//         case '3':
//           printf("\nEnter new nick name: ");
//           char *updatedOname = readStringFromUser();
//           strcpy(emp->empName.otherName, updatedOname);
//           // fgets(emp->empName.otherName, sizeof(emp->empName.otherName),
//           // stdin);
//           printf("Nick name updated");
//           break;
//         case '4':
//           printf("*** Exited ***");
//           break;
//         default:
//           printf("Please enter valid entry");
//         }
//       } while (choice2 != '4');
//       break;
//     case '3':
//       do {
//         printf("\n\nWhich part of national ID needs to be update ?");
//         printf("\n1. Aadhar number");
//         printf("\n2. Pan Number");
//         printf("\n3. Nationality");
//         printf("\n4. Exit");

//         printf("\n\nEnter choice: ");
//         scanf(" %c", &choice2);
//         scanf("%c", &dump);

//         switch (choice2) {
//         case '1':
//           printf("\nEnter new Aadhar No.: ");
//           char *updatedAdhaarNo = readStringFromUser();
//           strcpy(emp->empIdInfo.aadharNumber, updatedAdhaarNo);
//           // fgets(emp->empIdInfo.aadharNumber,
//           // sizeof(emp->empIdInfo.aadharNumber), stdin);
//           printf("Aadhar number updated");
//           break;
//         case '2':
//           printf("\nEnter new Pan No.: ");
//           char *updatedPanNo = readStringFromUser();
//           strcpy(emp->empIdInfo.panNumber, updatedPanNo);
//           // fgets(emp->empIdInfo.panNumber,
//           sizeof(emp->empIdInfo.panNumber),
//           // stdin);
//           printf("Pan number updated");
//           break;
//         case '3':
//           printf("\nEnter new Nationality: ");
//           char *updatedNationality = readStringFromUser();
//           strcpy(emp->empIdInfo.nationality, updatedNationality);
//           // fgets(emp->empIdInfo.nationality,
//           // sizeof(emp->empIdInfo.nationality), stdin);
//           printf("Nationality updated");
//           break;
//         case '4':
//           printf("*** Exited ***");
//           break;
//         default:
//           printf("Please enter valid entry");
//         }
//       } while (choice2 != '4');
//       break;
//     case '4':
//       printf("Enter new CTC: ");
//       scanf("%lf", &emp->empCompensation.ctc);
//       printf("Enter new basic pay: ");
//       scanf("%lf", &emp->empCompensation.basicPay);
//       scanf("%c", &dump);

//       printf("Compensation updated!");
//       break;
//     case '5':
//       printf("\n***** EXITED *****\n");
//       break;
//     default:
//       printf("Invalid entry, try again");
//     }
//   } while (choice1 != '5');
// }

// void removeEmployee(int ind, int sz, struct Employee emp[]) {
//   int i = ind;
//   struct Employee empToBeRemoved = emp[i];
//   for (; i < sz - 1; i++) {
//     emp[i] = emp[i + 1];
//   }
// }

// void searchEmployee(int *sz, struct Employee emp[], char operation[20]) {
//   int id, i, found = 0;
//   printf("Enter Emp ID: ");
//   scanf("%d", &id);

//   for (i = 0; i < *sz; i++) {
//     if (emp[i].empId == id) {
//       if (strcmp(operation, "print") == 0) {
//         printEmployeeByEmpID(&emp[i]);
//       } else if (strcmp(operation, "update") == 0) {
//         updateEmployeeByEmpID(&emp[i]);
//       } else if (strcmp(operation, "remove") == 0) {
//         removeEmployee(i, *sz, emp);
//         *sz = *sz - 1;
//         printf("\n*** Removed Successfully! ***\n");
//       } else if (strcmp(operation, "calcNetPay") == 0) {
//         calculateNetPay(&emp[i]);
//       }
//       found = 1;
//       break;
//     }
//   }

//   if (found == 0) {
//     printf("\nEmployee with Employee ID: %d does not exist!\n", id);
//   }
// }

// void createEmployee(int *ind, struct Employee emp[]) {
//   int id;
//   char *fname, *lname, *oname, *aadharNo, *panNo, *nation;
//   double CTC, basicSalary;
//   int dd, mm, yy;

//   printf("\nEnter new EMP Id: ");
//   scanf("%d", &id);
//   scanf("%c", &dump);

// repeatFName:
//   printf("Enter First Name: ");
//   fname = readStringFromUser();
//   if (validateNameAndNatioanlity(fname, strlen(fname)) == 0) {
//     printf("\n* Invalid Name! Name should contains only characters and spaces
//     "
//            "*\n\n");
//     goto repeatFName;
//   }

// repeatLName:
//   printf("Enter Last Name: ");
//   lname = readStringFromUser();
//   if (validateNameAndNatioanlity(lname, strlen(lname)) == 0) {
//     printf("\n* Invalid Name! Name should contains only characters and spaces
//     "
//            "*\n\n");
//     goto repeatLName;
//   }

// repeatOName:
//   printf("Enter Nick Name: ");
//   oname = readStringFromUser();
//   if (validateNameAndNatioanlity(oname, strlen(oname)) == 0) {
//     printf("\n* Invalid Name! Name should contains only characters and spaces
//     "
//            "*\n\n");
//     goto repeatOName;
//   }

// repeatAadhar:
//   printf("Enter Aadhar No.: ");
//   aadharNo = readStringFromUser();
//   if (validateAadhar(aadharNo, strlen(aadharNo)) == 0) {
//     printf("\n* Invalid Aadhar No.! Aadhar No. must have 12 digits *\n\n");
//     goto repeatAadhar;
//   }

// repeatPan:
//   printf("Enter PAN No.: ");
//   panNo = readStringFromUser();
//   if (validatePan(panNo, strlen(panNo)) == 0) {
//     printf("\n* Invalid Pan No.! Pan No. format is ABCDE1234Z *\n\n");
//     goto repeatPan;
//   }

// repeatNation:
//   printf("Enter Nation: ");
//   nation = readStringFromUser();
//   if (validateNameAndNatioanlity(nation, strlen(nation)) == 0) {
//     printf("\n* Invalid Nationality *\n\n");
//     goto repeatNation;
//   }

//   printf("Enter CTC: ");
//   scanf("%lf", &CTC);
//   printf("Enter Basic Pay: ");
//   scanf("%lf", &basicSalary);

//   printf("Enter Date of Joining [DD MM YYYY]: ");
//   scanf("%d%d%d", &dd, &mm, &yy);

//   emp[*ind].empId = id;
//   strcpy(emp[*ind].empName.firstName, fname);
//   strcpy(emp[*ind].empName.lastName, lname);
//   strcpy(emp[*ind].empName.otherName, oname);
//   emp[*ind].empCompensation.ctc = CTC;
//   emp[*ind].empCompensation.basicPay = basicSalary;
//   strcpy(emp[*ind].empIdInfo.aadharNumber, aadharNo);
//   strcpy(emp[*ind].empIdInfo.panNumber, panNo);
//   strcpy(emp[*ind].empIdInfo.nationality, nation);
//   emp[*ind].dateOfJoining.dd = dd;
//   emp[*ind].dateOfJoining.mm = mm;
//   emp[*ind].dateOfJoining.yy = yy;

//   *ind = *ind + 1;
// }