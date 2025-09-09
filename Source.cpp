#include <iostream>
using namespace std;

int getDigitSum(int n) 
{
    int sum = 0;
    while (n > 0) 
    {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}

int main() 
{
    int n, a, b;
    cin >> n >> a >> b;
    int total_sum = 0;

    for (int i = 0; i < n; i++) 
    {
        int digit_sum = getDigitSum(i);


        if (digit_sum >= a && digit_sum <= b) 
        {
            total_sum += i; 
        }
    }

    cout << total_sum << endl;

    return 0;
}
