#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);
    int arr[N];
    
    for ( int i = 0; i < N; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for (int j = N - 1; j >= 0; j--)
    {
        /* code */
        printf( "%d ", arr[j] );
        //cout << arr[i] << endl;
    }
    
    return 0;
}