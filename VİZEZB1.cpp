(I got help from chatgbt)
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to the other world" << endl;

    string player_name;
    cout << "What is your name? ";
    getline(cin, player_name);
    cout << "Nice to meet you, " << player_name << "! I have few questions for you." << endl;

    // Question 1
    cout << "\n" << player_name << ", If you could live in a different world, which one do you choose?" << endl;
    cout << "a) Magical" << endl;
    cout << "b) Musical" << endl;
    cout << "c) Sci-fi" << endl;
    char env_choice;
    cin >> env_choice;

    // Question 2
    cout << "\n" << player_name << ",   If you had a special power, which one would you like it to be? " << endl;
    cout << "a) Extra strong" << endl;
    cout << "b) Invisibility" << endl;
    cout << "c) Fly" << endl;
    char power_choice;
    cin >> power_choice;

    // Question 3
    char third_choice;
    if (power_choice == 'a') {
        cout << "\n" << player_name << ", Who do you want to see first ? " << endl;
        cout << "a) Poor man" << endl;
        cout << "b) Family" << endl;
        cout << "c) Important people" << endl;
    }
    else if (power_choice == 'b') {
        cout << "\n" << player_name << ", What would you like to do when you are invisible ?" << endl;
        cout << "a) Theft" << endl;
        cout << "b) By killing someone" << endl;
        cout << "c) Stealing confidential documents" << endl;
    }
    else {
        cout << "\n" << player_name << ", What would you like to do by flying ?" << endl;
        cout << "a) To tarvel" << endl;
        cout << "b) Find the criminals" << endl;

    }
    cin >> third_choice;

    // Question 4
    cout << "\n" << player_name << ", How do you proceed when there is war?" << endl;
    cout << "a) Mediation" << endl;
    cout << "b) Fight" << endl;
    cout << "c) Escape" << endl;
    char time_choice;
    cin >> time_choice;

    // Evaluate and respond
    cout << "\nThanks for the playing this game, " << player_name << "! Here is the information I got about you." << endl;


    if (env_choice == 'a') {
        cout << "You are interested in witches and magical things." << endl;
    }
    else if (env_choice == 'b') {
        cout << "You like environments where there is song." << endl;
    }
    else {
        cout << "You like science fiction themed places." << endl;
    }

    if (power_choice == 'a') {
        cout << "You like to be stronger than others." << endl;
    }
    else if (power_choice == 'b') {
        cout << "You like to keep to yourself." << endl;
    }
    else {
        cout << "You like to be free." << endl;
    }

    if (time_choice == 'a') {
        cout << "You don't like wars and like to settle them." << endl;
    }
    else if (time_choice == 'b') {
        cout << "Your sense of fear is less, you like to fight." << endl;
    }
    else {
        cout << "You don't want to stand where you could get hurt.." << endl;
    }

    cout << "\nThanks for playing, " << player_name << "! Hope you enjoyed the game." << endl;

    return 0;
}
