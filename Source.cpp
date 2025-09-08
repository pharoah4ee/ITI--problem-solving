# include<iostream>
using namespace std;
int main()
{
	int max = -999999;
	int num;
	int num1;
	cout << "please enter the number";
	cin >> num;
	cout << "please enter the numbers";
	for (int i= 0; i < num; i++)
	{
		cin >> num1;
		if (num1 > max)
		{
			max = num1;
		}
	}
	
	
	cout << "MAX:" << max;

	return 0;
}