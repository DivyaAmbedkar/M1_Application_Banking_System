/**
 * @file function.c
 * @author Kavin Vignes
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "stdio.h"
#include "feature.h"

/**
 * @brief (Function to create accounts of users)
 * 
 */
void account(void)
{
	char password[20];
	int passwordlength, i, seek = 0;
	char ch;
	FILE *fp, *fu;
	struct pass u1;
	struct userpass p1;

	struct userpass u2;

	/**
	 * @brief (Opening file to write data of a user)
	 * 
	 */

	fp = fopen("username.txt", "ab");

	system("cls");
	printf("\n\n**********CREATE A NEW ACCOUNT***********");

	printf("\n\nFIRST NAME: ");
	scanf("%s", &u1.fname);

	printf("\n\nLAST NAME: ");
	scanf("%s", &u1.lname);

	printf("\n\nFATHER's NAME: ");
	scanf("%s", &u1.fathname);

	printf("\n\nMOTHER's NAME: ");
	scanf("%s", &u1.mothname);

	printf("\n\nADDRESS: ");
	scanf("%s", &u1.address);

	printf("\n\nACCOUNT TYPE: ");
	scanf("%s", &u1.typeaccount);

	printf("\n\nDATE OF BIRTH.....");
    printf("\nDATE: ");
	scanf("%d", &u1.date);
	printf("\nMONTH: ");
	scanf("%d", &u1.month);
	printf("\nYEAR: ");
	scanf("%d", &u1.year);

	printf("\n\nADHAR NUMBER: ");
	scanf("%s", u1.adharnum);

	printf("\n\nPHONE NUMBER: ");
	scanf("%s", u1.pnumber);

	printf("\n\nUSERNAME: ");
	scanf("%s", &u1.username);

	printf("\n\nPASSWORD: ");

    /**
     * @brief (Taking password in the form of stars)
     * 
     */
    for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("%c", ch);
		}
		else
			break;
	}
	fwrite(&u1, sizeof(u1),
		1, fp);
	fclose(fp);
	accountcreated();
}

/**
 * @brief (Successful account creation)
 * 
 */

void accountcreated(void)
{
	int i;
	char ch;
	system("cls");
	printf("PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}
	printf("\n\nACCOUNT CREATED SUCCESSFULLY....");
	printf("\n\nPress enter to login");
	getch();
	login();
}

/**
 * @brief (Login function to check the username of the user)
 * 
 */

void login(void)
{
	system("cls");
	char username[50];
	char password[50];
	int i, j, k;
	char ch;
	FILE *fp, *fu;
	struct pass u1;
	struct userpass u2;
	fp = fopen("username.txt", "rb");
	if (fp == NULL) {
		printf("ERROR IN OPENING FILE");
	}
	printf("\n\n=============== ACCOUNT LOGIN =============== ");
	printf("\n\n**********************************************");
	printf("\n\nLOG IN......");
	printf("\n\nUSERNAME: ");
	scanf("%s", &username);
	printf("\n\nPASSWORD: ");
	for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("%c", ch);
		}

		else
			break;
	}
	while (fread(&u1, sizeof(u1),
				1, fp)) {
		if (strcmp(username,
				u1.username)
			== 0) {
			loginsu();
			display(username);
		}
	}
	fclose(fp);
}

/**
 * @brief (Redirect after successful login)
 * 
 */

void loginsu(void)
{
	int i;
	FILE* fp;
	struct pass u1;
	system("cls");
	printf("\n\nFetching account details.....");
	for (i = 0; i < 20000; i++) {
		i++;
		i--;
	}
	printf("\n\nLOGIN SUCCESSFUL....");
	printf("\n\nPress enter to continue");
	getch();
}

/**
 * @brief (Display function to show the data of the user on screen)
 * 
 * @param username1 
 */

