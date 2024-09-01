#include <iostream>
#include <string.h>
using namespace std;

int main(){
char key[10],plaintext[250],ciphertext[250];
int matrix[26][26],x=0,c=0;
for (int i=0;i<=25;i++){
    x=i;
for (int j=0;j<=25;j++){
    matrix[i][j]=x;
    x++;
    if (x>25) x=0;
}
}
int y;
cout << "1 for encoding, 2 for decoding";
cin >> y;
cout << "enter key";
cin >> key;
if (y==1){
cin>>plaintext;
for (int i=0;i<strlen(plaintext);i++){
    int plain=plaintext[i]%97;
    int k=key[c]%97;
    c++;
    if (c==strlen(key))
    c=0;
    ciphertext[i]=(char)(matrix[k][plain]+97);
}
cout << ciphertext;
}
else if (y==2){
cin>>ciphertext;
for (int i=0;i<strlen(ciphertext);i++){
int cipher=ciphertext[i]%97;
int k=key[c]%97;
for (int j=0;j<=25;j++){
    if (matrix[k][j]==cipher){
    plaintext[i]=(char)(j+97);
    break;
}
}
c++;
if (c==strlen(key)) c=0;
}
cout << plaintext;
}
}