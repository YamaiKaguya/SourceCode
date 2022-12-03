#include <iostream>
#include <fstream> // For Database
#include <string>
#include <unistd.h>  // Sleep

#include <stdlib.h> //SYSTEM
#include <conio.h>
using namespace std;


	void Account();
	void Register();
	void Quiz();
	void QuizVer2();
	void Login();
	void Reset();

	int main () {
		bool Repeater = true;
		char Option;

	cout << "\n________________________________________________________________________________________________________________________\n\n";
	cout << "\n                                        Hello user! Welcome to my Simple Program\n";
	cout << "\n\n_____________________________________________________ Main Menu ________________________________________________________\n\n\n";
	cout << " Choices:\n\n";
	cout << " 1 - Account\n";
	cout << " 2 - Login\n";
	cout << " 3 - Register\n";
	cout << " 4 - Short Quiz\n";
	cout << " 5 - Reset Prog\n";
	cout << " 6 - Exit\n";

	cout << "\n User Input (Input only 1 character): ";
	cin >> Option;
	cout << endl;
	
	do {
		if (isdigit(Option) == true){
			Repeater = true;
//			cout << " Working";
		}
		else {
			Repeater = false;
			cout << " Enter a valid character: ";
			cin >> Option;
		}  
		
	}while (!Repeater);
	
	
	switch (Option) {
		
		case '1':
			Account();
			break;	
			
		case '2':
			Login ();	
			break;
		
		case '3':
			Register();
			break;
		
		case '4':
			Quiz();
			break;
		
		case '5':
			Reset();
			break;
		
		case '6':
			break;

		default:
		cout<< " \n Error!";
		
		sleep (1);
			cout << "\n\n This Program will Reset in";
			cout << endl << " 3";
			sleep (1);
			cout << endl << " 2";
			sleep (1);
			cout << endl << " 1";
			sleep (1);
			system("cls");
			main ();
	}
	
	system("cls");
	
	return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	void Account() {
	ifstream AccountVerification, DatabaseOutput, DatabaseQuizScore;
	int enter;
	int Verification;
	int Option;
	string Store, Store1, Store2, Store3;
	
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
	

	cout << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue.";
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
		cout << " Choices: \n\n 1 - Login  \n 2 - Register  \n 0 - Main Menu   \n\n User Input (Input only 1 character): ";
		cin >> Option;
		
		switch (Option) {
			
			case 1:
				Login();
			break;
			
			case 2:
				Register();
			break;
			
			case 0:
				system("cls");
				main ();
			break;
			
			default:
			cout << " Please enter a valid number";
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
		cin.ignore();
		
		cout << "\n\n    First name: "; 
		getline (cin,First);
		cout << " ______________________________________________________________________________________________________________________\n";

		cout << "                                                                                                                    ";
		cout << "        Middle name: ";
		cin >> Middle;
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    ";
		cout << "        Last name: ";
		cin >> Last;
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cin.ignore();
		cout << "                                                                                                                    \n";
		cout << "    Birthdate: ";
		getline(cin, Birth);
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    \n";
		cout << "    Gender: ";
		cin >> Sex;
		cout << "\n ______________________________________________________________________________________________________________________\n";
		cout << "                                                                                                                    \n";
		cout << "    Email: ";
		cin >> Email;

		cout << "\n\t\t\t\t\t\t\t\t\t\t   Please press Enter to Continue";
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
		
		DatabaseOutput << "Fullname: " << First << " " << Middle << " " << Last << endl 
			<< "Birthdate: "<< Birth << endl
			<< "Gender: " << Sex << endl
			<< "Email: " << Email << endl
			<< "Username: " << Username << endl 
			<< "Password: " << Pass << endl;
			 
		
		cout <<"\n\n\n\n\n\n\n\n\n\n\n\n";
		
		DatabaseAccounts << Username << " " << Pass;
		
		DatabaseOutput.close();
		DatabaseAccounts.close();
		
		cout << "\n\t\t\t\t\t\t\t\t\t\t   Press Enter to go to the Main Menu.";
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
	cout << "________________________________________________________________________________________________________________________\n\n";
	cout << " Do you wish to see your Score and Answers?";
	cout << "  YES - 1  NO - 0";
	cout << "\n Input: ";
	
	
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
				system("cls");	
			
				cout << "________________________________________________________________________________________________________________________";
				cout << "\n\n Edi Don't\n\n";
				sleep (2);
				cout << " Redirecting to Home tab in";
				sleep (1);
				cout << endl << " 3";
				sleep (1);
				cout << endl << " 2";
				sleep (1);
				cout << endl << " 1";
				sleep (1);
				system("cls");
				main ();
			break;	
					
			case '1':
				system("cls");
				cout << "________________________________________________________________________________________________________________________";
				cout << "\n\n Your Answers: \n\n";
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
				cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;
			
			
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
				system("cls");
				main();
				break;
		}
	
	}
	
	AccountVerification.close();
	
		cout << endl;
		cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPlease press Enter to go the main tab";
	enter = 1;
		while ( enter != 13){
			enter=getch();
		}
	system("cls");
	main ();	

};



