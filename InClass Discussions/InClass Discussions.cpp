#include <iostream>
// You don't want to have spaghetti code
//We are going to be working with .numbers as a decimal for this grade calculator, I think Float would be better for this use case.
int main() {
	int total_course_points = 0;
	float A_points = 0.00;
	float B_points = 0.00;
	float C_points = 0.00;
	float D_points = 0.00;
	char response_o1 = 1; // I can't load this as a string as I would in Python, maybe too ahead, will NOT attempt, put as Integer instead as that seems to work.
	//The reason we don't have F points would be if your under a D, then it'll be F, so if it's less than 261 then it'll be an F
	//I know a bit of python form high school, I'd like to create a check to do a check for any negative numbers, however I'm unsure of what that'd do.
	//I'm going to do it anyways, to check and see what happens.
	//I just checked to see what happens, and it looks like it didn't do anything, it took the negative number, which is invalid, maybe I should create a safety check.
	//I don't know about creating a safety check, I won't do so as this is NOT python and I really want to learn, I'm very unsure with C++
	std::cout << "\nWelcome to System Grade Calculator for COSC 1436\n\n";
	std::cout << "Grading Scheme\n\n";
	std::cout << "Please input the Total Points Possible: ";
	std::cin >> total_course_points;

	std::cout << "\nPlease input the Minimum Points for an 'A': ";
	std::cin >> A_points;
	std::cout << "\nPlease input the Minimum Points for an 'B': ";
	std::cin >> B_points;
	std::cout << "\nPlease input the Minimum Points for an 'C': ";
	std::cin >> C_points;
	std::cout << "\nPlease input the Minimum Points for an 'D': ";
	std::cin >> D_points;
	std::cout << "\n\nThe Grading Scheme You Input\n\n";
	std::cout << "Total Points Possible in the Course: " << total_course_points << '\n';
	std::cout << "Points needed for an 'A': " << A_points << '\n';
	std::cout << "Points needed for a 'B': " << B_points << '\n';
	std::cout << "Points needed for a 'C': " << C_points << '\n';
	std::cout << "Points needed for a 'D': " << D_points << '\n';
	//Me Testing Random Stuff, If I break something it's on me.
	std::cout << "\nPlease Confirm This Information is Correct (Y/N)?\n~$ "; // I added the ~$ as it reminds me of what a terminal normally shows ^_^
	std::cin >> response_o1;
	std::cout << "\n\n\nDear User, \n\nI am still learning C++, as such this function hasn't been developed,\ntherefore your input of " << response_o1 << ",\n\nHAS BEEN REJECTED,\n\nWhile I do value your input, we just don't know how to work with it,\nThanks Again for your time and effort for your input and, I hope you have a nice day!\n\nBest Regards,\n\n\t-Your beginner C++ Student\n\n\n\n\n";
	return 0;
}

