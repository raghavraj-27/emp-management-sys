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
          printf("\nEnter new first name: ");
          char *updatedFname = readStringFromUser();
          strcpy(emp->empName.firstName, updatedFname);
          printf("First name updated !!\n");
          break;
        case '2':
          printf("\nEnter new last name: ");
          char *updatedLname = readStringFromUser();
          strcpy(emp->empName.lastName, updatedLname);
          printf("Last name updated");
          break;
        case '3':
          printf("\nEnter new nick name: ");
          char *updatedOname = readStringFromUser();
          strcpy(emp->empName.otherName, updatedOname);
          // fgets(emp->empName.otherName, sizeof(emp->empName.otherName),
          // stdin);
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
          printf("\nEnter new Aadhar No.: ");
          char *updatedAdhaarNo = readStringFromUser();
          strcpy(emp->empIdInfo.aadharNumber, updatedAdhaarNo);
          // fgets(emp->empIdInfo.aadharNumber,
          // sizeof(emp->empIdInfo.aadharNumber), stdin);
          printf("Aadhar number updated");
          break;
        case '2':
          printf("\nEnter new Pan No.: ");
          char *updatedPanNo = readStringFromUser();
          strcpy(emp->empIdInfo.panNumber, updatedPanNo);
          // fgets(emp->empIdInfo.panNumber, sizeof(emp->empIdInfo.panNumber),
          // stdin);
          printf("Pan number updated");
          break;
        case '3':
          printf("\nEnter new Nationality: ");
          char *updatedNationality = readStringFromUser();
          strcpy(emp->empIdInfo.nationality, updatedNationality);
          // fgets(emp->empIdInfo.nationality,
          // sizeof(emp->empIdInfo.nationality), stdin);
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