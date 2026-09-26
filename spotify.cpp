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

int getValidChoice(int minimum, int maximum)
{
    int choice;

    while (true)
    {
        cin >> choice;

        if (cin.fail())
        {
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (choice < minimum || choice > maximum)
        {
            cout << "Invalid choice. Please enter a number from "
                 << minimum << " to " << maximum << ": ";
        }
        else
        {
            return choice;
        }
    }
}

case 1:
{
    int genreChoice;
    int moodChoice;
    int durationChoice;

    showGenres();
    cout << "Enter your genre choice: ";
    genreChoice = getValidChoice(1, 5);

    showMoods();
    cout << "Enter your mood choice: ";
    moodChoice = getValidChoice(1, 4);

    showDurations();
    cout << "Enter your preferred duration: ";
    durationChoice = getValidChoice(1, 3);

    cout << "\nYour selections have been recorded.\n";

    break;
}

struct Playlist
{
    string name;
    string genre;
    string mood;
    string duration;
    string description;
};

string getGenreName(int genreChoice)

string getMoodName(int moodChoice)

string getDurationName(int durationChoice)

Playlist generateRecommendation(
    int genreChoice,
    int moodChoice,
    int durationChoice
)
{
    string genre = getGenreName(genreChoice);
    string mood = getMoodName(moodChoice);
    string duration = getDurationName(durationChoice);

    Playlist recommendation;

    recommendation.genre = genre;
    recommendation.mood = mood;
    recommendation.duration = duration;

    // Recommendation logic
    if (genre == "Pop" && mood == "Happy")
    {
        recommendation.name = "Happy Pop Hits";
        recommendation.description =
            "An upbeat selection of popular songs designed "
            "for a positive and cheerful mood.";
    }
    else if (genre == "Pop" && mood == "Relaxed")
    {
        recommendation.name = "Chill Pop Vibes";
        recommendation.description =
            "A relaxing collection of soft and enjoyable "
            "pop tracks.";
    }
    else if (genre == "Rock" && mood == "Energetic")
    {
        recommendation.name = "Rock Energy";
        recommendation.description =
            "A high-energy rock playlist suitable for "
            "activities and motivation.";
    }
    else if (genre == "Hip-Hop" && mood == "Energetic")
    {
        recommendation.name = "Hip-Hop Power Mix";
        recommendation.description =
            "An energetic hip-hop selection with strong "
            "beats and an engaging atmosphere.";
    }
    else if (genre == "R&B" && mood == "Relaxed")
    {
        recommendation.name = "R&B Chill Session";
        recommendation.description =
            "A smooth R&B playlist designed for relaxation "
            "and a calm listening experience.";
    }
    else if (genre == "K-Pop" && mood == "Happy")
    {
        recommendation.name = "K-Pop Feel Good";
        recommendation.description =
            "A cheerful K-Pop playlist featuring energetic "
            "and uplifting music.";
    }
    else if (genre == "K-Pop" && mood == "Energetic")
    {
        recommendation.name = "K-Pop Energy Mix";
        recommendation.description =
            "A lively K-Pop playlist suitable for an "
            "energetic listening session.";
    }
    else if (mood == "Sad")
    {
        recommendation.name = genre + " Emotional Collection";
        recommendation.description =
            "A selection of emotional " + genre +
            " music suitable for a reflective mood.";
    }
    else
    {
        recommendation.name = genre + " " + mood + " Mix";
        recommendation.description =
            "A personalised " + genre +
            " playlist selected according to your "
            "preferred mood.";
    }

    return recommendation;
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