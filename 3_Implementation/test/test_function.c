/**
 * @file test_function.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "feature.h"
#include "math.h"

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

    // Writing to the file
	fwrite(&u1, sizeof(u1),
		1, fp);

	// Closing file
	fclose(fp);

	// Calling another function
	// after successful creation
	// of account
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

	// Opening file of
	// user data
	fp = fopen("username.txt", "rb");

	if (fp == NULL) {
		printf("ERROR IN OPENING FILE");
	}
	printf("\n\n=============== ACCOUNT LOGIN =============== ");
	printf("\n\n**********************************************");
	printf("\n\nLOG IN......");

	// Take input
	printf("\n\nUSERNAME: ");
	scanf("%s", &username);
	printf("\n\nPASSWORD: ");

	// Input the password
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

	// Checking if username
	// exists in the file or not
	while (fread(&u1, sizeof(u1),
				1, fp)) {
		if (strcmp(username,
				u1.username)
			== 0) {
			loginsu();
			display(username);
		}
	}

	// Closing the file
	fclose(fp);
}











