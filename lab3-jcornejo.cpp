//Jesse Cornejo

#include<iostream>
using namespace std;
float sumFloat(long num);
double sumDouble(long num);
float strangeFloat(long num);
double strangeDouble(long num);

int main()
{
	short n = 0;
	short sum = 0;
	//Computing the sum to the nth term using short given by user
	cout << "Please enter the n'th number to compute the sum" << endl;
	cin >> n;
	for (int i = 0; i <= n; i++)//computing sum by incrementing i
	{
		sum = sum + i;
	}

	cout << "The sum is: " << sum << endl << "The n'th number is: " << n << endl;

	//Computing the sum to the nth term using long given by the user
	long m = 0;
	short sum2 = 0;
	cout << "Please enter the n'th number to compute the sum" << endl;
	cin >> m;
	for (int i = 0; i <= m; i++)//incrementation
	{
		sum2 += i;
	}
	cout << "The sum is: " << sum2 << endl << "The n'th number is: " << m << endl;
	//The maximum without overflow is 255

	//Computing the sum of products using float to the nth term given by user(using a function)
	long num1 = 0;
	float total_one = 0;
	cout << "Please enter a number to compute product to the n'th term (float)" << endl;
	cin >> num1;
	total_one = sumFloat(num1);
	cout << "You entered " << num1 << " number of terms" << endl;
	cout << "The total of the product is: " << total_one << endl;

	//Computing the sum of the products using double to the nth term given by user(using a function)
	long num2 = 0;
	double total_two = 0;
	cout << "Please enter a number to compute product of the n'th term (double)" << endl;
	cin >> num2;
	total_two = sumDouble(num2);
	cout << "You entered " << num2 << " number of terms" << endl;
	cout << "The total of the product is: " << total_two << endl;
	// The maximum without overflow is 170

	//Computing the sum of 1/i using float 
	long num3 = 0;
	float total_three = 0;
	cout << "Please enter a number to compute product of 1 over the n'th term (float)" << endl;
	cin >> num3;
	total_three = strangeFloat(num3);
	cout << "You entered " << num3 << " number of terms" << endl;
	cout << "The total of the product is: " << total_three << endl;
	//

	//Computing the sum of 1/i using double
	long num4 = 0;
	double total_four = 0;
	cout << "Please enter a number to compute product of 1 over the n'th term (double)" << endl;
	cin >> num4;
	total_four = strangeDouble(num4);
	cout << "You entered " << num4 << " number of terms" << endl;
	cout << "The total of the product is: " << total_four << endl;

	//Results: Double allows for more decimal points

	for (double i = 3.4; i < 4.4; i += .2)
	{
		cout << "i = " << i << endl;
	}
	/*
	First iteration
	i = 3.4
	i = 3.6
	i = 3.8
	i = 4
	i = 4.2
	i = 4.4
	
	Second iteration changing to double
	i = 3.4
	i = 3.6
	i = 3.8
	i = 4
	i = 4.2

	Effect:
	This happens because float is a less accurate data type, this allows it to reach 4.4 even though it needs to be less
	*/
	return 0;

}

float sumFloat(long num)
{
	float sum_one = 1.0;
	for (float i = 1; i <= num; i++)
	{
		sum_one = sum_one * i;
	}
	return sum_one;
}

double sumDouble(long num)
{
	double sum_two = 1.0;
	for (double i = 1; i <= num; i++)
	{
		sum_two = sum_two * i;
	}
	return sum_two;
}

float strangeFloat(long num)
{
	float sum_three = 0;
	for (float i = 1; i < num; i++)
	{
		sum_three = (sum_three + (1 / i)) - 1;
	}
	return sum_three;

}

double strangeDouble(long num)
{
	double sum_four = 0;
	for (double i = 1; i < num; i++)
	{
		sum_four = (sum_four + (1 / i)) - 1;
	}
	return sum_four;

}