void display(char username1[])
{
	system("cls");
	FILE* fp;
	int choice, i;
	fp = fopen("username.txt", "rb");
	struct pass u1;

	if (fp == NULL) {
		printf("\n\nerror in opening file");
	}
	while (fread(&u1, sizeof(u1),
				1, fp)) {
		if (strcmp(username1,
				u1.username)
			== 0) {
			printf("\n\nWELCOME ---------- , %s %s",
				u1.fname, u1.lname);
			printf("\n\n..................................................");
			printf("\n\n=============== YOUR ACCOUNT INFO ================");
			printf("\n\n**************************************************");
			printf("\nNAME: %s %s", u1.fname, u1.lname);
			printf("\nFATHER's NAME: %s %s", u1.fathname, u1.lname);
			printf("\nMOTHER's NAME: %s", u1.mothname);
			printf("\nADHAR CARD NUMBER: %s", u1.adharnum);
			printf("\nMOBILE NUMBER: %s", u1.pnumber);
			printf("\nDATE OF BIRTH: %d-%d-%d", u1.date, u1.month, u1.year);
			printf("\nADDRESS: %s", u1.address);
			printf("\nACCOUNT TYPE: %s", u1.typeaccount);
		}
	}
	fclose(fp);
	printf("\n\n===================== HOME ====================== ");
	printf("\n\n**************************************************");
	printf(" \n\n1....CHECK BALANCE");
	printf(" \n\n2....TRANSFER MONEY");
	printf(" \n\n3....LOG OUT");
	printf(" \n\n4....EXIT");
	printf(" \n\nENTER YOUR CHOICES..");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		checkbalance(username1);
		break;

	case 2:
		transfermoney();
		break;

	case 3:
		logout();
		login();
		break;

	case 4:
		exit(0);
		break;
	}
}

/**
 * @brief (Function to transfer money from one user to another)
 * 
 */

void transfermoney(void)
{
	int i, j;
	FILE *fm, *fp;
	struct pass u1;
	struct money m1;
	char usernamet[20];
	char usernamep[20];
	system("cls");
	fp = fopen("username.txt", "rb");
	fm = fopen("mon.txt", "ab");
	printf("---------- TRANSFER MONEY ----------");
	printf("====================================");	
	printf("\n\nFROM (your username).... ");
	scanf("%s", &usernamet);	
	printf("\n\nTO (username of person)....");
	scanf("%s", &usernamep);
	while (fread(&u1, sizeof(u1), 1, fp))
    {
		if (strcmp(usernamep,
				u1.username)
			== 0) {
			strcpy(m1.usernameto,
				u1.username);
			strcpy(m1.userpersonfrom,
				usernamet);
		}
	}
	printf("\n\nENTER THE AMOUNT TO BE TRANSFERED..");
	scanf("%d", &m1.money1);
	fwrite(&m1, sizeof(m1), 1, fm);
	printf("\n\n----------------------------------------------------------------------------------------------");
	printf("\n\n----------------------------------------------------------------------------------------------");
	printf("\n\ntransfering amount, Please wait..");
	for (i = 0; i < 70; i++) {
		for (j = 0; j < 1200000; j++) {
			j++;
			j--;
		}
		printf("*");
	}
	printf("\n\nAMOUNT SUCCESSFULLY TRANSFERED....");
	getch();
	fclose(fp);
	fclose(fm);
	display(usernamet);
}

/**
 * @brief (Function to check balance in users account)
 * 
 * @param username2 
 */

void checkbalance(char username2[])
{
	system("cls");
	FILE* fm;
	struct money m1;
	char ch;
	int i = 1, summoney = 0;
	fm = fopen("mon.txt", "rb");
	int k = 5, l = 10;
	int m = 30, n = 10;
	int u = 60, v = 10;
	printf("\n\n========== BALANCE DASHBOARD ==========");	
	printf("\n\n***************************************");	
	printf("\n\nS no: ");	
	printf("\n\nTRANSACTION ID: ");	
	printf("AMOUNT: ");
	while (fread(&m1, sizeof(m1),
				1, fm)) {
		if (strcmp(username2,
				m1.usernameto)
			== 0) {
			printf("%d", i);
			i++;
			printf("%s", m1.userpersonfrom);
			printf("%d", m1.money1);
			summoney = summoney + m1.money1;
		}
	}
	printf("\n\nTOTAL AMOUNT");
	printf("%d", summoney);
	getch();
	fclose(fm);
	display(username2);
}

/**
 * @brief (Logout function to bring user to the login screen)
 * 
 */

void logout(void)
{
	int i, j;
	system("cls");
	printf("\n\nplease wait, logging out");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 25000000; j++) {
			i++;
			i--;
		}
		printf(".");
	}
	printf("\n\nSign out successfully..\n");
	printf("\n\npress any key to continue..");
	getch();
}