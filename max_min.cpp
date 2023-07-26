#include<iostream>
using namespace std;
int main()
{
//  int n;
//  cin>>n;
//  int maxim = -1000000;
//  for (int i = 1 ; i<= n;i++){
//    int x;
//    cin>>x;
//    if(x > maxim)
//      maxim = x;
//  }
//  cout<< maxim;
//
//dintre n numere naturale sa se determine valoarea
// valoarea maxima din sir si de cate ori apare
//  int n;
//  cin >> n;
//  int maxim = 0;
//  int aparitie = 0;
//  for (int i =1 ; i<=n; i++){
//    int x;
//    cin>>x;
//    if(x>maxim){
//      maxim = x;
//      aparitie = 1;
//    }
//    else if(x == maxim){
//      aparitie ++;}
//
//  }
//  cout<<"maxim "<<maxim<< "aparitie "<<aparitie;

// se dau n numere naturale. determinati cele mai mici trei numere
// se se afiseze in ordine descrescatoare
//  int n;
//  cin>>n;
//  int min1 =100000 , min2 = 100000, min3 = 100000;
//  for (int i =1 ; i<= n ; i++){
//    int x ;
//    cin >> x;
//    if (x<min1){
//    min3 = min2;
//    min2 = min1;
//    min1 =x;
//    }
//    else if (x<min2){
//    min3 = min2;
//    min2 = x;
//    }
//    else if (x < min3)
//    {
//    min3 = x;
//    }
//  }
//  cout<<min3<<" "<<min2<<" "<<min1;

// nLa concursul “Miss & Mister Boboc” participă n perechi de elevi, despre fiecare elev cunoscându-se înălțimea.
// Numim grad de disproporționalitate al unei perechi este diferența în valoare absolută dintre înălțimile elevilor care formează perechea.
// Să se determine perechea cu grad de disproporționalitate maxim.
// 1<=n<=1000
  int n;
  cin >> n;
  int a, b, maxim =-1;  //  a si b in care retinem numerele finale si maxim -1
  for (int i= 1; i<=n; i++){
    int x, y;
    cin>>x>>y;
    if (x>y){
      int grdis = x-y;
      if (grdis > maxim){
      maxim = grdis;
      a = x; b = y;
      }
    }
    else{
      int grdis = x-y;
      if(grdis > maxim){
        maxim = grdis; // acelasi lucru ca si deasupra
        a = x; b =y;
        }
    }
  }
  cout<<"cele mai mici perechi"<<endl;
  cout<<"a = "<<a<<" b = "<<b;

return 0;

}
