#include <iostream>
#include <string>

using namespace std;


int main()
{
		system("color f");
		cout << "\nIP Address Generator v1.3 by Dylan Armstrong 2020\n# ";
		string main_input;
		cin >> main_input;
	if (main_input == "ipv4-public")
	{
		cout << "How many " << main_input << " addresses? ";
		int input;
		cin >> input;
		for (int x = 1; x <= input; x++) {
			int public1 = rand() % 255 + 1;
			int public2 = rand() % 255 + 1;
			int public3 = rand() % 255 + 1;
			int public4 = rand() % 255 + 1;

			if ((public1 == 10) || (public1 == 172 && (public2 < 31 && public2 > 16)) || (public1 == 192 && public2 == 168))
			{
				public1 = rand() % 255 + 1;
				public2 = rand() % 255 + 1;
			}
			cout << "\n" << dec << public1;
			cout << ".";
			cout << dec << public2;
			cout << ".";
			cout << dec << public3;
			cout << ".";
			cout << dec << public4;
		}
		main();
	}
	if (main_input == "ipv4-private")
	{
		cout << "How many " << main_input << " addresses? ";
		int input;
		cin >> input;
		for (int x = 1; x <= input; x++) {
			int private1 = rand() % 3 + 1;
			int private2;
			int private3 = rand() % 255 + 1;
			int private4 = rand() % 255 + 1;

			if (private1 == 1)
			{
				private1 = 10;
				private2 = rand() % 255 + 1;
			}
			if (private1 == 2)
			{
				private1 = 172;
				private2 = rand() % (31 - 16 + 1) + 16;
			}
			if (private1 == 3)
			{
				private1 = 192;
				private2 = 168;
			}
			cout << "\n" << dec << private1;
			cout << ".";
			cout << dec << private2;
			cout << ".";
			cout << dec << private3;
			cout << ".";
			cout << dec << private4;
		}
		main();
	}
	if (main_input == "ipv6-global")
	{
		cout << "How many " << main_input << " addresses? ";
		int input;
		cin >> input;
		for (int x = 1; x <= input; x++)
		{
			int hex1 = rand() % 2 + 2;
			int hex2 = rand() % 15 + 0;
			int hex3 = rand() % 15 + 0;
			int hex4 = rand() % 15 + 0;
			int hex5 = rand() % 15 + 0;
			int hex6 = rand() % 15 + 0;
			int hex7 = rand() % 15 + 0;
			int hex8 = rand() % 15 + 0;
			int hex9 = rand() % 15 + 0;
			int hex10 = rand() % 15 + 0;
			int hex11 = rand() % 15 + 0;
			int hex12 = rand() % 15 + 0;
			int hex13 = rand() % 15 + 0;
			int hex14 = rand() % 15 + 0;
			int hex15 = rand() % 15 + 0;
			int hex16 = rand() % 15 + 0;
			int hex17 = rand() % 15 + 0;
			int hex18 = rand() % 15 + 0;
			int hex19 = rand() % 15 + 0;
			int hex20 = rand() % 15 + 0;
			int hex21 = rand() % 15 + 0;
			int hex22 = rand() % 15 + 0;
			int hex23 = rand() % 15 + 0;
			int hex24 = rand() % 15 + 0;
			int hex25 = rand() % 15 + 0;
			int hex26 = rand() % 15 + 0;
			int hex27 = rand() % 15 + 0;
			int hex28 = rand() % 15 + 0;
			int hex29 = rand() % 15 + 0;
			int hex30 = rand() % 15 + 0;
			int hex31 = rand() % 15 + 0;
			int hex32 = rand() % 15 + 0;

			cout << hex << hex1 << hex2 << hex3 << hex4;
			cout << ":";
			cout << hex << hex5 << hex6 << hex7 << hex8;
			cout << ":";
			cout << hex << hex9 << hex10 << hex11 << hex12;
			cout << ":";
			cout << hex << hex13 << hex14 << hex15 << hex16;
			cout << ":";
			cout << hex << hex17 << hex18 << hex19 << hex20;
			cout << ":";
			cout << hex << hex21 << hex22 << hex23 << hex24;
			cout << ":";
			cout << hex << hex25 << hex26 << hex27 << hex28;
			cout << ":";
			cout << hex << hex29 << hex30 << hex31 << hex32;
			cout << "\n";
		}
		main();
	}
	if (main_input == "ipv6-link-local")
	{
		cout << "How many " << main_input << " addresses? ";
		int input;
		cin >> input;
		for (int x = 1; x <= input; x++)
		{
			int hex1 = 15;
			int hex2 = 14;
			int hex3 = rand() % (11 - 8 + 1) + 8;
			int hex4 = rand() % 15 + 0;
			int hex5 = rand() % 15 + 0;
			int hex6 = rand() % 15 + 0;
			int hex7 = rand() % 15 + 0;
			int hex8 = rand() % 15 + 0;
			int hex9 = rand() % 15 + 0;
			int hex10 = rand() % 15 + 0;
			int hex11 = rand() % 15 + 0;
			int hex12 = rand() % 15 + 0;
			int hex13 = rand() % 15 + 0;
			int hex14 = rand() % 15 + 0;
			int hex15 = rand() % 15 + 0;
			int hex16 = rand() % 15 + 0;
			int hex17 = rand() % 15 + 0;
			int hex18 = rand() % 15 + 0;
			int hex19 = rand() % 15 + 0;
			int hex20 = rand() % 15 + 0;
			int hex21 = rand() % 15 + 0;
			int hex22 = rand() % 15 + 0;
			int hex23 = rand() % 15 + 0;
			int hex24 = rand() % 15 + 0;
			int hex25 = rand() % 15 + 0;
			int hex26 = rand() % 15 + 0;
			int hex27 = rand() % 15 + 0;
			int hex28 = rand() % 15 + 0;
			int hex29 = rand() % 15 + 0;
			int hex30 = rand() % 15 + 0;
			int hex31 = rand() % 15 + 0;
			int hex32 = rand() % 15 + 0;

			cout << hex << hex1 << hex2 << hex3 << hex4;
			cout << ":";
			cout << hex << hex5 << hex6 << hex7 << hex8;
			cout << ":";
			cout << hex << hex9 << hex10 << hex11 << hex12;
			cout << ":";
			cout << hex << hex13 << hex14 << hex15 << hex16;
			cout << ":";
			cout << hex << hex17 << hex18 << hex19 << hex20;
			cout << ":";
			cout << hex << hex21 << hex22 << hex23 << hex24;
			cout << ":";
			cout << hex << hex25 << hex26 << hex27 << hex28;
			cout << ":";
			cout << hex << hex29 << hex30 << hex31 << hex32;
			cout << "\n";

		}
		main();
	}
	if (main_input == "view-subnet-masks")
	{
		cout << "255.255.255.0 /24\n";
		cout << "255.255.255.128 /25\n";
		cout << "255.255.255.192 /26\n";
		cout << "255.255.255.224 /27\n";
		cout << "255.255.255.240 /28\n";
		cout << "255.255.255.248 /29\n";
		cout << "255.255.255.252 /30\n";
		main();
	}
}