// Take two numbers as input (N1 and N2), Write a function which prints first N1 terms of the series 9n + 7 which are not multiples of N2.
// E.g. N1=3, N2=4
// 1st term->(n=1) 16 (but it is a multiple of 4, so discard it)
// 1st term->(n=2) 25 (valid)
// 2nd term->(n=3) 34 (valid)
// 3rd term->(n=4) 43 (valid)

// So the first 3 elements of the series are 25, 34, 43 and they are not a multiple of N2.
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N1,N2;
    cin>>N1;
    cin>>N2;
    int n=1;
    int count=0;
    while(count<N1){
        int x=9*n+7;
        if(x%N2!=0){
            
            cout<<x<<" ";
            count++;
           
        }
         n++;

    }

    return 0;
}
 
