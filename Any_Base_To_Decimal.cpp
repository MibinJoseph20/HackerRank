//Any base to decimal (TCS)
#include<iostream>
#include<string>
#include<math.h>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int todecimal(string s,int n)
{
    map <char,int> check;
    check['A']=10;
    check['B']=11;
    check['C']=12;
    check['D']=13;
    check['E']=14;
    check['F']=15;
    check['G']=16;
    int temp,power=0;
    int base=n;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(isalpha(s[i]))
        { temp+=(check.find(s[i])->second)*pow(base,power);
          power++;
        }
        else{
         int b=s[i]-'0';
          temp+=b*pow(base,power);
          power++;}
        
    }
    return temp;
}
int main() {
string s;
int n=17,c;
cin>>s;
c=todecimal(s,n);
cout<<c;
return 0;
}
