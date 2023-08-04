//calculate trailing zero of a given factorial

#include <iostream>
using namespace std;
int trailing(int n){
    int count=0;
    for(int i=5;n/i>=1;i=i*5){
        count=count+n/i;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int x=trailing(n);
    cout<<x;
    return 0;
}
