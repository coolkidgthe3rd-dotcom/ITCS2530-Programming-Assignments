// Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Using the std namespace here so I didn't have to type out the prefix everytime.
using namespace std;

//Headers being used so specific functions can be used
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
#define NDEBUG //comment this out if you want to be able to use the assert function
#include <cassert>

//The main function here
int main()
{
    //The file stream variables
    ifstream inData;
    ofstream outData;

    //String variables later used to store the three responses
    string firstName;
    string lastName;
    int workoutLength;
    string bodyPart;
    string beverage;
    double weight;
    int option;
    string singleName;

    //Weird variable I made up for a "press >key< to continue feature"
    string um;

    //Friendly intro banner
    cout << setfill(' ');

    //First row
    cout << setw(2) << "#" << setw(3) << "#"
        << setw(6) << "####"
        << setw(3) << "#"
        << setw(6) << "#"
        << setw(8) << "##"
        << setw(4) << "#" << setw(3) << "#" << endl;
    //Second row
    cout << setw(2) << "#" << setw(3) << "#"
        << setw(3) << "#"
        << setw(6) << "#"
        << setw(6) << "#"
        << setw(6) << "#" << setw(3) << "#"
        << setw(3) << "#" << setw(3) << "#" << endl;
    //Third row
    cout << setw(5) << "####"
        << setw(6) << "####"
        << setw(3) << "#"
        << setw(6) << "#"
        << setw(6) << "#" << setw(3) << "#"
        << setw(3) << "#" << setw(3) << "#" << endl;
    //Fourth row
    cout << setw(2) << "#" << setw(3) << "#"
        << setw(3) << "#"
        << setw(6) << "#"
        << setw(6) << "#"
        << setw(6) << "#" << setw(3) << "#" << endl;
    //Fifth row
    cout << setw(2) << "#" << setw(3) << "#"
        << setw(6) << "####"
        << setw(6) << "####"
        << setw(6) << "####"
        << setw(5) << "##"
        << setw(4) << "#" << setw(3) << "#" << endl;

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    //Start of program, asks if player has a last name.
    cout << "Welcome!! Before we begin, we need a name. Do you have a last name? (Yes or No)\n\n";
    cin >> singleName;

    //Accounting for variations of 'yes' (if player does have a last name)
    if (singleName == "yes" || singleName == "Yes" || singleName == "YES" || singleName == "Y" || singleName == "y")
    {
        cout << "\nOkay, please enter your first and last names here:\n\n";
        //To account for the space
        cin >> firstName;
        cin.ignore(1);
        cin >> lastName;
    }
    //Accounting for variations of 'no' (if player does NOT have a last name)
    else if (singleName == "no" || singleName == "No" || singleName == "NO" || singleName == "N" || singleName == "n")
    {
        cout << "\nOkay, please enter your name here:\n\n";
        cin >> firstName;
    }
    //If player types anything either than yes or no (terminates program)
    else
    {
        cout << "\nError: Invalid response. Terminating program.\n\n";
        return 0;
    }

    cout << "\n";

    //My short & simple introduction
    //Accounting for variations of 'yes' (if player does have a last name)
    if (singleName == "yes" || singleName == "Yes" || singleName == "YES" || singleName == "Y" || singleName == "y")
    {
        //If player shares the same FIRST name as me
        if (firstName == "Gary" || firstName == "gary")
        {
            //If player does NOT share the same FIRST and LAST name as me
            if (lastName != "Gantt" && lastName != "gantt")
            {
                cout << "Woah! Your first name is also " << firstName << "? That's so cool!\n\n";

                cout << "Anyways, moving on, my hobby is strength training & fitness development!\n";
                cout << "I would like to ask you four simple questions related to my hobby.\n\n";
            }

            //If player shares BOTH the same first name AND last name as me
            else if (lastName == "Gantt" || lastName == "gantt")
            {
                cout << "Woah this is insane!\n";
                cout << "Your first AND last name is ALSO " << firstName << " " << lastName << "??\n";
                cout << "What are the chances?!\n\n";
                cout << "Wait... are you sure you aren't just a secret clone of me...?\n\n";

                cout << "Anyways, moving on me, our hobby is strength training & fitness development!\n";
                cout << "I would like to ask you (or myself?) four simple questions related to our hobby.\n\n";

                cout << "(God that is so weird, I'm not doing that anymore...)\n\n";
            }
        }
        //If player shares the same LAST name as me but NOT the first name
        else if (lastName == "Gantt" || lastName == "gantt")
        {
            if (firstName != "Gary" && firstName != "gary")
            {
                cout << "Woah! Your last name is also " << lastName << "? That's so cool!\n\n";

                cout << "Anyways, moving on, my hobby is strength training & fitness development!\n";
                cout << "I would like to ask you four simple questions related to my hobby.\n\n";
            }
        }
        //If player does not share either the first or last name with me
        else
        {
            cout << "Hello " << firstName << " " << lastName << ", my name is Gary and my hobby is strength training & fitness development!\n";
            cout << "I would like to ask you four simple questions related to my hobby.\n\n";
        }
    }
    //Accounting for variations of 'no' (if player does NOT have a last name)
    else if (singleName == "no" || singleName == "No" || singleName == "NO" || singleName == "N" || singleName == "n")
    {
        //If player shares the same first name as me
        if (firstName == "Gary" || firstName == "gary")
        {
            cout << "Woah! Your name is also " << firstName << "? That's so cool!\n\n";

            cout << "Anyways, moving on, my hobby is strength training & fitness development!\n";
            cout << "I would like to ask you four simple questions related to my hobby.\n\n";
        }
        //If player does not share the same first name as me
        else
        {
            cout << "Hello " << firstName << ", my name is Gary and my hobby is strength training & fitness development!\n";
            cout << "I would like to ask you four simple questions related to my hobby.\n\n";
        }
    }


    //Stars because why not
    cout << "**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";



    //Display 1st Question
    cout << "Question 1/4:\n\n";
    cout << "Around how many hours do you typically workout per week? (Numerical answer only please)\n\n";

    //Answer to question one
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> workoutLength;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    /* I'll be honest, I don't see a scenario YET where I would NEED a while loop,
    * but I wanted to use it in order to demonstrate that I know how it works,
    * even though it is not actually necessary to use here like at all lol
    */

    while (workoutLength <= 0)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\nWhat? A workout of " << workoutLength << " hours?? Yeah right. \n\nYou're not fooling me bud. Come on, give me the REAL number!\n\n";

        //Answer to question one (again)
        cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
        cin >> workoutLength;

        //To deal with input stream if it enters the fail state
        cin.clear();
        cin.ignore(100, '\n');
    }
    //Possible responses to the answer
    if (workoutLength == 0 || workoutLength == 1)
        cout << "\nAh, a workout of " << workoutLength << " hours is pretty nice, always great to start off small!";
    else
        cout << "\nA workout of " << workoutLength << " hours is good! For me, my sessions are still rather short, only really being two hours maximum as\n"
        << "of right now. But that is primarily because I'm still new to this, but I'm aiming to go higher!";


    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";



    //Display 2nd Question
    cout << "Question 2/4:\n\n";
    cout << "What is the main part of your body you would like to see improvement in?\n\n";

    //Answer to question two
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> bodyPart;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    //Response to the answer
    cout << "\nOh, the " << bodyPart << " is a great place to start! Me personally, I decided to work on my arms. For almost the entirety of my life,\n"
        << "my arms have been built like noodles, and so one day I just simply got tired of it, and wanted to make a change.\n"
        << "But I eventually decided I should be workouting out more than simply just my arms.";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";





    //Display 3rd Question
    cout << "Question 3/4:\n\n";
    cout << "What drinks do you like to consume while you workout?\n\n";

    //Answer to question three
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> beverage;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    //Response to the answer
    cout << "\nAh, " << beverage << " is a classic one. I've always just stuck to water, it's simple, it's usually always the"
        << "\nleast costly option, you usually can bring it with you, it's healthy, and it always tastes good!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";






    //Display 4th Question
    cout << "Question 4/4:\n\n";
    cout << "How much do you currently weigh? (Up to a single decimal is allowed)\n\n";

    //Answer to question three
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> weight;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    //Possible responses to the answer
    if (weight <= 60)
        cout << "\nWhat? You have a weight of " << weight << " pounds?? How is that possible? Do you even exist?\n\nAnyways... moving on...";
    else if (weight > 60 && weight <= 130)
        cout << "\nOnly a weight of " << weight << " pounds? You must be pretty slim, so don't worry about burning fat too much!";
    else if (weight > 130 && weight <= 210)
        cout << "\nYou already have a " << weight << " pounds? You're already in pretty great shape, kudos to you!";
    else if (weight > 210 && weight <= 290)
        cout << "\nNice, " << weight << " pounds isn't a bad place to start off.\n"
        << "I wish you luck on your journey to whatever weight it is that you desire!";
    else
        cout << "\nOkay, there's some work to be done here, but that's okay!\n"
        << "If you put your mind to it, there's no goal that cannot be reached!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";



    //Calculation for weight loss
    cout << "Analysis: If your current weight is " << weight << " lbs, then by the end of the month,\n"
        << "you should hopefully weigh anywhere around " << weight - 8 << "-" << weight - 4 << "lbs!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    cout << "\nType in any character (excluding space), and then press 'Enter' to continue...\n\n";
    cin >> um;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";





    //New summary for answers
    cout << "Anyways, here is what I have gathered from our discussion:\n\n";

    //Fancy table
    cout << "<< QUESTION >>                     << ANSWER >>";
    cout << setfill(' ');
    cout << left;

    /* I'll be honest, I don't see a scenario YET where I would NEED a for loop,
    * but I wanted to use it in order to demonstrate that I know how it works,
    * even though it is not actually necessary to use here like at all lol
    */
    int question;

    //For loop
    //if question isnt 1, 2, or 3, then display the "current weight" question and answer
    for (question = 1; question <= 4; question++)
    {
        if (question == 1)
            cout << setw(15) << setfill(' ') << "\n\n- Workout Period?" << setw(21) << right << setfill(' ') << workoutLength << " Hours";
        else if (question == 2)
            cout << setw(15) << setfill(' ') << "\n\n- Focal Point?" << setw(27) << right << setfill(' ') << "The " << bodyPart;
        else if (question == 3)
            cout << setw(15) << setfill(' ') << "\n\n- Beverage?" << setw(28) << right << setfill(' ') << beverage;
        else 
            cout << setw(15) << setfill(' ') << "\n\n- Current Weight?" << setw(20) << setprecision(5) << right << setfill(' ') << weight << " Pounds";
    }

    //Getting ready to store data elsewhere, also linking the file stream variable with the output source
    outData.open("report.txt");

    //STORING DATA IN SEPARATE FILE
    outData << "<< QUESTION >>                     << ANSWER >>";
    outData << setfill(' ');
    outData << left;
    outData << setw(15) << setfill(' ') << "\n\n- Workout Period?" << setw(28) << right << setfill(' ') << workoutLength << " Hours";
    outData << setw(15) << setfill(' ') << "\n\n- Focal Point?" << setw(28) << right << setfill(' ') << "The " << bodyPart;
    outData << setw(15) << setfill(' ') << "\n\n- Beverage?" << setw(28) << right << setfill(' ') << beverage;
    outData << setw(15) << setfill(' ') << "\n\n- Current Weight?" << setw(28) << setprecision(5) << right << setfill(' ') << weight << " Pounds";

    //Close file when done
    outData.close();

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";






    //Words of advice
    cout << "\These are all great traits to have for working out!\n";
    cout << "\nAnd please keep in mind to not get discouraged from seeing other people's progress,";
    cout << "\neverybody's bodies are different, while some may simply have more time or experience. But whatever";
    cout << "\nit is, you should never sell yourself short because somebody else is at where you want to be right now,";
    cout << "\nbecause with enough time, patience, hard work, and dedication, that could be you too.";


    //Menu
    cout << "\n\nBut before you go, please take a moment to choose one of the 3 not so brief tips from this menu:\n";

    cout << "\n1. Guide on eating healthier.";
    cout << "\n2. Establishing a schedule.";
    cout << "\n3. Just a random tip.\n\n";

    /* I'll be honest, I don't see a scenario YET where I would NEED a do while loop,
    * but I wanted to use it in order to demonstrate that I know how it works,
    * even though it is not actually necessary to use here like at all lol
    */
    do
    {
        cout << "Type in a number from 1 to 3.\n";
        cin >> option;
    } 
    while (option != 1 && option != 2 && option != 3);

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    switch (option)
    {
    case 1:
        cout << "\n\nOption one selected."
            << "\n\nOne, don't feel bad about eating three meals, working out a lot can burn a ton"
            << "\nof energy that you might need. Next, try not to eat too much after 6 if you can"
            << "\nhelp it, not only does it help eliminate unneeded eating, but it is also great for"
            << "\nburning weight as it burns out pretty much all the glucose at of you, so it forces"
            << "\nyour body to run on the actual reserves it has to burn fat off.";
        break;
    case 2:
        cout << "\n\nOption two selected."
            << "\n\nThis tip is admittedly short compared to tips one and three, but anyways, this"
            << "\none is such an important, yet neglected and overlooked principal for working out."
            << "\nWhen working out, don't just train and exercise like a madman, rest is just equally"
            << "\nas important, if not, more. When you train, TRAIN. When you rest, REST.";
        break;
    case 3:
        cout << "\n\nOption three selected."
            << "\n\nOkay, so for awhile, I wanted to do more with my forearms, so a few weeks ago,"
            << "\nI ordered this cool thing I saw on Instagram. It was a black bag that had a ton of"
            << "\ncool devices to use like arm grip strengtheners, stress balls, etc. It's really"
            << "\nconvenient because you can use it on the fly, and it's great for forearms!"
            << "\n\nIt was made by a company called \'FITBEAST\', so I recommend checking that out!";
        break;
    default:
        cout << "\n\nError: Invalid option. Terminating program.";
        return 0;
    }

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    //Goodbye
    cout << "Goodbye, I wish you luck on your journey!";

    /* Not entirely sure what this does just yet to be honest, but I do know that we need it
    * as of right now, and the book says it will explain its full use in a later chapter.
    */
    return 0;
}