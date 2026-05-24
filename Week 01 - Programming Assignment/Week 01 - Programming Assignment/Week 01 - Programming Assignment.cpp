// Week 01 - Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Using the std namespace here so I didn't have to type out the prefix everytime.
using namespace std;
#include <iostream>

//The main function here
int main()
{
    //String variables later used to store the three responses
    int workoutLength;
    string bodyPart;
    string beverage;

    //My short & simple introduction
    cout << "Hello, my name is Gary and my hobby is strength training & fitness development!\n";
    cout << "I would like to ask you three simple questions related to my hobby.\n\n";

    //Stars because why not
    cout << "**********************************************************\n\n";

    //Display 1st Question
    cout << "Question 1/3:\n\n";
    cout << "Around how many hours do you typically workout per week? (Numerical answer only please)\n\n";

    //Answer to question one
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> workoutLength;

    //Response to the answer
    cout << "\nA workout of " << workoutLength << " hours is good! For me, my sessions are still rather short, only really being two hours maximum as\n"
         << "of right now. But that is primarily because I'm still new to this, but I'm aiming to go higher!";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";





    //Display 2nd Question
    cout << "Question 2/3:\n\n";
    cout << "What is the main part of your body you would like to see improvement in?\n\n";

    //Answer to question two
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n\n";
    cin >> bodyPart;

    //Response to the answer
    cout << "\nOh, " << bodyPart << " is a great place to start! Me personally, I decided to work on my arms. For almost the entirety of my life,\n"
        << "my arms have been built like noodles, and so one day I just simply got tired of it, and wanted to make a change.\n"
        << "But I eventually decided I should be workouting out more than simply just my arms.";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";





    //Display 3rd Question
    cout << "Question 3/3:\n\n";
    cout << "What drinks do you like to consume while you workout?\n\n";

    //Answer to question three
    cout << "Type in your response here and press the 'Enter' key to submit your response:\n";
    cin >> beverage;

    //Response to the answer
    cout << "\nOh sweet, for me personally, it's my arms. For almost the entirety of my life, my arms have been built like noodles, and\n"
        << "so one day I just simply got tired of it, but I eventually decided I should workout more than just my arms.";

    //Stars because why not
    cout << "\n\n**********************************************************\n\n";





    /* Not entirely sure what this does just yet to be honest, but I do know that we need it
    * as of right now, and the book says it will explain its full use in a later chapter. 
    */
    return 0;
}