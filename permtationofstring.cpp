// write a program to input strings and display all the permutation count of all permutations of strings without using any built-in function
#include <iostream>
#include <cstring>
using namespace std;
int fact(int n){
    for(int i=n-1;i>1;i--){
        n=n*i;
    }
    return n;
    
}

int permutation(char *s){
    int size=strlen(s);
    int p=fact(size);
    int count[26]={0};
    for(int i=0;i<size;i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>1){
            p=p/fact(count[i]);
        }
    }
    return p;
}
int main()
{
    int x;
    char a[100];
    cin>>a;
    int res=permutation(a);
    cout<<res;
    return 0;
}
