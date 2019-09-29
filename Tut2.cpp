#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{   
    /*
    Invariant: At any point, sum should conatin sum of i elements.
    Pre-condition: Sum should be initialized with zero. Array should always have a valid value.
    Post-condition: Sum would store sum of n elements of the array.
    */
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    return sum;
}


bool isPrime(int n)
{   
    /*
    Invariant: Check possible factors of n between [2,sqrt(n)].
    Pre-condition: n>1.
    Post-condition: Returned value should be bool showing if a number is prime or not.
    */
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPalindrome(string s)
{   
    /*
    Invariant: Iterate through [0,n/2], till value [0,i] is a palindrome of that part  in the string.
    Pre-condition: bool p = true.
    Post-condition: Returned value should be bool showing if a number is palindrome or not.
    */
    int len = s.length();
    int i, j;
    bool p = true;
    for (i = 0, j = len - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
            p = false;
    }
    return p;
}



int main()
{
    int arr[] = {1,2,3,4};
    int sum_ans = sum(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "SUM: " << sum_ans << endl;

    cout << "Prime Validation " << isPrime(79) << endl;
    cout << "PalindromeValidation " << isPalindrome("MADAM") << endl;

}