// Interactive Fiction Story.cpp : Defines the entry point for the console application.
//

//include statements
#include "stdafx.h"
#include <iostream>
#include <string>
//standard namespace
using namespace std;

//declare functions to be used
//these are the function signitures
string askText(string prompt);
int askNumber(string prompt);
void DisplayUserCommands();

//where the program begins
int main()
{
	//variable to hold the user name
	string userName = "";

	//put code block in to collapse it for space
	{
		//name of game and welcome the user
		cout << "Welcome to the game of chance and mystery..." << endl;
		//very important - i am calling the gettextfromuser to display
		//a promptwith instructions for the user to input, and to fetch
		//the username, then put the value into the username var
		userName = askText("Please enter your name: ");


		//layout the background/setting for the user
		cout << "You wake up in a unfamiliar bed with a cold body next to you.\n";
		cout << "You check the body for a pulse and you find a very weak one.\n";
		cout << "You try to wake the female next to you up to no success." << endl;
		//clever use of username to personalize the game
		cout << "You are wondering what to do next when you find a wallet with you name and a picture of you and the still alive female." << endl;
	}
	//calling a function to display the list of user commands
	DisplayUserCommands();
	//get's the user's choice and does something based on it
	int number = askNumber("Please enter a number: ");

	switch (number)
	{
	case 1:
		cout << "You call the police and they get there in time to save the female who turns out to be your wife." << endl;
		break;
	case 2:
		cout << "You fail at warming her up and she ends up dieing and you goind to jeil for murder." << endl;
		break;
	case 3:
		cout << "You see the news a few weeks later saying she survived and you are the person of interest in a manhunt for her abusive boyfriend who almost killed her." << endl;
		break;
	default:
		cout << "You wake up from your dream." << endl;
		break;
	}

	system("Pause");
	return 0;
}

// funtion to display the list of user commands
void DisplayUserCommands() {
	cout << "Enter a Number:" << endl;
	cout << "1 Call the police" << endl;
	cout << "2 Try to warm up the body" << endl;
	cout << "3 Run away from the scene" << endl;
}

//funtion to get text mixed numbers from the user
string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

//funtion to get number mixed numbers from the user
int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}
