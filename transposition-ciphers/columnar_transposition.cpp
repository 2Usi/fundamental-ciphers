#include <iostream>
#include <string.h>
using namespace std;
#define ONE1     -1
#define FIVE1    ONE1, ONE1, ONE1, ONE1, ONE1
#define TEN1     FIVE1, FIVE1
#define TWENTY1  TEN1, TEN1
#define FIFTY1   TWENTY1, TWENTY1, TEN1
#define HUNDRED1 FIFTY1, FIFTY1

int main(){
    int matrix[20][5]=
    {
    TWENTY1,
    TWENTY1,
    TWENTY1,
    TWENTY1,
    TWENTY1
    };
    char plaintext[80];
    cin >> plaintext;
    int l=1,c=1;
    for(int i=0;i<strlen(plaintext);i++){
        matrix[l][c]=plaintext[i]%97;
        c++;
        if (c>=5)
        {
            c=1;
            l++;
        }
    }
    for (int j=1;j<=4;j++){
        for (int i=1;i<=4;i++)
        {
            if (matrix[i][j]>-1)
            cout <<(char)(matrix[i][j]+97);
        }
    }
}