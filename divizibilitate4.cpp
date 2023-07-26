#include<iostream>
using namespace std;


int main()
{
//  Un număr natural se numește aproape prim dacă poate fi scris ca produs de două numere naturale prime distincte.
//Cerinţa
//
//Se citește un număr natural și apoi n numere naturale. Să se determine câte dintre ele sunt aproape prime.
//Date de intrare
//
//Programul citește de la tastatură numărul n, și apoi n numere naturale.
//Date de ieşire
//
//Programul afișează pe ecran numărul C, reprezentând câte dintre numerele citite sunt aproape prime.
//Restricţii şi precizări
//
//    1 ≤ n ≤ 100
//    cele n numere citite sunt cuprinse între 1 și 1.000.000.000
//
//Exemplu:
//
//Intrare
//
//6
//35 55 12 6 25 50
//
//Ieșire
//
//3

//  int n;
//  cin>>n;
//  int cnt = 0;
//  for(int i=1; i<=n; i++){
//    int x;
//    cin>>x;
//    int d = 2, cn = 1; // cn variabila in care tinem numarul de divizori
//    while(x>1){
//      int p = 0;
//      while(x%d==0)
//        p++, x/=d;
//      d++;
//      cn = cn*(p+1);
//      if(d*d>x)
//        d = x;
//    }
//    if (cn == 4)
//      cnt ++;
//  }
//  cout<<cnt;
//
//





//Cerinţa
//
//Să se scrie un program care citește un șir de n numere naturale şi determină numărul din şir care are număr maxim de factori primi.
//Date de intrare
//
//Programul citește de la tastatură numărul n, iar apoi n numere naturale nenule, separate prin spaţii.
//Date de ieşire
//
//Programul afișează pe ecran numărul x, numărul din şir cu număr maxim de factori primi.
//Restricţii şi precizări
//
//    0 < n < 1001
//    cele n numere citite vor fi mai mici decât 2.000.000.000
//    dacă în şir există mai multe numere cu număr maxim de factori primi, se va afişa cel mai mic dintre acestea
//
//Exemplu:
//
//Intrare
//
//5
//72 30 12 75 17
//
//Ieșire
//
//30
//
//Explicație
//
//30 are trei factori primi. Celelalte numere au mai puţini factori primi.


//sumcifprim #406
//
//
//  Cerinţa
//
//Se dă un șir cu n numere naturale. Determinați câte dintre ele sunt prime și au suma cifrelor un număr prim.
//Date de intrare
//
//Programul citește de la tastatură numărul n, iar apoi n numere naturale.
//Date de ieşire
//
//Programul afișează pe ecran numărul C, reprezentând rezultatul cerut.
//Restricţii şi precizări
//
//    1 ≤ n ≤ 1000
//    cele n numere citite vor fi mai mici decât 1.000.000.000
//
//Exemplu:
//
//Intrare
//
//6
//83 36 53 401 90 7
//
//Ieșire
//
//3
//
//int n, cnt = 0;
//cin >>n;
//for(int i=1 ;i<=n; ++i){
//  int x, sumcif = 0;
//  cin>>x;
//  int cx = x; // copie a lui x
//  while(x){
//    sumcif+=x%10;
//    x/=10;
//  }
//  x = cx; // dam valoare lui x inapoi
//  int cn = 1, d = 2;
//  while(x>1) { // verificam daca x este prim
//    int p = 0;
//    while(x%d==0)
//      x/=d, p++;
//    cn = cn*(p+1);
//    d++;
//    if(d*d>x)
//      d = x;
//  }
//  if(cn == 2){ // daca x este numar prim verificam apoi si daca suma cifrelor sale este numar prim
//    int dd=2, cnn= 1; // verif sumcif prim
//    while(sumcif>1) {
//      int pp = 0;
//      while(sumcif%dd==0)
//        sumcif/=dd, pp++;
//      cnn = cnn*(pp+1);
//      dd++;
//      if(dd*dd>sumcif)
//        dd = sumcif;
//    }
//    if (cnn==2)
//    cnt++;
//}
//
//
//}
//cout<<cnt;


//
//int n, rez = 0, nrmax= 0;
//cin>>n;
//for (int i = 1; i<=n; ++i){
//  int x;
//  cin>>x;
//  int cnt = 0, cx = x;
//  int d = 2;
//  while(x>1){
//    int p = 0;
//    while(x%d==0)
//      p++, x /= d;
//    if(p)
//      cnt++;
//    d++;
//    if(d*d>x)
//      d = x;
//  }
//  if (cnt > nrmax)
//    nrmax = cnt, rez = cx;
//  else if((cnt==nrmax) && (cx<rez))
//    rez = cx;
//}
//cout<<rez;








//
//
//Cerinţa
//
//Se dau două numere naturale nenule. Să se verifice dacă cele două numere au exact aceiași factor primi, indiferent de puterea acestora.
//Date de intrare
//
//Programul citește de la tastatură numerele n și m.
//Date de ieşire
//
//Programul afișează pe ecran mesajul DA, dacă cele două numere au exact aceiași factori primi, respectiv NU în caz contrar.
//Restricţii şi precizări
//
//    cele două numere citite vor fi mai mici decât 230
//
//Exemplu 1:
//
//Intrare
//
//72 48
//
//Ieșire
//
//DA
//
//Explicație
//
//72 și 48 au exact aceiași factori primi: 2 3.
//Exemplu 2:
//
//Intrare
//
//72 30
//
//Ieșire
//
//NU
//
//Explicație
//
//Factorii primi ai lui 72 sunt 2 3, iar factorii primi ai lui 30 sunt 2 3 5.

int a, b;
cin>>a>>b;
bool aceeasi_factori = true;
int d = 2;
while(a>1){
  int p = 0;
  if(a%d==0){
    if(b%d !=0)
      aceeasi_factori = false;
    while(a%d == 0)
      a /= d;
    while(b%d == 0)
      b /= d;
    }
  d++;
  if(d*d>a)
    d = a;
}
  if(aceeasi_factori == true && b==1 )
    cout<<"DA";
  else
    cout<<"NU";









  return 0;
  }














