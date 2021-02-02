#include <iostream>
using namespace std;

/*
void increment( int *i )
{
    // When we increment pointer i, we have to bracket the
    // pointer and the variable. If we don't use the bracket,
    // only the variable will be updated, and the pointer var
    // is not updated.
    (*i)++;
}

int main()
{
    int a = 10;
    increment( &a );
    printf( "%d\n", a );

    return 0;
}
*/

void update( int *a, int *b ) {
    // Complete this function
    int sum = *a + *b;
    int sub = *a - *b < 0 ? -(*a - *b) : (*a - *b);
    //sum = *a;
    //sub = *b;
    printf( "%d\n", sum );
    printf( "%d\n", sub );
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b); // Input : 4 5
    update( pa, pb );       // Output: 9 1
    //printf("%d\n%d\n", a, b);

    return 0;
}