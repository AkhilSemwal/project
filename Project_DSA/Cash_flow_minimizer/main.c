#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "globals.h"
#include "utils.h"
#include "user.h"
#include "group.h"
#include "expense.h"
#include "report.h"
#include "cashflow.h"
#include "file.h"
//global variables
//has to be entered more global variables     <<---------------------
int current_user_id  = -1;
int current_group_id = -1;

//declarations for menu
static void welcome_menu(void);
static void main_menu(void);
static void group_menu(void);
static void reports_menu(int group_index);
//main
int main(void) {
  // hash map to be implement <<---------------------
  printf("======================================================\n");
  printf("   SMART EXPENSE TRACKER WITH CASH FLOW MINIMIZER\n");
  printf("======================================================\n");
  welcome_menu();
  // hash table should set free and has to save all data  <<-------------
  return 0;
}

//welcome menu
static void welcome_menu(void) {
    int running = 1;
    while (running) {
        printf("\n===================== WELCOME =====================\n");
        printf(" 1. Register\n");
        printf(" 2. Login\n");
        printf(" 3. Exit\n");
        printf("====================================================\n");
        printf("Enter Choice: ");
        int choice = read_int();
        switch (choice) {
            case 1:
                register_user();
                pause_screen();
                break;
           case 2: {
                int uid = login_user();
                if (uid != -1) {
                    current_user_id = uid;
                    main_menu();
                    current_user_id = -1;
                }
                pause_screen();
                break;
            }
            case 3:
                running = 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
//main menu --> after login
static void main_menu(void) {
    int logged_in = 1;
    while (logged_in) {
        printf("\n=================== MAIN MENU ===================\n");
        // to be written login line with his/her username <<-------
        printf("--------------------------------------------------\n");
        printf("  1. Create Group\n");
        printf("  2. Join Group (via invite code)\n");
        printf("  3. View My Groups\n");
        printf("  4. Select a Group (Expenses/Settlements/Reports)\n");
        printf("  5. Update Profile\n");
        printf("  6. Change Password\n");
        printf("  7. Logout\n");
        printf("==================================================\n");
        printf("Enter Choice: ");

        int choice = read_int();
    }
}
