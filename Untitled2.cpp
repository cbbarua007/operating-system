#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter no of processes";
cin>>n;
int bt[n];
int wt[n];
int quantum=2;
for(int i=0;i<n;i++)
{
cout<<"burst time of  "<<i+1;
cin>>bt[i];
}
int rem_bt[n];
for(int i=0;i<n;i++)
{
	rem_bt[i]=bt[i];
}
int t=0;
while(true)
{
	bool done=true;
	for(int i=0;i<n;i++)
	{
		if(rem_bt[i]>0)
		{
			done=false;
			if(rem_bt[i]>quantum)
			{
				t=t+quantum;
				rem_bt[i]=rem_bt[i]-quantum;
			}
			else
			{
				t=t+rem_bt[i];
				rem_bt[i]=0;
				wt[i]=t-bt[i];
			}
		}
	}
	if(done==true) break;
}
for(int i=0;i<n;i++)
cout<<"wt time of process  "<<i+1<<"is  "<<wt[i]<<endl;
}
