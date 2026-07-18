#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],d=0;
double s;
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>a[i];
if(a[i]<0)
{
s+=a[i];
d++;
}
}
if(d==0)
cout<<"-1";
else
cout<<fixed<<setprecision(2)<<s/d;
return 0;
}