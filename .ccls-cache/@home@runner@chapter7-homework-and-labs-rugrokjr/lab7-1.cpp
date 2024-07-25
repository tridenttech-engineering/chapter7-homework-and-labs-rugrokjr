//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Kendra Ruggiero> on <7-24-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
int day = 0;
int totaltexts = 0;
int dailytexts = 0;
double average = 0.0;

for (day = 1; day <= 7 ; day += 1)
    { 
    cout << "How many tects did you send on day " << day << "? ";
    cin >> dailytexts;
    totaltexts += dailytexts;
    } //end for

average = static_cast<double>(totaltexts) / (day - 1);
cout << fixed << setprecision(1);
    cout << "Text sent is approximately: " << average << "a day" << endl;
    return 0;
}   //end of main function
make clean
make lab7-1
./lab7-1