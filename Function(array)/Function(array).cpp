#include <iostream>
using namespace std;

//Task1

int Date[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int LeapDate[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int Month = 12;

int LeapYear(int year)
{
    return year / 4;
}

int NoLeapYear(int year)
{
	return year - LeapYear(year);
}

int LeapDays(int year)
{
	int sum = 0;
	for (int i = 0; i < Month; i++)
	{
		sum += LeapDate[i];
	}
	return sum = sum * (LeapYear(year)) - 1;
}

int NoLeapDays(int year)
{
	int sum = 0;
	for (int i = 0; i < Month; i++)
	{
		sum += Date[i];
	}
	return sum = sum * (NoLeapYear(year)) - 1;
}

int MonthInDays(int year, int month)
{
	int sum = 0;
	if (year % 4 == 0)
	{
		for (int i = 0; i < month - 1; i++)
		{
			sum += LeapDate[i];
		}
	}
	else
	{
		for (int i = 0; i < month - 1; i++)
		{
			sum += Date[i];
		}
	}
	return sum;
}

int Sum(int day1,int day2, int month1, int month2, int year1, int year2)
{
	int firstdate = 0,
		seconddate = 0;
	firstdate = MonthInDays(year1, month1) + day1 + NoLeapDays(year1) + LeapDays(year1);
	seconddate = MonthInDays(year2, month2) + day2 + NoLeapDays(year2) + LeapDays(year2);
	return seconddate - firstdate;
}

//Task2
int Task2(int array[], int size)
{
    int count = 0;
	for (int i = 0; i < size; i++)
	{
		count += array[i];
	}
	int average = count / size;
	return average;
}

//Task3
void Task3(int array[], int size)
{
	int negative = 0,
		positive = 0,
		zero = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			zero += 1;
		}
		else if (array[i] < 0)
		{
			negative += 1;
		}
		else if (array[i] > 0)
		{
			positive += 1;
		}
	}
	cout << "Negative digits = " << negative << endl;
	cout << "Positive digits = " << positive << endl;
	cout << "Digits which = 0, = " << zero << endl;
	return;
}


int main()
{
	//Task1
	int day1, day2, month1, month2, year1, year2;
	cout << "From the first date there is a count of days to the second date." << endl;
    cout << "Input first day: ";
    cin >> day1;
    cout << "Input first month: ";
    cin >> month1;
    cout << "Input first year: ";
    cin >> year1;
    cout << "Input second day: ";
    cin >> day2;
    cout << "Input second month: ";
    cin >> month2;
    cout << "Input second year: ";
    cin >> year2;
	cout << Sum(day1,day2,month1,month2,year1,year2) << endl;


    //Task2 Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива
	const int size = 5;
	int array[size] = { 1,2,3,4,100};
	cout << Task2(array, size) << endl;

	//Task3 Написать функцию, определяющую количеств положительных, отрицательных и нулевых элементов передаваемого ей массива.
	const int sizze = 13;
	int arr[sizze] = { -3, 0, 5, -5, -1, 0, 20, 311,5, 2, 1, -10, 50 };
	Task3(arr, sizze);

	//Task4 https://github.com/arkorrr/overloaded-functions/blob/master/overloaded%20functions/overloaded%20functions.cpp
	
}


