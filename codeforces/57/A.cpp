#include<bits/stdc++.h>
using namespace std;
int main(){

 long long n,x1,y1,x2,y2;
 cin>>n>>x1>>y1>>x2>>y2;
 char point1,point2;
 if(y1==0)
 {
     point1='d';
 }
 else if(y1==n)
 {
     point1='u';
 }
 else if(x1==0)
 {
      point1='l';
 }
  else if(x1==n)
 {
      point1='r';
 }

 if(y2==0)
 {
     point2='d';
 }
 else if(y2==n)
 {
     point2='u';
 }
 else if(x2==0)
 {
      point2='l';
 }
  else if(x2==n)
 {
      point2='r';
 }

if((point1=='l' && point2=='u') || (point1=='u' && point2=='l'))
{
    cout<<sqrt((0-x1)*(0-x1)+(n-y1)*(n-y1))+sqrt((0-x2)*(0-x2)+(n-y2)*(n-y2))<<endl;
}
else if((point1=='r' && point2=='u') || (point1=='u' && point2=='r'))
{
    cout<<sqrt((n-x1)*(n-x1)+(n-y1)*(n-y1))+sqrt((n-x2)*(n-x2)+(n-y2)*(n-y2))<<endl;
}
else if((point1=='r' && point2=='d') || (point1=='d' && point2=='r'))
{
    cout<<sqrt((n-x1)*(n-x1)+(0-y1)*(0-y1))+sqrt((n-x2)*(n-x2)+(0-y2)*(0-y2))<<endl;
}
else if((point1=='l' && point2=='d') || (point1=='d' && point2=='l'))
{
    cout<<sqrt((0-x1)*(0-x1)+(0-y1)*(0-y1))+sqrt((0-x2)*(0-x2)+(0-y2)*(0-y2))<<endl;
}
else if((point1=='l' && point2=='r') )
{
    cout<<min(sqrt((0-x1)*(0-x1)+(0-y1)*(0-y1))+sqrt((n-x2)*(n-x2)+(0-y2)*(0-y2))+n,sqrt((0-x1)*(0-x1)+(n-y1)*(n-y1))+sqrt((n-x2)*(n-x2)+(n-y2)*(n-y2))+n)<<endl;
}
else if((point1=='r' && point2=='l') )
{
    cout<<min(sqrt((0-x2)*(0-x2)+(0-y2)*(0-y2))+sqrt((n-x1)*(n-x1)+(0-y1)*(0-y1))+n,sqrt((0-x2)*(0-x2)+(n-y2)*(n-y2))+sqrt((n-x1)*(n-x1)+(n-y1)*(n-y1))+n)<<endl;
}
else if((point1=='u' && point2=='d') )
{
    cout<<min(sqrt((0-x1)*(0-x1)+(n-y1)*(n-y1))+sqrt((0-x2)*(0-x2)+(0-y2)*(0-y2))+n,sqrt((n-x1)*(n-x1)+(n-y1)*(n-y1))+sqrt((n-x2)*(n-x2)+(0-y2)*(0-y2))+n)<<endl;
}
else if((point1=='d' && point2=='u') )
{
   cout<<min(sqrt((0-x2)*(0-x2)+(n-y2)*(n-y2))+sqrt((0-x1)*(0-x1)+(0-y1)*(0-y1))+n,sqrt((n-x2)*(n-x2)+(n-y2)*(n-y2))+sqrt((n-x1)*(n-x1)+(0-y1)*(0-y1))+n)<<endl;
}
else if(point1==point2)
{
    cout<< sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<endl;
}



}