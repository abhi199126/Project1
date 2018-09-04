#include<bits/stdc++.h>
using namespace std;
int cal_closest(vector<int>&A,int B)
{
  int min=INT_MAX,sum=0,result=0,j=0,k=0;
    sort(A.begin(),A.end());
    for(int i=0;i<=(A.size()-2);i++)
   {j=i+1,k=A.size()-1;
    while(k>j)
    {sum=A[i]+A[j]+A[k];
    int diff=sum-B;
    if(diff==0) return sum;
    if(diff<0) diff=-diff;
    if (diff<min) {min=diff;
    result=sum;}
    diff=sum-B;
    if(diff>0)k--;
    else j++;
   }
}
    return result;
}
int main()
{ 
  vector <int> v;
  int n;//size of array
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.push_back(a);
  }
  int Target_sum;
  cin>>Target_sum;
  int Sum=cal_closest(v,Target_sum);
  cout<<Sum;
  return 0;
}
