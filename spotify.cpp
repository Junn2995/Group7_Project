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

// Structure to store playlist information
struct Playlist
{
    string name;
    string genre;
    string mood;
    string duration;
    string description;
    vector<string> songs;
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
        recommendation.songs = {
            "As It Was - Harry Styles",
            "Levitating - Dua Lipa",
            "Dynamite - BTS",
            "Cruel Summer - Taylor Swift",
            "Shape of You - Ed Sheeran",
            "Blinding Lights - The Weeknd",
            "Dance the Night - Dua Lipa",
            "Uptown Funk - Bruno Mars",
            "Good 4 U - Olivia Rodrigo",
            "Sunflower - Post Malone",
            "Can't Stop the Feeling! - Justin Timberlake",
            "Shake It Off - Taylor Swift",
            "Roar - Katy Perry",
            "Sugar - Maroon 5",
            "Firework - Katy Perry"
        };
    }
    else if (genre == "Pop" && mood == "Relaxed")
    {
        recommendation.name = "Chill Pop Vibes";
        recommendation.description =
            "A relaxing collection of soft and enjoyable "
            "pop tracks.";
        recommendation.songs = {
            "Golden Hour - JVKE",
            "Until I Found You - Stephen Sanchez",
            "Peaches - Justin Bieber",
            "Double Take - dhruv",
            "Glimpse of Us - Joji",
            "Attention - Charlie Puth",
            "Drivers License - Olivia Rodrigo",
            "Stay - The Kid LAROI & Justin Bieber",
            "Comethru - Jeremy Zucker",
            "Riptide - Vance Joy",
            "Death Bed - Powfu",
            "Sunday Morning - Maroon 5",
            "Like I'm Gonna Lose You - Meghan Trainor",
            "Lover - Taylor Swift",
            "Perfect - Ed Sheeran"
        };
    }
    else if (genre == "Rock" && mood == "Energetic")
    {
        recommendation.name = "Rock Energy";
        recommendation.description =
            "A high-energy rock playlist suitable for "
            "activities and motivation.";
        recommendation.songs = {
            "Believer - Imagine Dragons",
            "Numb - Linkin Park",
            "Sweet Child O' Mine - Guns N' Roses",
            "Can't Stop - Red Hot Chili Peppers",
            "Smells Like Teen Spirit - Nirvana",
            "Seven Nation Army - The White Stripes",
            "Radioactive - Imagine Dragons",
            "It's My Life - Bon Jovi",
            "Back In Black - AC/DC",
            "Centuries - Fall Out Boy",
            "Eye of the Tiger - Survivor",
            "In the End - Linkin Park",
            "Welcome to the Jungle - Guns N' Roses",
            "Demons - Imagine Dragons",
            "Kryptonite - 3 Doors Down"
        };
    }
    else if (genre == "Hip-Hop" && mood == "Energetic")
    {
        recommendation.name = "Hip-Hop Power Mix";
        recommendation.description =
            "An energetic hip-hop selection with strong "
            "beats and an engaging atmosphere.";
        recommendation.songs = {
            "Lose Yourself - Eminem",
            "Sicko Mode - Travis Scott",
            "HUMBLE. - Kendrick Lamar",
            "God's Plan - Drake",
            "Till I Collapse - Eminem",
            "Power - Kanye West",
            "Rockstar - Post Malone ft. 21 Savage",
            "Industry Baby - Lil Nas X & Jack Harlow",
            "Can't Hold Us - Macklemore & Ryan Lewis",
            "Without Me - Eminem",
            "Goosebumps - Travis Scott",
            "Money Trees - Kendrick Lamar",
            "First Class - Jack Harlow",
            "All I Do Is Win - DJ Khaled",
            "Remember the Name - Fort Minor"
        };
    }
    else if (genre == "R&B" && mood == "Relaxed")
    {
        recommendation.name = "R&B Chill Session";
        recommendation.description =
            "A smooth R&B playlist designed for relaxation "
            "and a calm listening experience.";
        recommendation.songs = {
            "Best Part - Daniel Caesar ft. H.E.R.",
            "Get You - Daniel Caesar",
            "Redbone - Childish Gambino",
            "Location - Khalid",
            "Earned It - The Weeknd",
            "Snooze - SZA",
            "Call Out My Name - The Weeknd",
            "B.E.D. - Jacquees",
            "Focus - H.E.R.",
            "Talk - Khalid",
            "Die For You - The Weeknd",
            "HRTBRK - Giveon",
            "Free - 6LACK",
            "At My Worst - Pink Sweat$",
            "I Like That - Janelle Monáe"
        };
    }
    else if (genre == "K-Pop" && mood == "Happy")
    {
        recommendation.name = "K-Pop Feel Good";
        recommendation.description =
            "A cheerful K-Pop playlist featuring energetic "
            "and uplifting music.";
        recommendation.songs = {
            "Dynamite - BTS",
            "Cupid - FIFTY FIFTY",
            "Super Shy - NewJeans",
            "Feel Special - TWICE",
            "Boy With Luv - BTS ft. Halsey",
            "Queencard - (G)I-DLE",
            "Fancy - TWICE",
            "As If It's Your Last - BLACKPINK",
            "Power - EXO",
            "Love Scenario - iKON",
            "Left & Right - SEVENTEEN",
            "Dance the Night Away - TWICE",
            "After LIKE - IVE",
            "Pop! - NAYEON",
            "Just Right - GOT7"
        };
    }
    else if (genre == "K-Pop" && mood == "Energetic")
    {
        recommendation.name = "K-Pop Energy Mix";
        recommendation.description =
            "A lively K-Pop playlist suitable for an "
            "energetic listening session.";
        recommendation.songs = {
            "How You Like That - BLACKPINK",
            "God's Menu - Stray Kids",
            "MIC Drop - BTS",
            "Kill This Love - BLACKPINK",
            "MANIAC - Stray Kids",
            "Sorcerer - ATEEZ",
            "DDU-DU DDU-DU - BLACKPINK",
            "Kick It - NCT 127",
            "Fire - BTS",
            "Monster - EXO",
            "Banger - ATEEZ",
            "Thunderous - Stray Kids",
            "Lovesick Girls - BLACKPINK",
            "S-Class - Stray Kids",
            "NOT TODAY - BTS"
        };
    }
    else if (mood == "Sad")
    {
        recommendation.name = genre + " Emotional Collection";
        recommendation.description =
            "A selection of emotional " + genre +
            " music suitable for a reflective mood.";
        recommendation.songs = {
            "Someone Like You - Adele",
            "Fix You - Coldplay",
            "All I Want - Kodaline",
            "Say Something - A Great Big World",
            "The Night We Met - Lord Huron",
            "Whiskey Lullaby - Brad Paisley",
            "Supermarket Flowers - Ed Sheeran",
            "Skinny Love - Bon Iver",
            "When I Was Your Man - Bruno Mars",
            "Glimpse of Us - Joji",
            "Traitor - Olivia Rodrigo",
            "Let Her Go - Passenger",
            "Tears in Heaven - Eric Clapton",
            "Already Gone - Kelly Clarkson",
            "Hallelujah - Jeff Buckley"
        };
    }
    else
    {
        recommendation.name = genre + " " + mood + " Mix";
        recommendation.description =
            "A personalised " + genre +
            " playlist selected according to your "
            "preferred mood.";
        if (mood == "Happy")
        {
            recommendation.songs = {
                "Happy - Pharrell Williams",
                "Can't Stop the Feeling! - Justin Timberlake",
                "Uptown Funk - Bruno Mars",
                "Good Time - Owl City & Carly Rae Jepsen",
                "Sugar - Maroon 5",
                "Walking on Sunshine - Katrina and the Waves",
                "I Gotta Feeling - Black Eyed Peas",
                "Best Day of My Life - American Authors",
                "On Top of the World - Imagine Dragons",
                "24K Magic - Bruno Mars",
                "High Hopes - Panic! At The Disco",
                "Shut Up and Dance - WALK THE MOON",
                "Firework - Katy Perry",
                "Counting Stars - OneRepublic",
                "Dynamite - BTS"
            };
        }
        else if (mood == "Relaxed")
        {
            recommendation.songs = {
                "Sunflower - Post Malone & Swae Lee",
                "Sunday Morning - Maroon 5",
                "Riptide - Vance Joy",
                "Put Your Records On - Corinne Bailey Rae",
                "Banana Pancakes - Jack Johnson",
                "Breathe - Taylor Swift",
                "Beyond - Leon Bridges",
                "Is This Love - Bob Marley",
                "Slow Dancing in a Burning Room - John Mayer",
                "Free Fallin' - Tom Petty",
                "Comethru - Jeremy Zucker",
                "Location - Khalid",
                "Golden Hour - JVKE",
                "Best Part - Daniel Caesar",
                "Perfect - Ed Sheeran"
            };
        }
        else
        {
            recommendation.songs = {
                "Eye of the Tiger - Survivor",
                "Stronger - Kanye West",
                "Can't Hold Us - Macklemore & Ryan Lewis",
                "Till I Collapse - Eminem",
                "Immigrant Song - Led Zeppelin",
                "Don't Stop Me Now - Queen",
                "Turn Down for What - DJ Snake & Lil Jon",
                "Level Up - Ciara",
                "Pump It - Black Eyed Peas",
                "Club Can't Handle Me - Flo Rida",
                "Power - Kanye West",
                "Believer - Imagine Dragons",
                "Radioactive - Imagine Dragons",
                "Centuries - Fall Out Boy",
                "Bang Bang - Jessie J, Ariana Grande, Nicki Minaj"
            };
        }
    }

    return recommendation;
}

void displayRecommendation(const Playlist& playlist, int durationChoice)
{
    cout << "\n==================================================\n";
    cout << "              YOUR RECOMMENDATION\n";
    cout << "==================================================\n";

    cout << "Playlist : " << playlist.name << endl;
    cout << "Genre    : " << playlist.genre << endl;
    cout << "Mood     : " << playlist.mood << endl;
    cout << "Duration : " << playlist.duration << endl;

    int songLimit = 5;
    if (durationChoice == 2)
    {
        songLimit = 10;
    }
    else if (durationChoice == 3)
    {
        songLimit = 15;
    }

    cout << "Songs    :\n";
    for (int i = 0; i < songLimit && i < playlist.songs.size(); ++i)
    {
        cout << " " << i + 1 << ". " << playlist.songs[i] << endl;
    }

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

    displayRecommendation(recommendation, durationChoice);
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