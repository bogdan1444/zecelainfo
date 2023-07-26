#include<iostream>
using namespace std;

int main(){
//  int a, b,x;
//  cin>>a>>b>>x;
//  if(a<=x && x<=b) // aici
//    cout<<"DA";
//  else
//    cout<<"NU";

//  int a,b,c;
//  cin>>a>>b>>c;
//  if(a<=b && a<=c)
//    cout<<"cel mai mic "<<a;
//  else if(b<=a && b<=c)
//    cout<<"cel bai mic "<<b;
//  else
//    cout<<c;

// laturile unui triunghi isoscel, doar isoscel nu si echilateral
// laturi de tip float
  float a,b,c;
  cin>>a>>b>>c;
  if(a+b<=c || a+c<=b || a+c<=b)
    cout<<"nu formeaza triunghi";
  else if((a==b && b!=c)||(a==c && c!=b)||(b==c && b!=a))
    cout<<"Formeza triunghi isoscel";
  else
    cout<<"nu formeaza triunghi isoscel";






  return 0;

}

