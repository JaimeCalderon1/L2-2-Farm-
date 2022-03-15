#include <Windows.h>
#include <iostream>


using namespace std;

void clear() {
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
}

int main()
{
	bool userPickTwoVeg = false;
	
	cout << "Enter farm area in acres: \n";
	int acres;
	if (cin >> acres)
	{
		cout << "Enter farm area in acres: " << acres << '\n';
		Sleep(1500);
		clear();
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}

	cout << "Enter the number of vegetables planted (1/2)\n";
	int veggies;
	cin >> veggies;
	if (veggies == 1)
	{
		cout << "Enter the number of vegetables planted (1/2): " << veggies << '\n';
	}
	else if (veggies == 2)
	{
		cout << "Enter the number of vegetables planted (2/2): " << veggies << '\n';
		userPickTwoVeg = true;
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}

	Sleep(1500);
	clear();

	cout << "Enter the portion (as a percentage) of land used for the first vegetable:\n";
	int percentOfLandFirst;
	if (cin >> percentOfLandFirst)
	{
		cout << "Enter the portion (as a percentage) of land used for the first vegetable: " << percentOfLandFirst << "%\n";
		
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}
	Sleep(1500);
	clear();
	cout << "Enter first vegetable seed cost per acre:\n";
	int costFirstVegSeed;
	if (cin >> costFirstVegSeed)
	{
		cout << "Enter first vegetable seed cost per acre: $" << costFirstVegSeed << '\n';
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}
	Sleep(1500);
	clear();
	
	cout << "Enter first vegtable plantation cost per acre:\n";
	
	int costFirstPlantation;
	if (cin >> costFirstPlantation)
	{
		cout << "Enter first vegetable plantation cost per acre: $" << costFirstPlantation << '\n';
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}
	Sleep(1500);
	clear();

	cout << "Enter first vegetable fertilizing cost per acre:\n";
	int costFirstFertilizer;
	if (cin >> costFirstFertilizer)
	{
		cout << "Enter first vegetable fertilizing cost per acre: $" << costFirstFertilizer << '\n';

	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}
	Sleep(1500);
	clear();

	cout << "Enter first vegetable labor cost per acre:\n";
	int costFirstLabor;
	if (cin >> costFirstLabor)
	{
		cout << "Enter first vegetable labor cost per acre: $" << costFirstLabor << '\n';
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}
	Sleep(1500);
	clear();

	cout << "Enter first vegetable selling cost per acre:\n";
	int costFirstSelling;
	if (cin >> costFirstSelling)
	{
		cout << "Enter first vegetable selling cost per acre: $" << costFirstSelling << '\n';
	}
	else
	{
		cout << "Error. Numerical values only!\n";
		return EXIT_FAILURE;
	}

	// 2nd vegetable 
	
	while (userPickTwoVeg)
	{
		cout << "Enter the portion (as a percentage) of land used for the second vegetable:\n";
		int percentOfLandSecond;
		if (cin >> percentOfLandSecond)
		{
			cout << "Enter the portion (as a percentage) of land used for the second vegetable: " << percentOfLandSecond << "%\n";

		}
		else
		{
			cout << "Error. Numerical values only!\n";
			return EXIT_FAILURE;
		}

		Sleep(1500);
		clear();
		cout << "Enter second vegetable seed cose per acre:\n";
		int costSecondVegSeed;
		if (cin >> costSecondVegSeed)
		{
			cout << "Enter second vegetable seed cose per acre: $" << costSecondVegSeed << '\n';
		}
		else
		{
			cout << "Error. Numerical values only!\n";
			return EXIT_FAILURE;
		}
		Sleep(1500);
		clear();

		cout << "Enter second vegtable plantation cost per acre:\n";

		int costSecondPlantation;
		if (cin >> costSecondPlantation)
		{
			cout << "Enter second vegetable plantation cost per acre: $" << costSecondPlantation << '\n';
		}
		else
		{
			cout << "Error. Numerical values only!\n";
			return EXIT_FAILURE;
		}
		Sleep(1500);
		clear();

		cout << "Enter second vegetable fertilizing cost per acre:\n";
		int costSecondFertilizer;
		if (cin >> costSecondFertilizer)
		{
			cout << "Enter second vegetable fertilizing cost per acre: $" << costSecondFertilizer << '\n';

		}
		else
		{
			cout << "Error. Numerical values only!\n";
			return EXIT_FAILURE;
		}
		Sleep(1500);
		clear();

		cout << "Enter second vegetable labor cost per acre:\n";
		int costSecondLabor;
		if (cin >> costSecondLabor)
		{
			cout << "Enter second vegetable labor cost per acre: $" << costSecondLabor << '\n';
		}
		else
		{
			cout << "Error. Numerical values only!\n";
			return EXIT_FAILURE;
		}
		Sleep(1500);
		clear();

		cout << "Enter second vegetable selling cost per acre:\n";
		int costSecondSelling;
		if (cin >> costSecondSelling)
		{
			cout << "Enter second vegetable selling cost per acre: $" << costSecondSelling << '\n';
		}
		else
		{
			cout << "Error. Numerical values only!\n";
			return EXIT_FAILURE;
		} 
	
		Sleep(1500);
		clear();
		// summary print print out if user picks 2 veggies
		do
		{
			cout << "----Summary for 2 vegetables----\n";
			cout << "Farm area in acres: " << acres << '\n';
			cout << "Number of vegetables: 2\n";
			cout << "Portion of land being used for first vegetable: " << percentOfLandFirst << "%\n";
			cout << "First vegetable seed cost per acre: $" << costFirstVegSeed << '\n';
			cout << "First vegetable plantation cost per acre: $" << costFirstPlantation << '\n';
			cout << "First vegetable fertilizing cost per acre: $" << costFirstFertilizer << '\n';
			cout << "First vegetable labor cost per acre: $" << costFirstLabor << '\n';
			cout << "First vegetable selling cost per acre: $" << costFirstSelling << '\n';

			cout << "Portion of land being used for second vegetable: " << percentOfLandSecond << "%\n";
			cout << "Second vegetable seed cost per acre: $" << costSecondVegSeed << '\n';
			cout << "Second vegetable plantation cost per acre: $" << costSecondPlantation << '\n';
			cout << "Second vegetable fertilizing cost per acre: $" << costSecondFertilizer << '\n';
			cout << "Second vegetable labor cost per acre: $" << costSecondLabor << '\n';
			cout << "Second vegetable selling cost per acre: $" << costSecondSelling << '\n';
			
			int profitSecond = (costFirstSelling + costSecondSelling) * acres;
			int lossSecond = (costFirstVegSeed + costFirstPlantation + costFirstFertilizer + costFirstLabor
				+ costSecondVegSeed + costSecondPlantation + costSecondFertilizer + costSecondLabor) * acres;
			cout << "The total revenue is: $" << profitSecond << '\n';
			if (profitSecond > lossSecond)
			{
				cout << "Profit from farming: $" << profitSecond - lossSecond << '\n';
			}
			else
			{
				cout << "Loss from farming: $" << lossSecond - profitSecond << '\n';
			}
		} while (0);
		
		Sleep(15000);
		return EXIT_FAILURE;
	}
	Sleep(1500);
	clear();
	
	cout << "----Summary for 1 vegetable----\n";
	cout << "Farm area in acres: " << acres << '\n';
	cout << "Number of vegetables: 1\n";
	cout << "Portion of land being used for first vegetable: " << percentOfLandFirst << "%\n";
	cout << "First vegetable seed cost per acre: $" << costFirstVegSeed << '\n';
	cout << "First vegetable plantation cost per acre: $" << costFirstPlantation << '\n';
	cout << "First vegetable fertilizing cost per acre: $" << costFirstFertilizer << '\n';
	cout << "First vegetable labor cost per acre: $" << costFirstLabor << '\n';
	cout << "First vegetable selling cost per acre: $" << costFirstSelling << '\n';
	
	int profitFirst = costFirstSelling * acres;
	int lossFirst = (costFirstVegSeed + costFirstPlantation + costFirstFertilizer + costFirstLabor) * acres;
	cout << "The total revenue is: " << profitFirst << '\n';
	if (profitFirst > lossFirst)
	{
		cout << "Profit from farming: $" << profitFirst - lossFirst << '\n';
	}
	else
	{
		cout << "Loss from farming: $" << lossFirst - profitFirst << '\n';
	}

	Sleep(15000);
	return EXIT_FAILURE;
}



