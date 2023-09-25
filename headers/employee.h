#include <stdio.h>
struct Date {
  int dd, mm, yy;
};

struct Name {
  char firstName[50];
  char lastName[50];
  char otherName[50];
};

struct NationalIdInfo {
  char aadharNumber[50];
  char panNumber[50];
  char nationality[50];
};

struct Compensation {
  double ctc;
  double basicPay;
};

struct Employee {
  int empId;
  struct Name empName;
  struct NationalIdInfo empIdInfo;
  struct Compensation empCompensation;
  struct Date dateOfJoining;
};
void printAllEmployee(int sz, struct Employee emp[]);
void searchEmployee(int *sz, struct Employee emp[], char operation[20]);
void printEmployeeByEmpID(struct Employee *emp);
void createEmployee(int *ind, struct Employee emp[]);
void removeEmployee(int ind, int sz, struct Employee emp[]);
void updateEmployeeByEmpID(struct Employee *emp);
void calculateNetPay(struct Employee *emp);