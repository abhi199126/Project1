#include<bits/stdc++.h>
using namespace std;
bool check_red(string &A)
{
  stack <char> stk;
    for(char ch:A)
    {

        if(ch==')')
        {
            char top=stk.top();
            stk.pop();
            int count =0;
            while(top!='(')
            {
                count++;
                top=stk.top();
                stk.pop();
            }
            if(count<=1)
            {
                return 1;
            }
        }
        else stk.push(ch);
    }
    return 0;
}
int main()
{
  string str;
  getline(cin,str);
  bool a;
  a=check_red(str);
  cout<<(a==1)?1:0;
  return 0;  
}
