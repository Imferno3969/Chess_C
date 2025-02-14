#include <iostream>
#include <string>
#include "user.h"
using namespace std;

void banner()
{
    cout << "	   ______              ________                  				" << endl;
    cout << "	  / ____/__    __     / ____/ /_  ___  __________				" << endl;
    cout << "	 / /  __/ /___/ /_   / /   / __ // _ // ___/ ___/				" << endl;
    cout << "	/ /__/_  __/_  __/  / /___/ / / /  __(__  |__  ) 				" << endl;
    cout << "	/____//_/   /_/     /____/_/ /_//___/____/____/  				" << endl;
    cout << "                                                               	" << endl;
}

void welcome()
{
    cout << endl;
    cout << "      ---==============BIENVENUE===============---       " << endl;
	cout << endl;
	cout << "		[1]Registration.								" << endl; // reg_and_login();
    cout << endl;
	cout << "		[2]Board.										" << endl; // boardinfo();
    cout << endl;
	cout << "		[3]About.										" << endl; // about();
    cout << endl;
	cout << "		[4]License.										" << endl; // license();
    cout << endl;
	cout << "		[5]Exit.										" << endl; // exit(0);
}

void menu()
{
    cout << endl;
    cout << "      ---================MENU================---       " << endl;
    cout << endl;
	cout << "		[1]Profile.										" << endl; // profile();
    cout << endl;
	cout << "		[2]Play.										" << endl; // In process.
    cout << endl;
	cout << "		[3]Play with computer. (BETA)					" << endl; // In process.
    cout << endl;
	cout << "		[4]License.										" << endl; // license();
    cout << endl;
	cout << "		[5]About.										" << endl; // about();
    cout << endl;
	cout << "		[6]Log Out.										" << endl; // user.set_regbool(false);
	cout << endl;
	cout << "		[7]Statistics.									" << endl; // status;
}

void profile(User& user)
{
    cout << endl;
    cout << "      ---============user profıle============---       " << endl;
    cout << endl;
    cout << "          username: " << user.get_username()             << endl;
    cout << "          password: " << user.get_password()             << endl;
    cout << "          level: " << user.get_level()                   << endl;

	cout << endl;
	cout << "		[1]Change username.								" << endl; // checking with changing.
    cout << endl;
	cout << "		[2]Change password.								" << endl; // checking with changing.
    cout << endl;
	cout << "		[3]Back.							        	" << endl; // continue;
}

void reg_and_login()
{
    cout << endl;
    cout << "      ---============REGISTRATION============---       " << endl;
	cout << endl;
	cout << "		[1]Sign Up.										" << endl;
    cout << endl;
	cout << "		[2]Log In as Guest. (BETA)						" << endl;
    cout << endl;
	cout << "		[3]Back to menu.								" << endl;
}

void board_win(User& user)
{
	cout << "		   a     b     c     d     e     f     g     h   " << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	1	| b_r | b_h | b_e | b_Q | b_K | b_e | b_h | b_r |" << endl;
	cout << "	 	+-----+-----+-----+-----+-----|-----+-----+-----+" << endl;
	cout << "	2	| b_p | b_p | b_p | b_p | b_p | b_p | b_p | b_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	3	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	4	|     |     |     | You | WIN |  !  |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	5	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	6	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	7	| w_p | w_p | w_p | w_p | w_p | w_p | w_p | w_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	8	| w_r | w_h | w_e | w_Q | w_K | w_e | w_h | w_r |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << endl;
	cout << "				YOUR SCORE IS --> " << user.get_level()    << endl;
}

void board_loss(User& user)
{
	cout << "		   a     b     c     d     e     f     g     h   " << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	1	| b_r | b_h | b_e | b_Q | b_K | b_e | b_h | b_r |" << endl;
	cout << "	 	+-----+-----+-----+-----+-----|-----+-----+-----+" << endl;
	cout << "	2	| b_p | b_p | b_p | b_p | b_p | b_p | b_p | b_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	3	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	4	|     |     |     | You | LOSE|  !  |     |     |" << endl;
	cout << "		+-----+-----+-----|-----+-----+-----+-----+-----+" << endl;
	cout << "	5	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	6	|     |     |     |     |     |     |     |     |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	7	| w_p | w_p | w_p | w_p | w_p | w_p | w_p | w_p |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << "	8	| w_r | w_h | w_e | w_Q | w_K | w_e | w_h | w_r |" << endl;
	cout << "		+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
	cout << endl;
	cout << "				YOUR SCORE IS --> " << user.get_level()    << endl;
}

void about()
{
	cout << endl;
	cout << "This is a Chess project written in C++ using OOP and its core concepts." << endl;
	cout << endl;
	cout << "Enjoy!" << endl;
	cout << "\nJuly 04, 2022" << endl; 
}

void license()
{
	
}

void error()
{
    cout << "If you have any problems or difficulties with the program, then write about it in a special discussion chat that is located inside the repository of this project." << endl;
}