//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
double bill = 0.0;
double total = 0.0;
double average = 0.0;
int months = 0;

cout << "Enter your electric bill for the first month: ";
cin >> bill; 
	while (bill >= 0.0)
	{ 
		total += bill;
		months += 1;
		cout << "Bill for month " << months << ": ";
		 cin >> bill;
	} // end while

	if (months >= 1)
	{ 
		average= total / months;
		cout << fixed << setprecision(2);
		cout << "Average electric bill for " << months << "months: $" << average << endl;
	}
	else
		cout << "No electric bills entered." << endl;
	// end if 
	

	return 0;
}	//end of main function
