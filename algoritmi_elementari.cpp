#include<iostream>
using namespace std;

int main(){
//  //suma gauss
//  int n;
//  cin>>n;
//  long long rez;
//  rez = 1LL*n*(n+1)/2;
//  cout<<rez;


// calcularea factirialului unui numar
//  int n;
//  cin>>n;
//  long long rez = 1;
//  for(int i =1;i<=n;i++)
//    rez = 1LL*rez*i;
//  cout<<"resultatul "<<n<<" factorial este "<<
//
// suma de puteri
// n<=15 natural
//  int n;
//  cin>>n;
//  long long rez = 0;
//  for (int i =1; i<=n;i++){
//    long long pow = 1;
//    for (int j=1;j<=i;j++){
//      pow = 1LL*pow*i;
//    }
//    rez += pow;
//  }
//  cout<<"rezultatul este "<<rez;
//
// SUMA DE PATRATELOR NUMERELOR <=n
//  int n;
//  cin>>n;
//  int sum = 0;
//  for (int i= 1; i<=n;i++){
//    int pow =1;
//    for(int j=1; j<=2;j++){
//      pow *= 1LL* i;
//    }
//    sum +=pow;
//
//  }
//  cout<<"suma = "<<sum;
//
// SUMA PARTRATELOR NUMERELOR CONSECUTIVE
// <=n MODULO 10234573
// s = n*(n+2)*(2*n+1)/6 - formula
  int mod = 10234573;
  int n;
  cin>>n;
  long long a,b,c;
  a=n;
  b=n+1;
  c=((1LL*2*n) + 1);
  if(a%2 == 0)
    a/=2;
  else
    b/=2;
  if(a%3==0)
    a/=3;
  else if (b%3 == 0)
    b/=3;
  else
    c/=3;
  cout<<(a%mod)*(b%mod)*(c%mod);



  return 0;

}









