#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    string s;

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", &s);

    printf("%d %s", a+b+c, s);
}