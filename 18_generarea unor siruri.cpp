#include<iostream>
#include<cmath>
using namespace std;


int main()
{
//  //fibonacci
//int n;
//cin>>n;
//int a,b,c;
//a=1;
//b=1;
//if(n== 1)
//cout<<1;
//else
//cout<<1<<' '<<1<<' ';
//n-=2;
//while(n>0){
//  c = a+b;
//  a = b;
//  b = c;
//  cout<<b<<' ';
//  n--;
//}
//
//
////fibonacci1
////Se dă un număr natural n. Să se afişeze în ordine crescătoare, termenii şirului lui Fibonacci mai mici sau egali cu n.
//int n;
//cin>>n;
//int a , b, c;
//a = 1;
//b = 1;
//if(n==1){
//  cout<<1<<' ';
//}
//
//else
//{
//  cout<<1<<' '<<1<<' ';
//  while(n>=b){
//  c = a+b;
//  a = b;
//  b = c;
//  if(b<=n)
//    cout<<b<<' ';
//}
//
//}




//Fibonacci generalizat #424
//Se consideră şirul Fibonacci generalizat, definit astfel: f1=a , f2=b , fk=fk-1+fk-2 , dacă k>2, unde a și b sunt două numere intregi.
//int a,b,n;
//cin>>a>>b>>n;
//int c;
//if(abs(b)>n && abs(a)<=n)  // scriem niste conditii pentru a verifica daca primul termen si al doilea sunt mai mici decat n
//  cout<<a;
//else if(abs(a)<=n && abs(b)<n){
//  cout<<a<<' '<<b<<' ';
//  while(abs(b)<= n){
//    c= a+b;
//    a = b;
//    b = c;
//    if(abs(b)<=n)
//      cout<<b<<' ';
//  }
//}





//Problema 806
// Se consideră şirul definit mai jos:
//fn=⎨1  daca nr= 1
//    1 + fn−1, daca n par
//    1 + 2* fn-2 altfel
//
//
//în care nu există doi termeni cu aceeași paritate aflați pe poziții consecutive: 1, 2, 3, 4, 7, 8, 15, 16 .....
//
//Pentru un număr natural x, termen al şirului dat, se cere să se afișeze pe ecran, în ordine strict descrescătoare, separați prin câte un spațiu, toţi termenii şirului care sunt mai mici sau egali cu x.


int n;
cin>>n;
if(n==1)
    cout<<1;
while(n>1){
    cout<<n<<' ';
    if(n%2==0)
        n--;
    else
        n = (n+1)/2;
}
cout<<1;













return 0;
  }
































