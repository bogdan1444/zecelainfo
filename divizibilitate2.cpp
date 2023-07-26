#include<iostream>
using namespace std;

int cmmdc(int x, int y);
int ogl(int x);

int main()
{
  //1 PROBLEMA NR PRIME INTRE ELE
// sa se scrie un program care sa verifice daca doua numere
//naturale citite de la tastatura sunt prime intre ele
//Restricţii şi precizări
//    0 < a, b < 1.000.000.000
//    două numere naturale sunt prime între ele dacă cel mai mare divizor comun al lor este
//Exemplu 1
//Intrare
//24 36
//Ieșire
////NOPIE
//  int a,b ;
//  cin >>a >>b;
//  while (b){
//    int r = a % b;
//    a = b;
//    b = r;
//  }
//  if ( a == 1 ) {
//    cout<<"PIE";
//  }
//  else{
//    cout<<"NOPIE";
//  }
//
//
//  return 0;
//}



//2. PROBLEMA NR PRIME INTRE ELE 1
//  se citeste un numar nat n > 1;
// sa se cate perechi (a,b) 1<=a<=b<=n
// de nr nat sunt prime intre ele
// citire n de la tastatura
//Date de ieşire

//Programul afișează pe ecran numărul C, reprezentând valoarea dorită.
//Restricţii şi precizări
//    1 < n ≤ 1000
//Exemplu:
//Intrare:  6
//Ieșire:  12
//Perechile sunt: (1 1) (1 2) (1 3) (1 4) (1 5) ( 1 6) (2 3) (2 5) (3 4) (3 5) (4 5) (5 6) .
//  int n, nr_per = 0;
//  cin>>n;
//  for( int i = 1; i <= n ; i++){
//    for (int j = i+1; j <= n; j++){
//      int a = i, b = j;
//      cout<<"a= "<<a<<endl<<"b= "<<j<<endl;
//      while(b){
//        int r = a%b;
//        a = b;
//        b = r;
//      }
//      if(a == 1)
//        nr_per += 1;
//        cout<<"nr_per "<<nr_per<<endl;
//    }
//    cout<<"nr_per "<<nr_per<<endl;
//  }
//  cout << nr_per;
//
//  int n;
//  cin >>n ;
//  int nr = 0;
//  for (int i =1 ;i <n; i++){
//    for(int j = i; j<=n; j++){
//      int a = i ;
//      int b = j;
//      while(b){
//        int r = a%b;
//        a = b ;
//        b = r ;
//      }
//      if (a ==1 )
//        nr ++;
//    }
//  }
//  cout<<nr;





 //Se citesc numere naturale de la tastatură până la apariția lui zero. Să se determine câte perechi de numere citite consecutiv sunt prime între ele.
//  Date de intrare
//
//Programul citește de la tastatură numere naturale. Citirea se încheie la introducerea valorii 0.
//Date de ieşire
//
//Programul afișează pe ecran numărul C, reprezentând numărul de perechi citite care respectă condiția cerută.
//Restricţii şi precizări
//
//    numerele citite aparțin intervalului [0 ; 1.000.000.000)
//    valoarea zero, care încheie citirile, nu se va prelucra
//Exemplu:
//
//Intrare
//
//15 63 43 129 55 15 4 0
//
//Ieșire
//
////3

//  int x, y , perechi;
//  cin >> x;
//  if (x == 0 ){
//    cout<<0;
//  }
//  else{
//    perechi = 0;
//    cin >> y;
//    while(y){
//      if(cmmdc(x,y) == 1){
//      perechi += 1;}
//      x = y;
//      cin >> y;
//    }
//  cout<<perechi;
//  }







// Oglindit4 #409
//Cerinţa
//
//Se dau n numere naturale. Determinați câte dintre ele au proprietatea că sunt prime cu oglinditul lor.
//Date de intrare
//
//Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spaţii.
//Date de ieşire
//
//Programul afișează pe ecran numărul C, reprezentând valoarea ceruta.
//Restricţii şi precizări
//
//    1 ≤ n ≤ 1000
//    cele n numere citite vor fi mai mici decât 1.000.000.000
//
//Exemplu:
//
//Intrare
//
//5
//24 50 25 81 359
//
//Ieșire
//
//2
//
//Explicație
//
//Numerele care sunt prime cu oglinditul lor sunt 25 (prim cu 52) și 359 (prim cu 953).
//  int n, cont = 0;
//  cin>>n;
//  while(n--){
//    int x;
//    cin>>x;
//    if (cmmdc(x, ogl(x))== 1){
//      cont ++;
//    }
//  }
//  cout<<cont;


// SAU se mai poate face:
// int n, cnt = 0;
// cin >> n;
// for (int i = 1; i<= n ; i++){
//    int x, cx, ogl;
//    cin >> x;
//    cx = x, ogl = 0;
//    while(x){
//      ogl = ogl*10 +x %10;
//      x /= 10;
//    }
//    int a = ogl;
//    int b = cx;
//    while (b){
//      int r = a % b ;
//      a =  b ;
//      b = r ;
//    }
//    if ( a==1 ){
//      cnt ++;
//    }
// }
//
//  cout << cnt;








// SPFractii #390
//
//Se dau 4 numere naturale a b c d, reprezentând fracțiile a/b
//și c/d. Calculați suma și produsul celor două fracții, aduse la forma ireductibilă.
//Date de intrare
//
//Programul citește de la tastatură numerele a b c d.
//Date de ieşire
//
//Programul afișează pe ecran numerele m n, reprezentând numărătorul și numitorul sumei celor două fracţii, adusă la forma ireductibilă, iar linia următoare numerele p q, reprezentând numărătorul și numitorul produsului celor două fracții, adus la forma ireductibilă.
//Restricţii şi precizări
//
//    1 ≤ a, b, c, d ≤ 10000
//
//Exemplu:
//Intrare
//
//1 2 4 3
//
//Ieșire
//
//11 6
//2 3
//
//Explicație
//
//Suma fractiilor 1/2 și 4/3 este 11/6, iar produsul este 2/3.
//
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  // trebuie sa aducem fractiile la acelasi numitor
  int cb = b, cd = d;
  while (b){
    int r = d % b;
    d = b;
    b = r;
  }
//  cout<<"cmmcd al "<<cb<<" si "<<cd<<" este "<<d ;
  int cmmmdc1 = d; // cel mai mare divizor comun intre b si d
  b = cb, d = cd;
  int cmmmc1 = b/cmmmdc1 * d;
  int ca = a, cc = c;
  a = a*(cmmmc1/b);
  c = c * (cmmmc1/d);
  int x1 = a+c;
  int x2 = cmmmc1;
  int cx1 = x1;
  int cx2 = x2;
  while (x2){
    int r = x1%x2;
    x1 = x2 ;
    x2 = r;
  }
 cout<<cx1 / x1<< " " << cx2 / x1<<endl;
 a = ca;
 c = cc;
 x1 = a *c;
 x2 = b*d;
 int cxx1 = x1, cxx2 = x2;
 while(x2){
 int r = x1%x2;
 x1 = x2;
 x2 = r;
 }
 cout<<cxx1/x1<<" "<<cxx2/x1;







  return 0;
}






int ogl(int x){
  int o = 0;
  while(x){
    o = o*10 + x%10;
    x /= 10;
  }
  return o;
}

int cmmdc(int x, int y){
  if (x*y == 0){
    return x+y;
  }
  else{
    while(y){
      int r = x%y;
      x = y;
      y = r;
    }
    return x;
  }
}













