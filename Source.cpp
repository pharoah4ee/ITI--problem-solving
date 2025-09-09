# include<iostream>
using namespace std;
int main()
{

	int num;
	int val;

	cout << "please enter the number of loops";
	cin >> num;
	cout << "please enter the inputs";
	for (int i = 0; i < num; i++)
	{
		cin >> val;
	}
	if (val == 1999)
	{
		cout << " correct";
	}
	else
	{
		cout << "wrong";
	}

	return 0;
}