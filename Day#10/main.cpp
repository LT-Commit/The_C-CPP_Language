#include <iostream>

// Declaring varialbes

bool MainLoop = true;
int Balance = 100;
int TempMoney;
char UserInput;

// Declaring functions

void Welcome();
void Withdraw();
void InsertMoney();

int main()
{
	while(MainLoop)
	{
		Welcome();
		std::cin >> UserInput;

		switch (UserInput)
		{
		case '1':
			std::cout << "Your balance is: " <<Balance << std::endl;
			break;
		case '2':
			Withdraw();
			break;
		case '3':
			InsertMoney();
			break;
		case '4':
			MainLoop = false;
			break;
		
		default:
			std::cout << "\nInput a valid option please\n";
			break;
		}

		

	}

	return 0;
}

void Welcome()
{
	std::cout << "\nWelcome to the ATM!\n";
	std::cout << "\n1. Check Bal\n2. Withdraw\n3. Insert Money\n4. Quit\n";
}
void Withdraw()
{
	int Umoney = 0;
	std::cout << "How much money do you want to withdraw?\n";
	std::cin >> Umoney;
	Balance = Balance - Umoney;
}
void InsertMoney()
{
	int Umoney = 0;
	std::cout << "How much money do you want to enter?\n";
	std::cin >> Umoney;
	Balance = Balance + Umoney;
}