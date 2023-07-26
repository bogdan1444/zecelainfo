#include<iostream>
using namespace std;
int main()
{
//  //se dau mai numte nr nat
//  // det palindruml max si de cate ori
//  // apare
//  int n ;
//  int x = 1, palindrom = 0, nrap = 0 ;
//  while(true){
//    cin >>x;
//    if (x == 0)
//      {break;}  // iese din loop
//    int cx = x, ogl = 0;// initilizam o copie a lui x
//    while(x){
//      ogl = ogl*10 + x%10;
//      x /=10;
//    }
//      x = cx;
//      if(x==ogl && x > palindrom){
//        palindrom = x;
//        nrap = 1; // prima aparitie a palindromului mare
//      }
//      else if (x == ogl && x == palindrom){
//        nrap ++;
//      }
//  }
//  cout<<palindrom<<" "<<nrap;


// sa se calculeze cifra de control;
// pt un numar dat se calculeaza suma cifrelor
// la suma cifrelor se calculeaza suma ciferlor s.a.m.d
// pana cand devine un nr dintr-o cifra
// n are cel mult doua cifre
//  int x;
//  cin >> x;
//  while(x>9){
//    int sumcif= 0;
//    while(x>0){
//    sumcif += x%10;
//    x /= 10;
//    }
//    x = sumcif;
//  }
//  cout<< x;


// cifra
// se da o cifra si se cere sa se elimine toate
// aparitiile din numar a acelei cifre
//  int n, c, n_n = 0, poz =1;
//  cin >> n;
//  cin>>c;
//  while(n){
//    if (n%10 == c){
//      n/=10;
//    }
//    else{
//      n_n += (n%10)* poz;
//      poz = poz *10;
//      n /= 10;
//    }
//  }
//  int a = -1;
//  if (n_n== 0)
//    cout<<a<<endl;
//  else
//   cout<<n_n;

// Varianta 2
//  int n,c;
//  cin>>n>>c;
//  int put = 1, rez =0;
//  bool ok = false;
//  while(n){
//    if (n%10 != c){
//    rez += (n%10)*put;
//    put *=10;
//    ok = true;
//    }
//    n /=10;
//  }
//  if (ok == true)
//    cout<<rez;
//  else
//    cout<<-1;

// se dau n numere naturale. determinati numarul pentru care prima cifra este maxima
// Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spaţii.
// n  cel mult 9 cifre
// dacă există mai multe numere pentru care prima cifră este maximă, se va determina cel mai mare dintre acestea
//5
//2467 645 687 59878 125
//// se va afisa 687
//  int n;
//  cin >> n;
//  int cmax = 0, nr = 0; // cifra maxima si numarul final
//  for(int i = 1; i<=n ; i++){
//    int x ;
//    cin >> x;
//    int cx = x; // copie a lui x
//    while (x > 9){
//      x /=10;  // in valoarea lui x am luat prima cifra
//    }
//    if(x > cmax){
//      cmax = x;
//      nr = cx;
//    }
//    else if (x == cmax){
//      if (cx > nr)
//      nr = cx;
//    }
//  }
//  cout<<nr;
//

// cifre comune
//Se citesc două numere naturale n și m. Să se decidă dacă cele două numere au cel puțin o cifră comună.
//Programul afișează pe ecran mesajul DA, dacă cele două numere au cel puțin o cifră comună, respectiv NU în caz contrar.
//1 ≤ n, m ≤ 1.000.000.000
// intrare: 173954 889205
// iesire DA

  int m,n;
  cin>>m>>n;
  // pentru fiecare cifra dint-un numar vom parcurge
  // celalat numar si vom testa daca
  // aceata cifra este sau nu
  bool ok= false;
  while(n){
    int cif = n%10;
    int cm = m; // copie a lui m
    while(m){
      if(cif == m%10)
        ok = true;
      m /=10;
    }
    m = cm;
    n /=10;
  }
  if (ok){
    cout<<"DA";
  }
  else{
    cout<<"NU";

  }




  return 0;
}















