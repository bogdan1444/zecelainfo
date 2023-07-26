#include<iostream>
using namespace std;


int main()
{
//
//// descompunere in factori primi
//  int n;
//  cin>>n;
//  int d = 2;
//  while(n>1){
//    int p = 0;
//    while(n%d == 0){
//      n /= d, p++;
//      cout<<d<<" ";}
////    if(p){
////      cout<<d<<" la puterea "<<p<<endl;}
//    d++;
//    if(d*d > n){
//      d = n;
//    }
//  }
//
//  int n;
//  cin>>n;
//  int d = 2;
//  while(n>1){
//    int p = 0;
//    while (n%d == 0){
//      cout<<"n= "<<n<<" ";
//      cout<<"d= "<<d<<"   ";
//      n /= d;
//      p++;
//    }
////  if(p){
////  cout<<d<<" la puterea: "<<p<<endl;}
//  d++;
//  cout<<"d= "<<d<<endl;
//  if (d*d >n)
//    d = n;
//  }







//
//// factorizare
//  int n;
//  cin>>n;
//  int d = 2;
//  while(n>1){
//    int p = 0;
//    while(n%d == 0){
//      n /= d, p++;}
//    if(p){
//      cout<<d<<" "<<p<<endl;}
//    d++;
//    if(d*d > n){
//      d = n;
//    }
//  }


////calcularea numarului de divizori
//  int n, nrdiv = 1;
//  cin>>n;
//  int d = 2;
//  while(n>1){
//    int p = 0;
//    while(n%d == 0){
//      n /= d, p++;}
//    nrdiv *=(p+1); // numarul de divizori este egal cu produsul tuturo puterilor factorilor + 1
//    d++;
//    if(d*d > n){
//      d = n;
//    }
//  }
//  if(nrdiv != 2 )
//    cout<<"NU";
//  else
//    cout<<"DA";
//  return 0;







// nprime Se citește numărul natural n. Să se afișeze primele n numere naturale prime.
  int cnt = 0;
  int n;
  cin >>n;
  int val = 2;
  while(cnt<n){// cat timp nu am gasit n numere naturale prime
    int cval = val;
    int d = 2;
    int cn =1;
    while (val>1){
      int p = 0;
      while(val % d == 0)
        p++, val /=d;
      cn = cn*(p+1);
      d++;
      if(d*d>val)
        d = val;
      }
    val = cval;
    if (cn == 2)
      cout<<val<<" ",cnt++;
    val++;
  }




// aprim
//Un număr natural se numește aproape prim dacă poate fi scris ca produs de două numere naturale prime distincte.
  // aproape prim are patru divizori
  int n;
  cin>>n;
  int cnt = 0;
  for(int d = 1; d*d<=n; ++d){
    if (n%d==0)
      cnt += 2;
    if(d*d == n)
      cnt--;
  }
  if(cnt == 4)
    cout<<"DA";
  else
    cout<<"NU";


  return 0;



}











