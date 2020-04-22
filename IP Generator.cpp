#include <iostream>

using namespace std;

int main()
{
    system("color f");
    cout << "\n\nPublic or Private? ";
    string input;
    cin >> input;

    if (input == "public")
    {
        for (int x = 0; x <= 2500; x++) {
            int public1 = rand() % 255 + 1;
            int public2 = rand() % 255 + 1;
            int public3 = rand() % 255 + 1;
            int public4 = rand() % 255 + 1;

            if ((public1 == 10) || (public1 == 172 && (public2 < 31 && public2 > 16)) || (public1 == 192 && public2 == 168))
            {
                cout << " - Regenerated IP - Original was Private Starting with: " << public1 << "." << public2;
                public1 = rand() % 255 + 1;
                public2 = rand() % 255 + 1;
            }
            cout << "\n" << public1 << "." << public2 << "." << public3 << "." << public4; 
        }
        main();
    }
    if (input == "private")
    {
        for (int x = 0; x <= 2500; x++) {
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
            cout << "\n" << private1 << "." << private2 << "." << private3 << "." << private4;  
        }
        main();
    }
}
