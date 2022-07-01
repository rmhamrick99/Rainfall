#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


void output(int totalMonths, double totalRain);
void process(int years);

int main()
{
	int years;

	cout << "This program will calculate average rainfall." << endl;
	cout << "How many years?" << endl;
	cin >> years;
	process(years);
	return 0;
}

void output(int totalMonths, double totalRain)
{
	double averageRain;

	cout << "Total numbers of Months: " << totalMonths << endl;
	cout << "Total inches of rainfall: " << totalRain << endl;
	averageRain = totalRain / totalMonths;
	cout << "Average rainfall per month: " << averageRain << endl;
	system("pause");
}

void process(int years)
{
	double totalRain;
	int count;
	double rain;
	int totalMonths;
	int months;

	totalMonths = 0;
	totalRain = 0;
	for (count = 1; count <= years; count++)
	{
		for (months = 1; months <= 12; months++)
		{
			cout << "How many inches of rain for this month?" << endl;
			cin >> rain;
			totalRain = totalRain + rain;
			totalMonths = totalMonths + 1;
		}
	}
	output(totalMonths, totalRain);
}

