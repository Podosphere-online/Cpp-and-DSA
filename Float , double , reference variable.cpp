#include<iostream>
using namespace std;

int main(){
    //int a,b,c;
   // cout<<"enter the value of a:"<<endl;
   // cin>>a;
   // cout<<"enter the value of b:"<<endl;
    //cin>>b;
   // c=a+b;
   // cout<<"the sum is :"<<c;
    float d=34.4f;
    long double e=34.4l;
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the value of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"the value of 34.4l is "<<sizeof(34.4l)<<endl;
    
    //********Reference Variable************//
    //rohandas----> ,monty-----> ,rohu//
    float x=455;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    //*****TypeCasting*******//
    int a=45;
    float b=45.46;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    int c=int(b);
    cout<<"the expression is "<<a+b;
    cout<<"the expression is "<<a+ int(b);
    cout<<"the expression is "<<a+ (int)b; 
    
    return 0;
}

