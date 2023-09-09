// naive approach to check string is palindrome or not
#include <bits/stdc++.h>
using namespace std;
  string palindrome(string s){
      int a=s.length();
      string y=s;
      reverse(s.begin(),s.end());
      if(s==y){
          return "YES";
      }else{
          return "NO";
      }
        
    }

int main() {
  string a;
  cin>>a;
  cout<<palindrome(a);
    return 0;
}


// better approach
#include <bits/stdc++.h>
using namespace std;
  string palindrome(string s){
      int a=s.length();
      for(int i=0;i<=a/2;i++){
          if(s[i]!=s[a-i-1]){
              return "no";
          }
      }
      return "yes";
    }

int main() {
  string a;
  cin>>a;
  cout<<palindrome(a);
    return 0;
}
