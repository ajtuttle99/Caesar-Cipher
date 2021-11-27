#include <iostream>
#include <string>
using namespace std;

void mainPromt();
void encryptPromt(string& inputString);
string encrypt(string& stringToEncrypt, const int shiftVal);
void decryptPromt(string& inputString);
string decrypt(string& stringToDecrypt, const int shiftVal);
void bruteDecrypt(string& stringToDecrypt);

int main()
{
	cout << "Welcome to the Tali-banned Encrypter!" << endl;
	cout << "Make a selection from the menu and then follow the prompts." << endl;
	mainPromt();

	return 0;
}

void mainPromt()
{
	cout << "*************************************" << endl;
	cout << "* 1 - Encrypt a message" << endl;
	cout << "* 2 - Decrypt a message" << endl;
	cout << "* 3 - Brute - force decrypt a message" << endl;
	cout << "* 4 - Quit" << endl;
	cout << "*************************************" << endl;
	cout << "Please make a menu selection (1-4):" << endl;

	// Data
	int input;
	string stringToChange;
	int shiftValue;

	cin >> input;

	while (1)
	{
		if (input < 1 || input > 4)
		{
			cout << "Invalid choice, Please make a menu selection (1-4):" << endl;
			cin >> input;
		}
		else break;
	}
	if (input == 1)
	{
		cout << "Please enter the message to encrypt:" << endl;
		cin.ignore();
		getline(cin, stringToChange);
		cout << "Please enter the shift value (1-25):" << endl;
		encryptPromt(stringToChange);
	}

	else if (input == 2)
	{
		cout << "Please enter the message to decrypt:" << endl;
		cin.ignore();
		getline(cin, stringToChange);
		cout << "Please enter the shift value (1-25):" << endl;
		decryptPromt(stringToChange);
	}

	else if (input == 3)
	{
		cout << "Please enter the message to decrypt:" << endl;
		cin.ignore();
		getline(cin, stringToChange);
		bruteDecrypt(stringToChange);
	}
	else if (input == 4)
	{
		cout << "Thank you Caesar!  See ya!" << endl;
	}
}

void encryptPromt(string& inputString)
{
	int shiftValue;

	cin >> shiftValue;

	if (shiftValue < 1 || shiftValue > 25)
	{
		cout << "Invalid choice, Please enter the shift value (1-25):" << endl;
		encryptPromt(inputString);
		return;
	}
	else
	{
		cout << "Encrypted as: " << endl;
		cout << encrypt(inputString, shiftValue) << endl;
	}
	mainPromt();
}

string encrypt(string& stringToEncrypt, int shiftVal)
{
	
	for (int i = 0; i < stringToEncrypt.length() + 1; i++)
	{
		char myChar = stringToEncrypt[i];
		
		
		if (shiftVal > 0)
		{
			if (isupper(myChar))
			{
				myChar += shiftVal;

				if (myChar > 'Z')
					myChar -= 26;

				else if (myChar < 'A')
					myChar -= 26;
			}

			if (islower(myChar))
			{
				myChar += shiftVal;

				if (myChar > 'z')
					myChar -= 26;

				else if (myChar < 'a')
					myChar -= 26;
			}
		}

		if (shiftVal < 0)
		{
			if (isupper(myChar))
			{
				myChar += shiftVal;

				if (myChar > 'Z')
					myChar += 26;

				else if (myChar < 'A')
					myChar += 26;
			}

			if (islower(myChar))
			{
				myChar += shiftVal;

				if (myChar > 'z')
					myChar += 26;

				else if (myChar < 'a')
					myChar += 26;
			}
		}

		stringToEncrypt[i] = myChar;
	}
	return stringToEncrypt;
}

void decryptPromt(string& inputString)
{
	int shiftValue;
	cin >> shiftValue;

	if (shiftValue < 1 || shiftValue > 25)
	{
		cout << "Invalid choice, Please enter the shift value (1-25):" << endl;
		decryptPromt(inputString);
		return;
	}
	else
	{
		cout << "Decrypted as: " << endl;
		cout << decrypt(inputString, shiftValue) << endl;
	}
	mainPromt();
}

string decrypt(string& stringToDecrypt, int shiftVal)
{
	shiftVal *= -1;
	return encrypt(stringToDecrypt, shiftVal);
}

void bruteDecrypt(string& stringToDecrypt)
{
	cout << "Decrypted as:" << endl;
	for (int i = 0; i < 25; i++)
	{
		stringToDecrypt = decrypt(stringToDecrypt, 1);
		cout << stringToDecrypt << endl;
	}
	mainPromt();
}