#include <iostream>
#include <fstream> // For Database
#include <string>
#include <unistd.h>  // Sleep

#include <stdlib.h> //SYSTEM
#include <conio.h>
using namespace std;

// login user, login pass, register, quiz,       (cin.ignore)

	void EditAccountInfo();	
	
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	void FirstOption();
	
	// FIRST OPTION
	void Login();
	void Register();
	void Information();
	void Logout();
	
	void SecondOption();
		
	// SECOND OPTION
	void UserName();
	void UserPass();
	
	// THIRD 
	void Quiz();
	void QuizVer2();
	
	// FOURTH
	
	int main () {
		system("cls");
		bool Repeater = true;
		string Option;
		fstream DatabaseOutput, DatabseVerification;
		string store, name; 
		int verification;
		
		DatabaseOutput.open("Database.Output.text");
		
		if (!DatabaseOutput.is_open()){
			cout << "DatabaseOutput Error!";
		}
		
				
		DatabseVerification.open("Account.Verification.text");
		
		if (!DatabseVerification.is_open()){
			cout << "DatabaseVerification Error!";
		}
		
		DatabseVerification >> verification; 
		DatabaseOutput >> store >> name;
		
	cout << "\n________________________________________________________________________________________________________________________\n\n";
	cout << "\n                                        Hello ";
	
		if (verification == 22) {
			cout << name;
		}
		else {
			cout << "User!";
		}
		
	cout << ", Welcome to my Simple Program\n";
	cout << "\n\n_____________________________________________________ MAIN MENU ________________________________________________________\n";
	cout << "\n Choices:\n\n";
	cout << " 1. Account:\n";
	cout << "    - Login\n";
	cout << "    - Register\n";
	cout << "    - Information\n";
	cout << "    - Logout\n\n";

	cout << " 2. Forgot:\n";
	cout << "    - Username\n";
	cout << "    - Password\n\n";
	
	cout << " 3. Short Quiz\n\n";

	cout << " 0. Exit\n\n";

	cout << "\n\n\n Enter: ";
	getline(cin,Option);
	cout << endl;

/*
	do {
		if (isdigit(Option) == true){
			Repeater = true;
			cout << " Working";
		}
		else {
			Repeater = false;
			cout << " Enter a valid character: ";
			cin >> Option;
		}  
		
	}while (!Repeater);
*/
	
	
		
		if (Option == "0"){
			system("cls");
			return 0;
		}
		
		else if (Option == "1"){
			FirstOption();
		}
		
		else if (Option == "2"){
			SecondOption();
		}
		
		else if (Option == "3"){
			Quiz();
		}

		else {
		
			system("cls");
			cout << "\n________________________________________________________________________________________________________________________\n\n";
			cout << "\n                                        Hello ";
	
		if (verification == 22) {
			cout << name;
		}
		else {
			cout << "User!";
		}
		
	cout << ", Welcome to my Simple Program\n";
	cout << "\n\n_____________________________________________________ MAIN MENU ________________________________________________________\n";
	cout << "\n Choices:\n\n";
	cout << " 1. Account:\n";
	cout << "    - Login\n";
	cout << "    - Register\n";
	cout << "    - Information\n";
	cout << "    - Logout\n\n";

	cout << " 2. Forgot:\n";
	cout << "    - Username\n";
	cout << "    - Password\n\n";
	
	cout << " 3. Short Quiz\n\n";

	cout << " 0. Exit\n\n";

	cout << "\n\n\n Error! Wrong Input!";
		
		sleep (1);
		system("cls");
		main ();
	}	
		
	DatabaseOutput.close();
	DatabseVerification.close();
}			
	

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*	void EditAccountInfo() {
		

		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	}