void QuizVer2(){
	char CorrectAns [5]= {'A', 
					  'B', 
					  'C', 
				  	  'B', 
					  'B'};
	char UserAns [5];
	int Choices, Output;
		
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
	cout << "________________________________________________________________________________________________________________________\n\n";
	cout << " Do you wish to see your Score and Answers?";
	cout << "  YES - 1  NO - 0";
	cout << "\n Input: ";
	
	
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
				system("cls");	
			
				cout << "________________________________________________________________________________________________________________________";
				cout << "\n\n Edi Don't\n\n";
				sleep (2);
				cout << " Redirecting to Home tab in";
				sleep (1);
				cout << endl << " 3";
				sleep (1);
				cout << endl << " 2";
				sleep (1);
				cout << endl << " 1";
				sleep (1);
				system("cls");
				main ();
			break;	
					
			case '1':
				system("cls");
				cout << "________________________________________________________________________________________________________________________";
				cout << "\n\n Your Answers: \n\n";
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
				cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;
			
			
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
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to continue.";
		enter = 1;
			while ( enter != 13){
				enter=getch();
			}
		system("cls");
		main ();
		}
		
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   Press Enter to Continue.";
		enter = 1;
			while ( enter != 13){
				enter=getch();
			}
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n\n";
		cout << "                              After this, you'll be able to access your account information\n";
		cout << "\n\n______________________________________________________ LOG-IN _________________________________________________________\n\n\n";
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Please wait a moment...";
		sleep (5);
		
		system("cls");
		cout << "\n________________________________________________________________________________________________________________________\n\n\n";
		cout << "                              After this, you'll be able to access your account information\n";
		cout << "\n\n______________________________________________________ LOG-IN _________________________________________________________\n\n\n";
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n You Succesfully login your account! \t\t\t\t\t\t\t   Press Enter to continue.";
		sleep (2);
		
		Verification << 22;
		
		Accounts.close();
		Verification.close();
		enter = 1;
			while ( enter != 13){
				enter=getch();
			}
		system("cls");
		main ();
	
	}	
	
	
	
		void Reset(){
		ofstream Verification, QuizScore;	
		int enter;
		Verification.open("Account.Verification.text");
				
		if (!Verification.is_open()) {
			cout << "AccountVerification Error!";
		}
		
		QuizScore.open("Database.QuizScore.text");
				
		if (!QuizScore.is_open()) {
			cout << "QuizScore Error!";
		}
		
		Verification << 100;
		QuizScore << "NoRecord";
		
		Verification.close();
		QuizScore.close();
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n Plese wait a moment...";
			
		for (int x = 1; x <= 101; x+=1){
			system("cls");
			sleep(0.1);
				cout <<"\n________________________________________________________________________________________________________________________\n\n";
				cout << "\n                                        Hello user! Welcome to my Simple Program\n";
				cout << "\n\n_____________________________________________________ Main Menu ________________________________________________________\n\n\n";
				cout << " Choices:\n\n";
				cout << " 1 - Account\n";
				cout << " 2 - Login\n";
				cout << " 3 - Register\n";
				cout << " 4 - Short Quiz\n";
				cout << " 5 - Reset Prog\n";
				cout << " 6 - Exit\n";
			cout << "\n\n\n\n\n\n\n\n\n\n " << x <<"% Complete!";
		}
		
		cout << "    Loading Complete";
		sleep(1);
		
		system("cls");
		main ();
		
		}
