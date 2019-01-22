#include<iostream>
using namespace std;
main()
{ int n;
  cout<<"Enter the number of Processes ";
  cin>>n;
  float a[n],ex[n],ct[n],tat[n],w[n];
  float tata=0,wt=0;
  cout<<"Enter Arrival Time Of all the processes sequentially "<<endl;
  for(int i=0;i<n;i++)   cin>>a[i];
  cout<<"Enter Burst Time Of all the processes sequentially "<<endl;
  for(int i=0;i<n;i++) cin>>ex[i];
  ct[0]=ex[0];
  for(int i=1;i<n;i++)
  { if(ct[i-1]>a[i]) ct[i]=ct[i-1]+ex[i];
    else ct[i]=a[i]+ex[i];
  }
  for(int i=0;i<n;i++) 
  tat[i]=ct[i]-a[i];
  for(int i=0;i<n;i++) 
  w[i]=tat[i]-ex[i];
  cout<<" Completion Time Of all the processes sequentially are "<<endl;
  for(int i=0;i<n;i++) cout<<ct[i]<<"\n";
  cout<<"Turn Around Time Of all the processes sequentially are "<<endl;
  for(int i=0;i<n;i++) 
  {tata=(tata+tat[i]);
  cout<<tat[i]<<"\n";
  }
  cout<<" Avg TAT = "<<(tata/n)<<endl<<" Waiting Time Of all the processes sequentially are "<<endl;
  for(int i=0;i<n;i++) 
  {
  cout<<w[i]<<"\n";
  wt=(wt+w[i]);
  }
  cout<<"Avg Waiting Time = "<<(wt/n);
}
