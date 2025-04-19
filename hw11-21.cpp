//Introductory21.cpp - Displays the average stock price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

using namespace std;

double getAverage(double prices[], int numElements);

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;

	average = getAverage(prices, 10);

	cout << fixed << setprecision(1);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

double getAverage(double prices[], int numElements)
{
	double total = 0.0;
	for (int x = 0; x < numElements; x += 1) {
		total += prices[x];
}
return total/numElements;
}
	
