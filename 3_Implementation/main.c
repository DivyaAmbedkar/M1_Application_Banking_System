/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */


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
		account();
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