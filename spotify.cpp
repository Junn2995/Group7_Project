#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

void showMainMenu()
{
    cout << "\n==================================================\n";
    cout << "           SPOTIFY MUSIC RECOMMENDATION\n";
    cout << "                    ASSISTANT\n";
    cout << "==================================================\n";
    cout << "1. Get Music Recommendation\n";
    cout << "2. Browse Available Genres\n";
    cout << "3. View Program Information\n";
    cout << "4. Exit\n";
    cout << "==================================================\n";
    cout << "Enter your choice: ";
}

void showGenres()
{
    cout << "\n---------------- AVAILABLE GENRES ----------------\n";
    cout << "1. Pop\n";
    cout << "2. Rock\n";
    cout << "3. Hip-Hop\n";
    cout << "4. R&B\n";
    cout << "5. K-Pop\n";
    cout << "--------------------------------------------------\n";
}

void showMoods()
{
    cout << "\n---------------- SELECT YOUR MOOD ----------------\n";
    cout << "1. Happy\n";
    cout << "2. Relaxed\n";
    cout << "3. Energetic\n";
    cout << "4. Sad\n";
    cout << "--------------------------------------------------\n";
}

void showDurations()
{
    cout << "\n-------------- PLAYLIST DURATION ----------------\n";
    cout << "1. Short  - Less than 30 minutes\n";
    cout << "2. Medium - 30 to 60 minutes\n";
    cout << "3. Long   - More than 60 minutes\n";
    cout << "--------------------------------------------------\n";
}

int main()
{
    int menuChoice;

    cout << "\nWelcome to the Spotify Music Recommendation Assistant!\n";

    do
    {
        showMainMenu();

        cin >> menuChoice;

        switch (menuChoice)
        {
            case 1:
                showGenres();

                cout << "\n";
                showMoods();

                cout << "\n";
                showDurations();

                break;

            case 2:
                showGenres();
                break;

            case 3:
                cout << "\nProgram Information selected.\n";
                break;

            case 4:
                cout << "\nThank you for using the Spotify Music Recommendation Assistant!\n";
                cout << "Goodbye!\n";
                break;
        }

    } while (menuChoice != 4);

    return 0;
}