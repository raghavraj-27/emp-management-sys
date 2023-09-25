#include <stdio.h>
#include <string.h>

char dump;

void updateEmployeeByEmpID(struct Employee *emp) {
  char choice1, choice2;
  do {
    printf("\n\nWhat to update ?");
    printf("\n1. Employee ID");
    printf("\n2. Name");
    printf("\n3. National ID Information");
    printf("\n4. Compensation");
    printf("\n5. Exit");

    printf("\n\nEnter choice: ");
    scanf(" %c", &choice1);
    switch (choice1) {
    case '1':
      printf("Enter new Emp ID: ");
      scanf("%d", &emp->empId);
      scanf("%c", &dump);
      printf("Updated!!");
      break;
    case '2':
      do {
        printf("\n\nWhich part of name needs to be update ?");
        printf("\n1. First Name");
        printf("\n2. Last Name");
        printf("\n3. Other Name");
        printf("\n4. Exit");

        printf("\n\nEnter choice: ");
        scanf(" %c", &choice2);
        scanf("%c", &dump);

        switch (choice2) {
        case '1':
        repeatNewFname:
          printf("\nEnter new first name: ");
          char *updatedFname = readStringFromUser();
          if(validateNameAndNatioanlity(updatedFname, strlen(updatedFname)) == 0) {
            printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
            goto repeatNewFname;
          }
          strcpy(emp->empName.firstName, updatedFname);
          printf("First name updated !!\n");
          break;
        case '2':
        repeatNewLname:
          printf("\nEnter new last name: ");
          char *updatedLname = readStringFromUser();
          if(validateNameAndNatioanlity(updatedLname, strlen(updatedLname)) == 0) {
            printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
            goto repeatNewLname;
          }
          strcpy(emp->empName.lastName, updatedLname);
          printf("Last name updated");
          break;
        case '3':
        repeatNewOname:
          printf("\nEnter new nick name: ");
          char *updatedOname = readStringFromUser();
          if(validateNameAndNatioanlity(updatedOname, strlen(updatedOname)) == 0) {
            printf("\n* Invalid Name! Name should contains only characters and spaces *\n\n");
            goto repeatNewOname;
          }
          strcpy(emp->empName.otherName, updatedOname);
          printf("Nick name updated");
          break;
        case '4':
          printf("*** Exited ***");
          break;
        default:
          printf("Please enter valid entry");
        }
      } while (choice2 != '4');
      break;
    case '3':
      do {
        printf("\n\nWhich part of national ID needs to be update ?");
        printf("\n1. Aadhar number");
        printf("\n2. Pan Number");
        printf("\n3. Nationality");
        printf("\n4. Exit");

        printf("\n\nEnter choice: ");
        scanf(" %c", &choice2);
        scanf("%c", &dump);

        switch (choice2) {
        case '1':
        repeatNewAadhar:
          printf("\nEnter new Aadhar No.: ");
          char *updatedAdhaarNo = readStringFromUser();
          if(validateAadhar(updatedAdhaarNo, strlen(updatedAdhaarNo)) == 0) {
            printf("\n* Invalid Aadhar No.! Aadhar No. must have 12 digits *\n\n");
            goto repeatNewAadhar;
          }
          strcpy(emp->empIdInfo.aadharNumber, updatedAdhaarNo);
          printf("Aadhar number updated");
          break;
        case '2':
        repeatNewPan:
          printf("\nEnter new Pan No.: ");
          char *updatedPanNo = readStringFromUser();
          if(validatePan(updatedPanNo, strlen(updatedPanNo)) == 0) {
            printf("\n* Invalid Pan No.! Pan No. format is ABCDE1234Z *\n\n");
            goto repeatNewPan;
          }
          strcpy(emp->empIdInfo.panNumber, updatedPanNo);
          printf("Pan number updated");
          break;
        case '3':
        repeatNewNation:
          printf("\nEnter new Nationality: ");
          char *updatedNationality = readStringFromUser();
          if (validateNameAndNatioanlity(updatedNationality, strlen(updatedNationality)) == 0) {
            printf("\n* Invalid Nationality *\n\n");
            goto repeatNewNation;
          }
          strcpy(emp->empIdInfo.nationality, updatedNationality);
          printf("Nationality updated");
          break;
        case '4':
          printf("*** Exited ***");
          break;
        default:
          printf("Please enter valid entry");
        }
      } while (choice2 != '4');
      break;
    case '4':
      printf("Enter new CTC: ");
      scanf("%lf", &emp->empCompensation.ctc);
      printf("Enter new basic pay: ");
      scanf("%lf", &emp->empCompensation.basicPay);
      scanf("%c", &dump);

      printf("Compensation updated!");
      break;
    case '5':
      printf("\n***** EXITED *****\n");
      break;
    default:
      printf("Invalid entry, try again");
    }
  } while (choice1 != '5');
}