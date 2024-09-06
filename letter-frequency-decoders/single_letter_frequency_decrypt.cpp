#include <iostream>
#include <string.h>
using namespace std;
int frecv[256],c=0;
int main()
{   cout << "WARNING: This algorithm is only intended for large chunks of encrypted text using\n";
    cout << "a substitution cipher that does not change \n";
    char letters[30]={"etainoshrdlucmfwygpbvkqjxz"};
    char encrypt[10001];
    int n=26;
    cin.getline(encrypt,10001);
    for (int i=0;i<strlen(encrypt);i++)
    frecv[(encrypt[i]%97)]++;
    for (int j=0;j<=26;j++)
    {
    int max=0;
    int pozmax=0;
    for (int i=0;i<=n;i++)
    {
        if (max<=frecv[i])
        {
            max=frecv[i];
            pozmax=i;
        }
    }
    for (int i=0;i<strlen(encrypt);i++)
    {
        if (encrypt[i]==(char)(pozmax+97))
        encrypt[i]=letters[c];
    }
    frecv[pozmax]=0;
    c++;
    }
    cout << encrypt;
return 0;
    
}