/**
 * @file main.c
 * @author Kavin Vignes
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "feature.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * @brief (Driver Code)
 * 
 * @return int 
 */
int main()
{
	int i, a, b, choice;
	int passwordlength;

    /**
     * @brief (Creating a main menu for the user)
     * 
     */

	printf("\n\n--------------------WELCOME TO ONLINE BANKING--------------------\n\n");
	printf("*********************************************************************\n\n");
	printf("1.... CREATE A NEW BANK ACCOUNT\n\n");
	printf("2.... ALREADY A USER? SIGN IN\n\n");
	printf("3.... EXIT\n\n");
	printf("\n\nENTER YOUR CHOICE: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		system("cls");
		printf("\n\n UESERNAME 50 CHARACTERS MAX!!");
		printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
		void account();
		break;

	case 2:
		login();
		break;

	case 3:
		exit(0);
		break;

		getch();
	}
}