#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string questions[10] = {
        "Jimmy's father has three sons- Paul I and Paul II. Can you guess the name of the third son_____?",
        "You're 4th place right now in a race. What place will you be in when you pass the person in 3rd place_____?",
        "How many months have 28 days_____?",
        "How many 0.5cm slices can you cut from a Cake that is 25cm long_______?",
        "The answer is really big. _____",
        "Divide 30 by half and add ten. then_____?",
        "There are two clocks of different colors: The green clock is broken and doesn't run at all, but the yellow clock loses one second every 24 hours. Which clock is more accurate_________?",
        "A farmer has 17 goats. All of them but 8 die. How many goats are alive ___________?",
        "If a leaf falls to the ground in a jungle, and no one hears it, will it make a sound______?",
        "There are 45 mangoes in your basket. You take three out of the basket. How many mangoes are left?"};
    string options[10][4] = {
        {"Paul III", "Jerin", "Jenny", "Jimmy"},
        {"1st", "2nd", "3rd", "None of these"},
        {"2", "1", "All of the these", "None of these"},
        {"50", "25", "39", "None of these"},
        {"The Answer", "Really big", "An Elephant", "Given data is incomlete"},
        {"40.5", "50", "70", "I know this is a trick question so None of them !!"},
        {"Green", "Yellow", "Neither", "Both"},
        {"8", "9", "25", "35"},
        {"Yes", "No", "Depends how heavy the leaf was", "Depend on the Landing surface"},
        {"3", "42", "45", "I do not eat mango!!"},
    };
    string correctOptions[10] = {
        "Jimmy", "3rd", "All of the above", "50",
        "The Answer", "70", "Green",
        "8", "Yes", "45"};
    int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int totalQs = 10;
    int op;

    //----- Conducting Quiz -----
    for (int i = 0; i < totalQs; i++)
    {
        cout << "Question # " << (i + 1) << endl;
        cout << questions[i] << endl;
        cout << "1." << options[i][0] << endl;
        cout << "2." << options[i][1] << endl;
        cout << "3." << options[i][2] << endl;
        cout << "4." << options[i][3] << endl
             << endl;

        cout << "Select Option (1-4) or 0 to skip and press enter: ";
        cin >> userOptions[i];
        cout << endl
             << "-----------------------------" << endl
             << endl;
    }

    //----- Printing Correct Options -----
    cout << "======= ======= ======= ======= " << endl;
    cout << "======= Correct Options ======= " << endl;
    cout << "======= ======= ======= ======= " << endl;

    for (int i = 0; i < totalQs; i++)
    {
        cout << "Question # " << (i + 1) << endl;
        cout << questions[i] << endl;
        cout << "1." << options[i][0] << endl;
        cout << "2." << options[i][1] << endl;
        cout << "3." << options[i][2] << endl;
        cout << "4." << options[i][3] << endl;

        if (userOptions[i] == 0)
        {
            cout << "You Skipped this Question." << endl;
        }
        else
        {
            cout << "You Selected : " << options[i][userOptions[i] - 1] << endl;
        }
        cout << "Correct Option : " << correctOptions[i] << endl
             << endl;

        cout << "Press any key to continue..." << endl;
        getch();
        cout << endl
             << "------------------" << endl;
    }

    //----- Printing Result -----
    cout << endl
         << endl;
    cout << "======= ======= ======= ======= " << endl;
    cout << "=======      Result     ======= " << endl;
    cout << "======= ======= ======= ======= " << endl;

    int correct = 0;
    int incorrect = 0;
    int skipped = 0;
    for (int i = 0; i < totalQs; i++)
    {
        if (userOptions[i] != 0)
        {
            if (correctOptions[i] == options[i][userOptions[i] - 1])
            {
                correct++;
            }
            else
            {
                incorrect++;
            }
        }
        else
        {
            skipped++;
        }
    }
    cout << "Total Questions : " << totalQs << endl;
    cout << "Correct : " << correct << endl;
    cout << "In-Correct : " << incorrect << endl;
    cout << "Skipped : " << skipped << endl;

    getch();
    return 0;
}