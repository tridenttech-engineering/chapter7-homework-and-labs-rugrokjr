//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int day = 1;
int totaltexts = 0;
int dailytexts = 0;
double average = 0.0;

while (day <=  7)
    { 
     cout << "How many tects did you send on day " << day << "? ";
     cin >> dailytexts;
     totaltexts += dailytexts;
    day += 1;
      } //end while

average = static_cast<double>(totaltexts) / (day - 1);
cout << fixed << setprecision(1);
cout << "Text sent is approximately: " << average << "a day" << endl;
return 0;
}   //end of main function
make clean
make lab7-3
./lab7-3