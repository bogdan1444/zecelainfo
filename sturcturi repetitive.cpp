#include<iostream>
using namespace std;

int main(){
// citim un numar oarecare
//  for(int i=1;i<=10;i=i+3)
//    {cout<<i<<" ";}

//// while loop
//  int n;
//  cin>>n;
//  int i =1;
//  while(i<=n){
//    cout<<i<<" ";
//    i++; // i = i+1 echivalent cu i++ sau ++i
//  // care e diferenta intre i++ si ++i
//  // crestere dupa si inainte de afisare
////    cout<<++i;
////    cout<<i++;
//  }
//    cout<<endl;
//    cout<<i<<endl;

// aplicatie care din n numere il determina pe cel mai mic
//  int n;
//  int min =10;// dam o valoare mica
//  // daca vrem sa aflam maximul putem initializa
//  // max cu 0 si iteram
//  cin>>n;
//  for (int i=1; i<=n; ++i)
//    {
//      int x;
//      cin>>x;
//      if(x<min) {min = x;}
//    }
//    cout<<"minimul este: "<<min;

// aflare maxim
//  int n;cin>>n;
//  int max = 0;
//  for(int i = 1; i<=n; ++i){
//    int x;
//    cout<<"i = "<<i<<" "<< "introcuceti nr.: ";
//    cin>>x;
//
//    if(x>max){max = x;}
//    }
//    cout<<endl;
//    cout<<"maximul este "<<max;

// aplicatie sa determinam cate numere dintr-un sir
// au o anumita proprietate
//  int n,cont = 0;
//  cin>>n;
//  for (int i=1;i<=n;++i)
//    {if(i%2==0){cont++;}
//    }
//  cout<<"numarul de numere pare mai mici ca "<<n<<" este "<<cont;
//
// PROBLEME STRUCTURI REPETITIVE
// pb 10 ) se da un numar natural n, sa se afiseze 10 la
// puterea n -- vom itera printarea zerourilor dupa 1
//    int n;
//    cin>>n;
//    cout<<1;
//    for(int i =1;i<= n; i++)
//      {cout<<0;}
//

// pb 2) piramide
//  int n;
//  cin>>n; // numarul de nivele
//  for(int i= 1; i<=n; i++){
//    for(int j =1; j<=i; j++){
//      cout<<j<<" ";
//    }
//    cout<<endl;
//  }

// pb 3 - se va citi un numar de linii si de coloane
// patrat si se deseneaza cu doua caractere
//  int n; //  nr de caractere pe latura
//  char a, b; //
//  cin>> n >> a >>b;
//  for(int j =1; j<=n;j++)
//  {cout<<a;}
//  cout<<endl;
//  for(int i = 1; i<=n-2; i++)
//  {
//    for (int i= 1; i<=n;i++)
//    {
//      if (i == 1 || i ==n)
//        cout<<a;
//      else
//        cout<<b;
//    }
//    cout<<endl;
//  }
//   for(int j =1; j<=n;j++)
//  {cout<<a;}
//
//    versiunea a doua a acestei rezolvari
//    int n;
//    char a,b;
//    cin>>n>>a>>b;
//    for(int i = 1;i<=n;i++)
//    {  if (i==1 || i== n)
//        for(int j=1; j<=n; j++)
//          cout<<a;
//       else
//        for(int j =1; j<=n;j++)
//          if(j==1 ||j==n)
//            cout<<a;
//          else
//            cout<<b;
//        cout<<endl;
//    }


// se se afiseze pt fiecare unmar de la 1 la n
    //1
    //22
    //22
    //333
    //333   // s.a.m.d
//  int n;
//  cin>>n;
//  for(int i=1;i<=n;i++){
//    for(int j=1;j<=i;j++){
//      for(int k=1;k<=i;k++)
//      {
//        cout<<i;
//      }
//    cout<<endl;
//    }
//
//  }

// se dau n numere naturale, sa se determine
// ultimele doua numere inpare, nu neaparat disticte
// dintre cele date
// programul afiseaza pe ecra ultimele doua numere
// - impare  dintre cele date, in ordinea in care
// au fost citite
// - daca nu au fost citite numere inpare se va afisa
// mesajul numere insuficiente
   int n, nr1, nr2;
  nr1 = -1;
  nr2 = -1; // de ce?
  // pentru ca valorile le vom schimba, iar
  // daca vreuna a ramas -1 vom stii ca nu
  // am avut numere suficiente
  cin>>n;
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    if(x%2 == 1){
      nr2 = nr1;
      nr1= x; // atribuire in scara
    }
  }
  if(nr1 != -1 && nr2 !=-1)
    cout<<nr2<<" "<<nr1;
  else
    cout<<"Numere insuficiente";
  return 0;








  return 0;

}









