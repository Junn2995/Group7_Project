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

// Structure to store playlist information
struct Playlist
{
    string name;
    string genre;
    string mood;
    string duration;
    string description;
};

string getGenreName(int genreChoice)
{
    switch (genreChoice)
    {
        case 1:
            return "Pop";

        case 2:
            return "Rock";

        case 3:
            return "Hip-Hop";

        case 4:
            return "R&B";

        case 5:
            return "K-Pop";

        default:
            return "Unknown";
    }
}
string getMoodName(int moodChoice)
{
    switch (moodChoice)
    {
        case 1:
            return "Happy";

        case 2:
            return "Relaxed";

        case 3:
            return "Energetic";

        case 4:
            return "Sad";

        default:
            return "Unknown";
    }
}

string getDurationName(int durationChoice)
{
    switch (durationChoice)
    {
        case 1:
            return "Short";

        case 2:
            return "Medium";

        case 3:
            return "Long";

        default:
            return "Unknown";
    }
}

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

void displayRecommendation(const Playlist& playlist)
{
    cout << "\n==================================================\n";
    cout << "              YOUR RECOMMENDATION\n";
    cout << "==================================================\n";

    cout << "Playlist : " << playlist.name << endl;
    cout << "Genre    : " << playlist.genre << endl;
    cout << "Mood     : " << playlist.mood << endl;
    cout << "Duration : " << playlist.duration << endl;

    cout << "\nWhy this playlist?\n";
    cout << playlist.description << endl;

    cout << "\nThis recommendation is generated based on "
         << "your selected preferences.\n";

    cout << "==================================================\n";
}

void getRecommendation()
{
    int genreChoice;
    int moodChoice;
    int durationChoice;

    cout << "\n==================================================\n";
    cout << "             MUSIC RECOMMENDATION\n";
    cout << "==================================================\n";

    showGenres();
    cout << "Enter your genre choice: ";
    genreChoice = getValidChoice(1, 5);

    showMoods();
    cout << "Enter your mood choice: ";
    moodChoice = getValidChoice(1, 4);

    showDurations();
    cout << "Enter your preferred duration: ";
    durationChoice = getValidChoice(1, 3);

    cout << "\nGenerating your personalised recommendation...\n";

    Playlist recommendation =
        generateRecommendation(
            genreChoice,
            moodChoice,
            durationChoice
        );

    displayRecommendation(recommendation);
}

void showProgramInformation()
{
    cout << "\n==================================================\n";
    cout << "              PROGRAM INFORMATION\n";
    cout << "==================================================\n";

    cout << "Program Name:\n";
    cout << "Spotify Music Recommendation Assistant\n\n";

    cout << "Purpose:\n";
    cout << "This C++ program demonstrates a simple music\n";
    cout << "recommendation system inspired by Spotify's\n";
    cout << "personalised music discovery concept.\n\n";

    cout << "Users select their preferred genre, mood and\n";
    cout << "playlist duration. The program then generates\n";
    cout << "a suitable playlist recommendation.\n";

    cout << "\nImportant:\n";
    cout << "This is an educational C++ prototype and is not\n";
    cout << "connected to the actual Spotify platform.\n";

    cout << "==================================================\n";
}

int main()
{
    int menuChoice;

    cout << "\nWelcome to the Spotify Music Recommendation Assistant!\n";

    do
    {
        showMainMenu();

        menuChoice = getValidChoice(1, 4);

        switch (menuChoice)
        {
            case 1:
                getRecommendation();
                break;


            case 2:
                showGenres();
                break;

            case 3:
                showProgramInformation();
                break;

            case 4:
                cout << "\nThank you for using the Spotify Music Recommendation Assistant!\n";
                cout << "Goodbye!\n";
                break;
        }

    } while (menuChoice != 4);

    return 0;
}