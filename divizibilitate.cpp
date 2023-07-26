#include<iostream>
using namespace std;
int main()
{
//// determinare divizorilor unui numar
//// determinare suma divizorilor
//  int n;
////  cout<<" introduceti nr: ";
//  cin>>n;
//  // 1 si n sunt divizori ai lui n
//  if(n != 1){
//    long long sum = 0;
//    // divizorii se afla in [1,n/2]
//    for (int d = 1; d*d <= n;++d ){
//      if (n%d== 0){
//        sum += d;
//        sum += n/d;
////        cout<<d<<endl<<n/d<<endl;
//
//      }
//      if (d*d == n){
//      sum -= d;
//      }
//    }
//    cout<<sum ;
//  }
//  else
//    cout<<1;
/*
comentariu:
12: 1,2,3,4,6,12
pentru a determina divizorii trebuie sa
parcurgem pana la radical din numar

*/



/*
Cerința

Se dau n numere naturale. Determinați suma divizorilor oglinditelor celor n numere.
Date de intrare

Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spații.
Date de ieșire

Programul va afișa pe ecran numărul S, reprezentând suma cerută.
Restricții și precizări

    1 ≤ n ≤ 1000
    cele n numere citite vor fi mai mici decât 1.000.000.000
    Intrare
3
12 23 30

Ieșire

99
*/
//  int n;
//  cin >> n ;
//  long long suma = 0;
////  unsigned long long // de doua ori mai lung decat long long
//
//  for (int i = 1; i<= n; i ++){
//    int x ;
//    cin>> x;
//    int ogl = 0;
//    while (x){
//      ogl = ogl * 10 + x %10;
//      x /=10;
//    }
//    for(int d =1 ; d*d <= ogl ; d ++){
//      if(ogl%d == 0){
//        suma += d, suma += ogl/d;
//        if (d*d == ogl){
//          suma -= d;
//        }
//      }
//    }
//
//  }
//
//  cout << suma;



// sa se afiseze cel mai mare divizor comun
// a doua numere naturale
//  int a, b;
//  cin>>a>>b;
//  if(a==b && a == 0){
//    cout<<-1;
//  }
//  else{
//    int pas =1;
//    while(b){
//      cout<<"la pasul "<<pas<<endl;
//      int r = a%b;
//      cout<<" r = "<<r<<endl;
//      a = b;
//      cout<<" a = "<<a<<endl;
//
//      b = r;
//      cout<<" b = "<<b<<endl;
//      pas ++;
//    }
//  cout<<a;
//  }
//
//


// CEL MAI MIC MULTIPLU COMUN A DOUA NUMERE
  int a, b;
  cin>>a>>b;
  int ca = a, cb =b; //copii

  while(b){
    int r = a%b;
    a = b;
    b= r;
  }
  cout<<ca/a *cb;

  return 0;
}















