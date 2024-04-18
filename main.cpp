#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    char gender;
    bool likes_cooking, likes_sports;



    cout << "Welcome to Partner Matcher!\n";
    cout << "Please answer the following questions to find your perfect match.\n";

    cout << "What's your name? ";
    cin >> name;

    cout << "How old are you? ";
    cin >> age;

    cout << "What's your gender? (M/F) ";
    cin >> gender;

    cout << "Do you like cooking? (1 for Yes / 0 for No) ";
    cin >> likes_cooking;

    cout << "Do you like sports? (1 for Yes / 0 for No) ";
    cin >> likes_sports;

    if (age >= 18 && age <= 30 && gender == 'F' && likes_cooking && !likes_sports) {
        cout << "Congratulations, " << name << "! You are matched with a partner who is into cooking and doesn't like sports.\n";
    } else if (age >= 20 && age <= 35 && gender == 'M' && !likes_cooking && likes_sports) {
        cout << "Congratulations, " << name << "! You are matched with a partner who likes sports and doesn't like cooking.\n";
    } else {
        cout << "Sorry, " << name << "! We couldn't find a suitable match for you.\n";
    }


    return 0;
}
