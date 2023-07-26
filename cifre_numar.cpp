#include<iostream>
using namespace std;
int main()
{
//  int n;
//  cin>>n;
//  int cn = n; // copie a lui n
//  //afisare cifre cu spatiu intre ele
//  while(cn>0){
//    cout<<cn%10<<" "; // afisare de la ultima la prima
//    cn /= 10;
//  }
//  cout<<endl<<n;

// 1) SA SE CALCULEZE SUMA CIFRELOR
//  int n, sum =0;
//  cin>>n;
//  while(n>0){
//    sum +=n%10;
//    n /= 10;
//  }
//  cout << sum;

// suma numerelor prefixe unui numar natural
//  int n;
//  long long sum =0;
//  cin >>n;
//  while(n>0){
//    sum += n;
//    n /= 10;
//  }
//  cout<<"suma = "<< sum;

// sa se determine numarul de cifre ale unui numar natural citit de la tastatura
// in loc de suma vom avea un contor
//  int n, cont = 0;
//  cin>>n;
//  if (n==0)
//   cont = 1;
//  while(n>0){
//    cont ++;
//    n /= 10;
//  }
//  cout<<cont;
  // in cazul in care introduc 0 proframul returneaza 0,
  // deci nu e bine


// 3 oglinditul unui numar
// retinem valoarea oglinditului intr-o variabila
//
//  int n, og1 = 0;
//  cin >> n;
//  while (n > 0){
//    og1 = og1*10 + (n%10);
//    n  /=10;
//  }
//  cout<<og1;

// varianta a doua de construire a uni
// numar din cifre
//  int n, og1 = 0, put =1;
//  cin >> n;
//  while (n>0){
//    og1 = (n%10)* put + og1;
//    put *= 10;
//    n /= 10;
//  }
//  cout<<og1;


// cifre 23
// care cifra dintre 2 si 3 apare de mai multe ori
// n este long long
  long long n;
  int ct2 = 0, ct3 = 0;
  cin>>n;
  while(n>0){
    if (n%10 == 2)
      ct2 ++;
    else if(n%10 == 3)
      ct3 ++;
    n/=10;
  }
  if (ct2>ct3)
    cout<<ct2;
  else if (ct2 == ct3)
    cout<<2<<3;
  else
    cout<<ct3;




return 0;
}







