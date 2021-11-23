/**
 * @file feature.h
 * @author Kavin Vignes
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef FEATURE_H_
#define FEATURE_H_

/**
 * @brief (Declaring all the functions)
 * 
 */
void checkbalance(char*);
void transfermoney(void);
void display(char*);
void person(char*);
void login(void);
void loginsu(void);
void account(void);
void accountcreated(void);
void afterlogin(void);
void logout(void);
int getch(void);

/**
 * @brief (Creating a structure to store data of the user)
 * 
 */
struct pass {
	char username[50];
	int date, month, year;
	char pnumber[15];
	char adharnum[20];
	char fname[50];
	char lname[50];
	char fathname[50];
	char mothname[50];
	char address[100];
	char typeaccount[50];
};

/**
 * @brief (Structure to keep track of amount transfer)
 * 
 */
struct money {
	char usernameto[50];
	char userpersonfrom[50];
	long int money1;
};

struct userpass {
	char password[50];
};

#endif