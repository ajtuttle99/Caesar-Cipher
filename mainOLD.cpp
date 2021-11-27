#include <iostream>
#include <string>
using namespace std;

/*
void displayWelcome();
void selectionInput();
void encrypt();
void decrypt();
void bruteDecrypt();

int main()
{
	displayWelcome();

	return 0;
}


void displayWelcome()
{
	cout << "Welcome to the Tali-banned Encrypter! \nMake a selection from the menu and then follow the prompts." << endl;
	cout << "*************************************" << endl;
	cout << "* 1 - Encrypt a message" << endl;
	cout << "* 2 - Decrypt a message" << endl;
	cout << "* 3 - Brute - force decrypt a message" << endl;
	cout << "* 4 - Quit" << endl;
	cout << "*************************************" << endl;
	cout << "Please make a menu selection (1-4):" << endl;
	selectionInput();
}

void selectionInput()
{
	int input;
	cin >> input;

	if (input < 1 || input > 4)
	{
		cout << "Invalid choice, Please make a menu selection (1-4):" << endl;
		selectionInput();
		return;
	}
	else if (input == 1)
		encrypt();
	else if (input == 2)
		decrypt();
	else if (input == 3)
		bruteDecrypt();
}

void encrypt()
{
	string stringToEncrypt;
	int shiftValue;
	cout << "Please enter the message to encrypt:" << endl;
	cin.ignore();
	getline(cin, stringToEncrypt);

	while (1)
	{
		cout << "Please enter the shift value (1-25):" << endl;
		cin >> shiftValue;
		if (shiftValue < 1 || shiftValue > 25)
		{
			cin.clear();
			cout << "Invalid choice, Please enter the shift value (1-25):" << endl;
			cin >> shiftValue;
		}
		else break;
	}
	for (int i = 0; i < stringToEncrypt.length(); i ++)
	{
		char myChar = stringToEncrypt[i];
		if (isupper(myChar))
		{
			myChar += shiftValue;
			if (myChar > 'Z')
				myChar = 'A';
			if (myChar < 'A')
				myChar = 'Z';
		}

		if (islower(myChar))
		{
			myChar += shiftValue;
			if (myChar > 'z')
				myChar = 'a';
			if (myChar < 'a')
				myChar = 'z';
		}
		stringToEncrypt[i] = myChar;
	}
	cout << "Encrypted as:" << endl;
	cout << stringToEncrypt << endl;
}

void decrypt()
{
	string stringToDecrypt;
	int shiftValue;
	cout << "Please enter the message to decrypt:" << endl;
	cin.ignore();
	getline(cin, stringToDecrypt);

	while (1)
	{
		cout << "Please enter the shift value (1-25):" << endl;
		cin >> shiftValue;
		if (shiftValue < 1 || shiftValue > 25)
		{
			cin.clear();
			cin.ignore();
			cout << "Invalid choice, Please enter the shift value (1-25):" << endl;
			cin >> shiftValue;
		}
		else break;
	}
	for (int i = 0; i < stringToDecrypt.length(); i++)
	{
		char myChar = stringToDecrypt[i];
		if (isupper(myChar))
		{
			myChar -= shiftValue;
			if (myChar > 'Z')
				myChar = 'A';
			if (myChar < 'A')
				myChar = 'Z';
		}

		if (islower(myChar))
		{
			myChar-= shiftValue;
			if (myChar > 'z')
				myChar = 'a';
			if (myChar < 'a')
				myChar = 'z';
		}
		stringToDecrypt[i] = myChar;
	}
	cout << "Decrypted as:" << endl;
	cout << stringToDecrypt << endl;
}

void bruteDecrypt()
{
	string stringToDecrypt;
	int shiftValue;
	cout << "Please enter the message to decrypt:" << endl;
	cin.ignore();
	getline(cin, stringToDecrypt);

	cout << "Decrypted as:" << endl;
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < stringToDecrypt.length(); j++)
		{
			char myChar = stringToDecrypt[j];
			if (isupper(myChar))
			{
				myChar--;
				if (myChar > 'Z')
					myChar = 'A';
				if (myChar < 'A')
					myChar = 'Z';
			}

			if (islower(myChar))
			{
				myChar--;
				if (myChar > 'z')
					myChar = 'a';
				if (myChar < 'a')
					myChar = 'z';
			}
			stringToDecrypt[j] = myChar;
		}
		cout << stringToDecrypt << endl;
	}
}*/