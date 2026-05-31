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

//The main function here
int main()
{
    ifstream inData;
    ofstream outData;

    //String variables later used to store the three responses
    string firstName;
    string lastName;
    int workoutLength;
    string bodyPart;
    string beverage;
    double weight;

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

    //My short & simple introduction
    cout << "Welcome! What is your first and last name?\n\n";

    //To account for the space
    cin >> firstName;
    cin.ignore(1);
    cin >> lastName;

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";

    //My short & simple introduction
    cout << "Hello " << firstName << " " << lastName << ", my name is Gary and my hobby is strength training & fitness development!\n";
    cout << "I would like to ask you four simple questions related to my hobby.\n\n";







    //Stars because why not
    cout << "**********************************************************\n\n";

    //Display 1st Question
    cout << "Question 1/4:\n\n";
    cout << "Around how many hours do you typically workout per week? (Numerical answer only please)\n\n";

    //Answer to question one
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> workoutLength;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    //Response to the answer
    cout << "\nA workout of " << workoutLength << " hours is good! For me, my sessions are still rather short, only really being two hours maximum as\n"
        << "of right now. But that is primarily because I'm still new to this, but I'm aiming to go higher!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";





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






    //Display 4th Question
    cout << "Question 4/4:\n\n";
    cout << "How much do you currently weigh? (Up to a single decimal is allowed)\n\n";

    //Answer to question three
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> weight;

    //To deal with input stream if it enters the fail state
    cin.clear();
    cin.ignore(100, '\n');

    //Response to the answer
    cout << "\nNice, " << weight << " lbs isn't a bad place to start off.\n"
        << "I wish you luck on your journey to whatever weight it is that you desire!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";





    //Calculation for weight loss
    cout << "Analysis: If your current weight is " << weight << " lbs, then by the end of the month,\n"
        << "you should hopefully weigh anywhere around " << weight - 8 << "-" << weight - 4 << "lbs!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";





    //New summary for answers
    cout << "Anyways, here is what I have gathered from our discussion:\n\n";

    //Fancy table
    cout << "<< QUESTION >>                     << ANSWER >>";
    cout << setfill(' ');
    cout << left;
    cout << setw(15) << setfill(' ') << "\n\n- Workout Period?" << setw(21) << right << setfill(' ') << workoutLength << " Hours";
    cout << setw(15) << setfill(' ') << "\n\n- Focal Point?" << setw(27) << right << setfill(' ') << "The " << bodyPart;
    cout << setw(15) << setfill(' ') << "\n\n- Beverage?" << setw(27) << right << setfill(' ') << beverage;
    cout << setw(15) << setfill(' ') << setprecision(1) << "\n\n- Current Weight?" << setw(20) << right << setfill(' ') << weight << " Pounds";

    //Getting ready to store data elsewhere
    outData.open("report.txt");

    //STORING DATA IN SEPARATE FILE
    outData << "<< QUESTION >>                     << ANSWER >>";
    cout << setfill(' ');
    cout << left;
    cout << setw(15) << setfill(' ') << "\n\n- Workout Period?" << setw(21) << right << setfill(' ') << workoutLength << " Hours";
    cout << setw(15) << setfill(' ') << "\n\n- Focal Point?" << setw(27) << right << setfill(' ') << "The " << bodyPart;
    cout << setw(15) << setfill(' ') << "\n\n- Beverage?" << setw(27) << right << setfill(' ') << beverage;
    cout << setw(15) << setfill(' ') << setprecision(1) << "\n\n- Current Weighht?" << setw(20) << right << setfill(' ') << weight << " Pounds";

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


    //Goodbye
    cout << "\n\nAnyways, thank you for answering my questions and I wish you the best of luck on your journey!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";



    /* Not entirely sure what this does just yet to be honest, but I do know that we need it
    * as of right now, and the book says it will explain its full use in a later chapter.
    */
    return 0;
}