*/
	
	
	void Information() {
		
	ifstream AccountVerification, DatabaseOutput, DatabaseQuizScore;
	int enter;
	int Verification;
	string Option;
//	string Store, Store1, Store2, Store3;
	
	system("cls");
	
		AccountVerification.open("Account.Verification.text");

	if (!AccountVerification.is_open()) {
		cout << "AccountVerification Error!";
	}
		DatabaseOutput.open("Database.Output.text");

	if (!DatabaseOutput.is_open()) {
		cout << "DatabaseOutput Error!";
	}
		DatabaseQuizScore.open("Database.QuizScore.text");

	if (!DatabaseQuizScore.is_open()) {
		cout << "QuizScore Error!";
	}
	
	AccountVerification >> Verification;
	
	if (Verification == 22){
		cout <<"\n_________________________________________________ Account Information __________________________________________________\n\n\n\n"<< endl << endl;

	string Output;
	while (getline(DatabaseOutput, Output)){
		cout << Output << endl;
	}
/*
	string infor[]= {	"\n Fullname    :" ,
					"\n Birthdate   :",
			  		"\n Gender      :",
			 		"\n E-Mail      :",
					"\n Quiz Score  :",
					"\n\n Username    :",
					"\n Password    :"};
					
	for (int j = 0; j <= 1; j++){
		
		for (int k = 0; k < 2; k++){
		
			while ( k != 1){
				DatabaseOutput >> Store >> Store1 >> Store2 >> Store3;
			
//		if (Infile2.eof()) break;

				cout << " " << infor[j] << " " << Store1 << " " << Store2 << " "<< Store3 << endl;
				break;
			

			}
		}
	}
	
	for (int j = 2; j <= 3; j++){
			while (true){
				DatabaseOutput >> Store >> Store1;
			
				cout << " " << infor[j] << " " << Store1 << endl;
				break;
			}
	}
	
	for (int j = 4; j <= 4; j++){
			while (true){
				DatabaseQuizScore >> Store1;
			
				cout << " " << infor[j] << " " << Store1 << endl;
				break;
			}
	}
	
	for (int j = 5; j <= 6; j++){
			while (true){
				DatabaseOutput >> Store >> Store1;
			
				cout << " " << infor[j] << " " << Store1 << endl;
				break;
			}
	}
*/

	cout << endl << endl << endl << endl << endl << endl;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue.";
		while ( enter != 13){
			enter=getch();
		}
	
	system ("cls");
	main ();	
	}
	else {
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                              You do not have an account, Please register or login first.\n";
		cout << "\n\n_____________________________________________________ ACCOUNT __________________________________________________________\n\n\n";
		cout << " Choices: \n\n 1 - Login  \n 2 - Register  \n 0 - Main Menu   \n\n\n\n\n\n\n\n\n\n\n\n\n\n Enter: ";
		getline(cin, Option);
		
			
			if ( Option == "1"){
				Login();
			}
			
			else if ( Option == "2"){
				Register();
			}
			
			else if ( Option == "0"){
				system("cls");
				main ();
			}
			
			else {
				
			system("cls");
			cout << "\n________________________________________________________________________________________________________________________\n\n";
			cout << "\n                              You do not have an account, Please register or login first.\n";
			cout << "\n\n_____________________________________________________ ACCOUNT __________________________________________________________\n\n\n";
			cout << " Choices: \n\n 1 - Login  \n 2 - Register  \n 0 - Main Menu   \n\n\n\n\n\n\n\n\n\n\n\n\n\n Error! Invalid Input!";
			sleep(1);
			Information();
			}
		
	}
	
	AccountVerification.close();
	DatabaseOutput.close();
	DatabaseQuizScore.close();
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	void Register() {
		
		system("cls");
		int Option = 0;
		int enter;
		string First, Middle, Last, Birth, Sex, Email;
		string Username, Pass;
		ofstream DatabaseOutput, DatabaseAccounts;
	
		cout <<"\n____________________________________ You are now Regestering for your new Account! _____________________________________\n";
		cout <<"                                        Please enter the necessary information\n\n";
		
		DatabaseOutput.open("Database.Output.text");

		if (!DatabaseOutput.is_open()) {
		cout << "DatabaseOutput Error!";
		}
		
		DatabaseAccounts.open("Database.Accounts.text");

		if (!DatabaseAccounts.is_open()) {
		cout << "DatabaseAccounts Error!";
		}
		
		
		cout << "\n\n    First name: "; 
		cin >> ws;
		getline (cin,First);
		cout << " ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    ";
		cout << "        Middle name: ";
		cin >> ws;
		getline (cin,Middle);
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    ";
		cout << "        Last name: ";
		cin >> ws;
		getline (cin, Last);
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    \n";
		cout << "    Birthdate: ";
		cin >> ws;
		getline (cin, Birth);
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    \n";
		cout << "    Gender: ";
		cin >> ws;
		getline (cin,Sex);
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    \n";
		cout << "    Email: ";
		cin >> ws;
		getline (cin,Email);

		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to Continue";
		enter = 1;
			while ( enter != 13){
				enter=getch();
		}

		system("cls");
		cout <<"\n____________________________________ You are now Regestering for your new Account! _____________________________________\n";
		cout <<"                                        Please enter the necessary information\n\n";
		
		
		
		cout << "\n\n\n\t\t\t\t\t  _________________________________\n";	
		cout << "\t\t\t\t\t |                                 |\n";
		cout << "\t\t\t\t\t | Username: ";
		cin >> Username;
		cout << "\t\t\t\t\t |_________________________________|\n";
		
		cout << "\t\t\t\t\t  _________________________________\n";	
		cout << "\t\t\t\t\t |                                 |\n";
		cout << "\t\t\t\t\t | Password: ";
		cin >> Pass;
		cout << "\t\t\t\t\t |_________________________________|\n";
		
		DatabaseOutput 
			<< " Fullname:   " << First << " " << Middle << " " << Last << endl << endl
			<< " Birthdate:  "<< Birth << endl << endl
			<< " Gender:     " << Sex << endl << endl 
			<< " Email:      " << Email << endl << endl << endl
			<< " Username:   " << Username << endl << endl
			<< " Password:   " << Pass << endl << endl;
			 
		
		cout <<"\n\n\n\n\n\n\n\n\n\n\n\n";
		
		DatabaseAccounts << Username << " " << Pass;
		
		DatabaseOutput.close();
		DatabaseAccounts.close();
		
		cout << "\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue";
		cin.ignore();
		enter = 1;
			while ( enter != 13){
				enter=getch();
		}
		sleep(1);
		system("cls");
		main();
};
	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	
	
	void Quiz() {
		
	ifstream AccountVerification;
	ofstream QuizOutput;
	char CorrectAns [5]= {'A', 
					  'B', 
					  'C', 
				  	  'B', 
					  'B'};
	char UserAns [5];
	int Choices, Verification, Output;
		
	int score, mistake, Option;
	score = mistake  = Option = 0;
	
	int enter = 1;
	int x = 0;
	char ExamOption;
	int Numbering = 1;
	string questions [5]{" 1. What do you call these: int, float, double?         A. Data Type \t B. Hatdog \t C. Chicken", 
					 " 2. How do you describe Frewen?                         A. Letter C. \t B. Pogi \t C. Letter B.", 
					 " 3. What is C++?                                        A. Peanuts \t B. Coconut \t C. Programing Language",
					 " 4. Is HTML a programing language?                      A. Yes \t         B. No \t         C. I Don't Know", 
					 " 5. What is the English word for tama?                  A. False \t B. True \t C. ayoko nga"};
					 
	AccountVerification.open("Account.Verification.text");
	
	if (!AccountVerification.is_open()) {
		cout << "Infile Error!";
	}
	
	AccountVerification >> Verification;

if (Verification == 22) {
		
	
	system("cls");
	cout << "________________________________________________________________________________________________________________________\n";
	cout << endl << " \t\t\t\tEnter the correct answer (Press Enter to Continue)";
	
		while ( enter != 13){
			enter=getch();
		}
	
	cout << endl << endl << endl;
	
		for ( int y = 0; y < 5; y++) {
		cout << endl << questions [y] << endl << endl <<" Answer: ";
			
				while (true) {
					
				UserAns[y]=getch();
				
						if (UserAns[y] == 'a'){
							UserAns[y]='A';
							cout << 'A' << endl;
							
							break;
						}
						if (UserAns[y] == 'b'){
							UserAns[y]='B';
							cout << 'B' << endl;
							break;
						}
						if (UserAns[y] == 'c'){
							UserAns[y]='C';
							cout << 'C' << endl;
							break;
						}
						else {
					
						}
					
				}
		}

/*
			while (UserAns [y] != 97 || UserAns [y] != 98 || UserAns [y] != 99){
				cout << endl << UserAns [y];
				UserAns[y]=getch();
*/		
		

	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue";
	enter = 1;
		while ( enter != 13){
			enter=getch();
		}
	
	system("cls");
	cout << "\n________________________________________________________________________________________________________________________\n\n";
	cout << "\n                                       Do you wish to see your Score and Answers?.\n";
	cout << "\n\n_____________________________________________________ RESULT __________________________________________________________\n\n\n";
	cout << " Choices: \n\n 1 - Yes \n 0 - No";
	cout << "\n\n User input: ";
	
	
		while (true){
			
			ExamOption=getch();
				
				if (ExamOption == '0'){
					cout << "0";
					break;
				}
				if (ExamOption == '1'){
					cout << "1";
					break;
				}
				else {
					
				}
		}

		switch (ExamOption) {
		
			case '0':
				
/*
				system("cls");	
				cout << "________________________________________________________________________________________________________________________";
				cout << "\n\n Edi Don't\n\n";
				sleep (2);
				cout << " Redirecting to Main Menu in";
				sleep (1);
				cout << endl << " 3";
				sleep (1);
				cout << endl << " 2";
				sleep (1);
				cout << endl << " 1";
				sleep (1);
*/

				system("cls");
				main ();
			break;	
					
			case '1':
				system("cls");
				cout << "\n________________________________________________________________________________________________________________________\n\n";
				cout << "\n                                                   Q U I Z   R E S U L T\n";
				cout << "\n\n________________________________________________________________________________________________________________________\n";
				cout << "\n Your Answers: \n\n";
				
				for (int m = 0; m < 5; m++) {
					if ( UserAns [m] == CorrectAns [m] ) {
						cout << " " << Numbering <<". " << UserAns[m] <<" - Correct   " <<endl;
						Numbering++;
						x++;
					}
				else {
					cout << " " << Numbering <<". " << UserAns[m] <<" - Wrong   " <<endl;
				}
				
				} 
			
				for ( int z = 0; z < 5; z++ ) {
					if (CorrectAns [z] == UserAns [z]) {
						score++;
					} 
					else {
					}
				}
				
				cout << "\n With the score of "<< score << "/5";
				cout << endl<< endl;
			
			
				int Numbering = 1;
				
				cout << " Correct Answers:\n";
			
				for (int o = 0; o < 5; o++) {
	
					if (UserAns [o] == CorrectAns [o]) {
						cout << " " << Numbering <<". " << CorrectAns[o] << endl;
						Numbering++;
					}
				
					else {
						cout << " " << Numbering <<". " << CorrectAns[o] << endl;
						Numbering++;
					}
				}
		}
		
		QuizOutput.open("Database.QuizScore.text");

		if (!QuizOutput.is_open()) {
			cout << "QuizOutput Error!";
		}

		QuizOutput << score << "/5";
		QuizOutput.close();
}

	else {
	
	system("cls");
	cout << "________________________________________________________________________________________________________________________\n";
	cout << "\n It seems that you don't have an account to record your score, do you still wish to continue?\n\n";
	cout << " 1 - Yes\n 2 - Login\n 3 - Register\n 0 - Main Menu\n\n";
	cout << " User Input: ";
	cin >> Choices;
	
		switch (Choices){
			case 1:
				system("cls");
				QuizVer2();
				break;
			case 2:
				Login();
			case 3:
				Register();
			case 0:
				cin.ignore();
				system("cls");
				main();
				break;
		}
	
	}

	AccountVerification.close();
	
		cout << endl;
		cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue.";
	enter = 1;
		while ( enter != 13){
			enter=getch();
		}
	system("cls");
	main ();	

};



void QuizVer2(){
	
	char CorrectAns [5]= {'A', 
					  'A', 
					  'A', 
				  	  'A', 
					  'B'};
	char UserAns [5];
	int Choices, Output;
		
	int score, mistake, Option;
	score = mistake  = Option = 0;
	
	int enter = 1;
	int x = 0;
	char ExamOption;
	int Numbering = 1;
	string questions [5]{" 1. Array indexes start with?                          A. 0 \t          B. 1\t           C. 9", 
					 " 5. Which keyword is used to create a class in C++?    A. class \t  B. class()\t   C. class();", 
					 " 2. How do you call a function in C++?                 A. FuncName();\t  B. VarName();\t   C. function(); ",
					 " 4. Which statement is used to stop a loop?            A. break \t  B. linebreak \t   C. continue", 
					 " 3. How do you create a reference variable             A. * \t          B. &     \t   C. %\n    of an existing variable?"};
					 
	system("cls");
	cout << "________________________________________________________________________________________________________________________\n";
	cout << endl << " \t\t\t\tEnter the correct answer (Press Enter to Continue)";
	
		while ( enter != 13){
			enter=getch();
		}
	
	cout << endl << endl << endl;
	
		for ( int y = 0; y < 5; y++) {
		cout << endl << questions [y] << endl << endl <<" Answer: ";
			
				while (true) {
					
				UserAns[y]=getch();
				
						if (UserAns[y] == 'a'){
							UserAns[y]='A';
							cout << 'A' << endl;
							
							break;
						}
						if (UserAns[y] == 'b'){
							UserAns[y]='B';
							cout << 'B' << endl;
							break;
						}
						if (UserAns[y] == 'c'){
							UserAns[y]='C';
							cout << 'C' << endl;
							break;
						}
						else {
					
						}
					
				}
		}
		
//			while (UserAns [y] != 97 || UserAns [y] != 98 || UserAns [y] != 99){
//				cout << endl << UserAns [y];
//				UserAns[y]=getch();
//			
		

	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue";
	enter = 1;
		while ( enter != 13){
			enter=getch();
		}
	
	system("cls");
	cout << "\n________________________________________________________________________________________________________________________\n\n";
	cout << "\n                                       Do you wish to see your Score and Answers?.\n";
	cout << "\n\n_____________________________________________________ RESULT __________________________________________________________\n\n\n";
	cout << " Choices: \n\n 1 - Yes \n 0 - No";
	cout << "\n\n User input: ";
	
	
		while (true){
			
			ExamOption=getch();
				
				if (ExamOption == '0'){
					cout << "0";
					break;
				}
				if (ExamOption == '1'){
					cout << "1";
					break;
				}
				else {
					
				}
		}

		switch (ExamOption) {
		
			case '0':
				
/*
				system("cls");	
				cout << "________________________________________________________________________________________________________________________";
				cout << "\n\n Edi Don't\n\n";
				sleep (2);
				cout << " Redirecting to Main Menu in";
				sleep (1);
				cout << endl << " 3";
				sleep (1);
				cout << endl << " 2";
				sleep (1);
				cout << endl << " 1";
				sleep (1);
*/

				cin.ignore();
				system("cls");
				main ();
			break;	
					
			case '1':
				system("cls");
				cout << "\n________________________________________________________________________________________________________________________\n\n";
				cout << "\n                                                   Q U I Z   R E S U L T\n";
				cout << "\n\n________________________________________________________________________________________________________________________\n";
				cout << "\n Your Answers: \n\n";
				
				for (int m = 0; m < 5; m++) {
					if ( UserAns [m] == CorrectAns [m] ) {
						cout << " " << Numbering <<". " << UserAns[m] <<" - Correct   " <<endl;
						Numbering++;
						x++;
					}
				else {
					cout << " " << Numbering <<". " << UserAns[m] <<" - Wrong   " <<endl;
				}
				
				} 
			
				for ( int z = 0; z < 5; z++ ) {
					if (CorrectAns [z] == UserAns [z]) {
						score++;
					} 
					else {
					}
				}
				
				cout << "\n With the score of "<< score << "/5\n\n";
	
			
				int Numbering = 1;
				
				cout << " Correct Answers:\n\n";
			
				for (int o = 0; o < 5; o++) {
	
					if (UserAns [o] == CorrectAns [o]) {
						cout << " " << Numbering <<". " << CorrectAns[o] << endl;
						Numbering++;
					}
				
					else {
						cout << " " << Numbering <<". " << CorrectAns[o] << endl;
						Numbering++;
					}
				}
				
				cin.ignore(); // don't know
		}
}



	void Login(){
		
		string Username, UsernameChecker, Password, PasswordChecker;
		int enter;
		ifstream Accounts;
		ofstream Verification;
		
		Accounts.open("Database.Accounts.text");
				
		if (!Accounts.is_open()) {
			cout << "DatabaseUser Error!";
		}

		
		Verification.open("Account.Verification.text");
				
		if (!Verification.is_open()) {
			cout << "Verification Error!";
		}
		
		system ("cls");
		cout << "\n_______________________________________________________ LOG-IN _________________________________________________________\n\n\n\n\n\n\n\n";

		cout << "\t\t\t\t\t  _________________________________\n";	
		cout << "\t\t\t\t\t |                                 |\n";
		cout << "\t\t\t\t\t | Username: ";
		cin >> Username;
		cout << "\t\t\t\t\t |_________________________________|\n";
		
		Accounts >> UsernameChecker;
		
		if (Username != UsernameChecker) {
			cout << "\n\t\t\t       Wrong Username. make sure you enter the right username.";
			cin.ignore();
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue.";
		enter = 1;
			while ( enter != 13){
				enter=getch();
		}
		system("cls");
		main ();	
		}
		
		cout << "\t\t\t\t\t  _________________________________\n";	
		cout << "\t\t\t\t\t |                                 |\n";
		cout << "\t\t\t\t\t | Password: ";
		cin >> Password;
		cout << "\t\t\t\t\t |_________________________________|\n";
		
		Accounts >> PasswordChecker;
		
		if (Password != PasswordChecker) {
			cout << "\n\t\t\t       Wrong Password. make sure you enter the right password.";
			cin.ignore();
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue.";
		enter = 1;
			while ( enter != 13){
				enter=getch();
			}
		system("cls");
		main ();
		}
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to Continue.";
		enter = 1;
			while ( enter != 13){
				enter=getch();
			}
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n\n";
		cout << "                              After this, you'll be able to access your account informations\n";
		cout << "\n\n______________________________________________________ LOG-IN _________________________________________________________\n\n\n";
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Please wait a moment...";
		sleep (3);
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n\n";
		cout << "                              After this, you'll be able to access your account information\n";
		cout << "\n\n______________________________________________________ LOG-IN _________________________________________________________\n\n\n";
		cin.ignore();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n You Succesfully logged in your account! \t\t\t\t\t\t   Press Enter to continue.";
		
		Verification << 22;
		
		Accounts.close();
		Verification.close();
		enter = 1;
			while ( enter != 13){
				enter=getch();
			}
		system("cls");
		main();
		sleep(1);
	}	
	
//                           			                                                    LOG OUT
	
	void Logout(){
		
		ifstream AccountVerification;
		ofstream Verification, QuizScore;	
		string enter, Option;
		int Verification1;
		
		Verification.open("Account.Verification.text");
				
		if (!Verification.is_open()) {
			cout << "AccountVerification Error!";
		}
		
		QuizScore.open("Database.QuizScore.text");
				
		if (!QuizScore.is_open()) {
			cout << "QuizScore Error!";
		}
		
		AccountVerification.open("Account.Verification.text");

		if (!AccountVerification.is_open()) {
		cout << "AccountVerification Error!";
		}
		
		AccountVerification >> Verification1;
		
		if (Verification1 == 22) {
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n\n";
		cout << "                                     Are you sure you want to logout your account?\n";
		cout << "\n\n________________________________________________________________________________________________________________________\n\n";
		cout << " Choices:\n\n 1 - Yes\n 2 - No\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Enter: ";
		getline(cin, enter);
		
		if ( enter == "1" ){
			
			Verification << 100;
			QuizScore << "NoRecord";
			main();
		}
		
		else if ( enter == "2"){
			main();
		}
		
		else {
			
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n\n";
		cout << "                                     Are you sure you want to logout your account?\n";
		cout << "\n\n________________________________________________________________________________________________________________________\n\n";
		cout << " Choices:\n\n 1 - Yes\n 2 - No\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " Error! Wrong input!";
		sleep(1);
		Logout();
		}
				cin.ignore();
		
		
		Verification.close();
		QuizScore.close();
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n Plese wait a moment...";
		}
		
		else {
			
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                              You do not have an account, Please register or login first.\n";
		cout << "\n\n_____________________________________________________ ACCOUNT __________________________________________________________\n\n\n";
		cout << " Choices: \n\n 1 - Login  \n 2 - Register  \n 0 - Main Menu   \n\n\n\n\n\n\n\n\n\n\n\n\n\n Enter: ";
		getline(cin, Option);
		
			
			if ( Option == "1"){
				Login();
			}
			
			else if ( Option == "2"){
				Register();
			}
			
			else if ( Option == "0"){
				system("cls");
				main ();
			}
			
			else {
				
			system("cls");
			cout << "\n________________________________________________________________________________________________________________________\n\n";
			cout << "\n                              You do not have an account, Please register or login first.\n";
			cout << "\n\n_____________________________________________________ ACCOUNT __________________________________________________________\n\n\n";
			cout << " Choices: \n\n 1 - Login  \n 2 - Register  \n 0 - Main Menu   \n\n\n\n\n\n\n\n\n\n\n\n\n\n Error! Invalid Input!";
			sleep(1);
			Information();
			}
		}
			
		
		
}
		
		
	void UserName() {
		
		ifstream DatabseAccountIn;
		ofstream DatabaseAccounts;
		string Username;
		string Store, Password;
		
		DatabaseAccounts.open("Database.Accounts.text");
		
		if (!DatabaseAccounts.is_open()){
			cout << "DatabaseAccounts Error!";
		}
		
				
		DatabseAccountIn.open("Database.Accounts.text");
		
		if (!DatabseAccountIn.is_open()){
			cout << "DatabseAccountIn Error!";
		}
		
		DatabseAccountIn >> Store >> Password;
		cout << Store << Password << "dsadsdsa";
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                                         PLEASE ENTER YOUR NEW USERNAME\n";
		cout << "\n\n_________________________________________________ FORGOT USERNAME ______________________________________________________\n";
		
		cout << "\n\n\n\n\n\n\t\t\t\t\t  _________________________________\n";	
		cout << "\t\t\t\t\t |                                 |\n";
		cout << "\t\t\t\t\t | Username: ";
		cin >> Username;
		cout << "\t\t\t\t\t |_________________________________|\n";
	
		DatabaseAccounts << Username << " " << Password;
		DatabaseAccounts.close();
		DatabseAccountIn.close();
		int enter;
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue";
		
		cin.ignore();
		enter = 1;
			while ( enter != 13){
				enter=getch();
		}
		main();
}
	void UserPass() {
		
		ofstream DatabaseAccounts;
		string Password;
		
		DatabaseAccounts.open("Database.Accounts.text");
		
		if (!DatabaseAccounts.is_open()){
			cout << "DatabaseAccounts Error!";
		}
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                                         PLEASE ENTER YOUR NEW PASSWORD\n";
		cout << "\n\n_________________________________________________ FORGOT PASSWORD ______________________________________________________\n";
		
		cout << "\n\n\n\n\n\n\t\t\t\t\t  _________________________________\n";	
		cout << "\t\t\t\t\t |                                 |\n";
		cout << "\t\t\t\t\t | Password: ";
		cin >> Password;
		cout << "\t\t\t\t\t |_________________________________|\n";
	
		DatabaseAccounts << endl << Password;
		
		int enter;
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue";
		
		cin.ignore();
		enter = 1;
			while ( enter != 13){
				enter=getch();
		}
		main();
}
	
//                           			                                                    FIRST OPTION
	
	void FirstOption(){
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                                         PLEASE CHOOSE FROM THE GIVEN CHOICES\n";
		cout << "\n\n___________________________________________________ ACCOUNT MENU _______________________________________________________\n";
		cout << "\n Choices:\n\n";
		cout << " 1. Login\n";
		cout << " 2. Register\n";
		cout << " 3. Information\n";
		cout << " 4. Logout\n";
		cout << " 0. Main Menu\n\n";
	
	string Choices;
	
		cout << "\n\n\n\n\n\n\n\n\n\n\n Enter: ";
		getline (cin, Choices);  
	
		if (Choices == "1") {
			Login();
		}
			
		else if (Choices == "2") {
			Register();
		}
			
		else if (Choices == "3") {
			Information ();	
		}
			
		else if (Choices == "4") {
			Logout();
		}
			
		else if (Choices == "0") {
			main();
		}
		
		else {
			
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                                         PLEASE CHOOSE FROM THE GIVEN CHOICES\n";
		cout << "\n\n___________________________________________________ ACCOUNT MENU _______________________________________________________\n";
		cout << "\n Choices:\n\n";
		cout << " 1. Login\n";
		cout << " 2. Register\n";
		cout << " 3. Information\n";
		cout << " 4. Logout\n";
		cout << " 0. Main Menu\n\n";
	
		cout << "\n\n\n\n\n\n\n\n\n\n\n Error! Wrong Input!";
		sleep(1);
		FirstOption();
			
		}
	}


//                       	                       		                                 SECOND OPTION

	void SecondOption(){
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n";
		cout << "\n                                         Please choose from the given choises\n";
		cout << "\n\n___________________________________________________ FORGOT MENU _______________________________________________________\n";
		cout << "\n Choices:\n\n";
		cout << " 1. Username\n";
		cout << " 2. Password\n";
		cout << " 0. Main Menu\n\n";
	
	char Choices;
	
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n Enter: ";
		cin >> Choices;
	
	switch (Choices) {
		
		case '1':
			UserName();
			break;
			
		case '2':
			UserPass();
			break;	
			
		case '0':
			main();
		break;
	}
	
}
