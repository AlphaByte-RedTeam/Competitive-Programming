#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    string s[100];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);

    printf("%d %s\n", a+b+c, s);

    return 0;
}