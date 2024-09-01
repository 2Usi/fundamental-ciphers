#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[150];
    cout << "introduceti cuvantul: ";
    cin >>a;
    for (int i=0;i<strlen(a);i++)
    {
        if (a[i]>='a' && a[i]<='w')
        a[i]+=3;
        else if (a[i]>='x' && a[i]<='z')
        a[i]=a[i]-23;
    }
    cout << a;
    return 0;
}