#include<iostream>
using namespace std;
int main()
{
// aparitii 2: de cate ori apare intr-un numar prima cifra
//// citire numar de la tastatura
//  int n;
//  cin >> n;
//  int prima_cifra, cn, cont=0;
//  cn = n;
//  if (n == 0){cout<<1;}
//  else{
//  while (cn>9){
//    cn/=10;
////    cout<<cn<<endl;
//  }
//  prima_cifra = cn;
//  cout<<prima_cifra;
//  cout<<n;
//  while(n>0){
//    if (n%10 == prima_cifra){
//      cont ++;
//    }
//  n /= 10;
//  }
//  cout<<cont;
//  }
//

// inversare numere cate 2:
// 123456 devine 2143546
// incape pe int si are un numar par de cifre
//  int n;
//  int rez = 0, pt = 1;
//  cin>>n;
//  while(n){  // while(n) adica while n == true adica diferit de 0
//    int a = (n/10)%10; // penultima cifra
//    int b = n%10; // ultima cifra
//    int nr = b*10 + a;
//    cout<< nr<<endl;
//    rez = pt*nr + rez;
//    pt *= 100;
//    n /= 100;
//  }
//  cout<< rez;


//  n nr nat, sa se afle cate dintre numerele obtinute
//din n prin stergerea unei cifre sunt divizibile cu 3
  // daca suma cifrelor e divizibila cu 3 atunci si nr e divizibil cu 3
  // vom calcula prima data suma numerelor apoi din aceasta suma
  // scadem rand pe rand cate o cifra si vedem daca rezultatul este divizibil cu 3
  // daca da atunci incrementam valoarea unui contor, initializat intr-o prima faza cu 0
//
//  int n, sumcifre = 0;
//  cin>>n;
//  int cn = n;
//  int cont = 0;
//  while(n){
//    sumcifre += n%10;
//    n /= 10;
//  }
//  cout<<"suma cifrelor: "<<sumcifre<<endl;
//  n = cn;
//  while(n){
//    if ((sumcifre - n%10)%3 ==0){
//      cont++;
//    }
//    n /= 10;
//
//  }
//  cout<<"numar de numere div cu 3: "<<cont;
//


// Se dau două numere naturale a și b.
// Determinati numărul de palindromuri cuprinse
//în intervalul determinat de cele două numere.
  int a, b, cnt = 0;
  cin>>a>>b;
  if (a>b)
    swap(a,b); // inverseza
  cout<<"a = "<<a<<"  b= "<<b<<endl;
  for (int i = a ; i<= b ; i++){
    int ogl1 = 0;
    int x = i, cx =i ; // si copia lui x, copy x = i
    while(x/10){
      ogl1 = ogl1*10 + x%10;
//      x /= 10;
    }
    if (ogl1 == cx)
      cnt ++;
  }
  cout<<cnt;


  return 0;
}















