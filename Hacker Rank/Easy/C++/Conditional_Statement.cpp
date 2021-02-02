#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    //string a[10] = { "Greater than 9", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    cin >> n;
    cin.ignore ( numeric_limits<streamsize>::max(), '\n' );

    // Write Your Code Here
    /*
    I write in short for the problem, but my code got rejected
    by using this code. So, another method is using a long 
    If..else is statement
    */
    /*
    if ( n > 9 )
    {
        cout << a[0];
    }

    else
    {
        cout << a[n];
    }
    */

    // OR using this method
    if ( n == 1 )
    {
        printf ( "one" );
    }
    
    else if ( n == 2 )
    {
        printf ( "two" );
    }

    else if ( n == 3 )
    {
        printf ( "three" );
    }

    else if ( n == 4 ) 
    {
        printf ( "four" );
    }
    
    else if ( n == 5 )
    {
        printf ( "five" );
    }

    else if ( n == 6 )
    {
        printf ( "six" );
    }
      
    else if ( n == 7 )
    {
        printf ( "seven" );
    }
    
    else if ( n == 8 )
    {
        printf ( "eight" );
    }

    else if ( n == 9 )
    {
        printf ( "nine" );
    }
    
    else
    {
        printf ( "Greater than 9" );
    }
    
    return 0;
}