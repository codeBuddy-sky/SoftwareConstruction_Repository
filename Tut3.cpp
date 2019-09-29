
/*#define NDEBUG*/

#include <assert.h>
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
    assert(sum==0 && n>=1);
    
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
    assert(n>1);
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
    Pre-condition: String s is not Null.
    Post-condition: Returned value should be bool showing if a number is palindrome or not.
    */
    assert(s[0]!='\0');
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

void studentDetails()
{
    cout << "Enter Student's Name " << endl;
    string name;
    cin >> name;
   
    cout << "Enter Marks in 5 subjects " << endl;
    int marks[5];
    for(int i =0; i<5; i++)
        cin >> marks[i];
    int ans = sum(marks,5);
    for(int i =0; i<5;i++)
    {
        assert(marks[i]>0 && marks[i]<50);
    }
    assert(ans>=0);
    cout << "Student Details "<<endl;
    cout << "Name: " << name << endl;
    for(int i =0; i<5;i++)
        cout << marks[i] << endl;
    cout << "Percentage Marks: "<< endl;
    cout << ans/500 * 100 << endl;

}

double calorieCount(double calorie,double fat,double fibres_grams)
{   
    double calorie_count = 0.0;
    calorie_count = (calorie/50)+(fat/12)*(fibres_grams/5);
    assert(calorie_count>0.0);
    return calorie_count;
}

void getResults()
{
    cout << "Enter Marks in 3 subjects " << endl;
    int marks[3];
    for(int i =0; i<3; i++)
        cin >> marks[i];
    
    for(int i =0; i<3;i++)
    {
        assert(marks[i]>0 && marks[i]<50);
    }
    
    cout << "Grade Details "<<endl;
    int avg = sum(marks,3)/3;
    if(avg >= 80 && avg <= 100)
        cout << "A" << endl;
    else if(avg >=65 && avg<=79)
        cout << "B" << endl;
    else if(avg >=50 && avg<=64)
        cout << "C" << endl;
    else if(avg >=40 && avg<=49)
        cout << "D" << endl;
    else if(avg >=0 && avg<=39)
        cout << "E" << endl;
    return;
}


int main()
{
    int arr[] = {1,2,3,4};
    int sum_ans = sum(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "SUM: " << sum_ans << endl;

    cout << "Prime Validation " << isPrime(79) << endl;
    cout << "PalindromeValidation " << isPalindrome("MADAM") << endl;

    studentDetails();
    cout << "Calorie Count: " << calorieCount(12,13,14) << endl;

    getResults();

}