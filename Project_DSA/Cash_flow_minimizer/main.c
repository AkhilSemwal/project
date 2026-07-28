#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "user.h"
#include "group.h"
#include "expense.h"
#include "cashflow.h"

//declarations for menu
static void welcome_menu(void);
static void main_menu(void);
static void group_menu(void);
static void reports_menu(int group_index);

int main(void) {
  
  printf("======================================================\n");
  printf("   SMART EXPENSE TRACKER WITH CASH FLOW MINIMIZER\n");
  printf("======================================================\n");
  welcome_menu();

  return 0;
}

//welcome menu
static void welcome_menu(void) {
    while (1) {
        printf("\n===================== WELCOME =====================\n");
        printf(" 1. Register\n");
        printf(" 2. Login\n");
        printf(" 3. Exit\n");
        printf("====================================================\n");
        printf("Enter Choice: ");
}
