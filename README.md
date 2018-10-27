//Code Monk
//Basics of implementation
//ques2

#include <iostream>

using namespace std;

int main() {
	long long int i,n,x,y,t=1,t1=0;
	cin>>n>>x>>y;
	long long int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]>=x && a[i]<=y)
	    {
	        t=0;
	    }
	    else 
	    t1=1;
	}
	if(t==0 && t1==0)
	cout<<"YES";
	else
	cout<<"NO";
}
