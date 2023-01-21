//Programmer Name: Israel Showell
//Date Created: 1-16-23
//Project Name: How To Use Cout And Cin In C++.
//Project Purpose: Notes for students who need, or want a review of some C++ functions.



//This is one of the most common libaries in C++. This controls basic defintions like cout, cin and system.
#include <iostream>

//This tells the program that we are using a certain library for cout and cin. Without it, we would need to type 
//cout and cin in like this: std::cout << "Hello World"<< endl; Which would be tedious to repeatly keep doing.
using namespace std;


int main()
{
	//This is a variable. 
	//int tells us its an integer variable. 
	//"Number" is the name of the variable, and it's set value is 0.
	//All lines of code must end in a semi-colon. ;
	int Number = 0;

	//Cout tells the program what to print out.
	//"<<" is the proper way to tell the program what comes next.
	//After "<<", the words inside of the "   " will be printed out.
	//Endl, which stands for "end line", functions like an enter button.
	cout << "Hello World." << endl << ":)";

	//Cin tells the program to ask the user for an input.
	//Cin uses ">>" to tell the program what comes next instead of "<<".
	//The variable that will store our input is Number. 
	//We can only store integers in this variable, since that's how Number was declared.
	cin >> Number;


	//This stops the program from closing immediately so the user can read the output. 
	//Most people do not use this, and use other ways to do it, I just like it. :3
	system("PAUSE");
}