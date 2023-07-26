#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
bool prim(int a);
int main()
{
//#498 NumararePIE
// Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.
//    int n;
//    cin>>n;
//    int a[1001];
//    for(int i =1; i<=n; i++)
//        cin>>a[i];
//    int cnt;
//    for(int i = 1; i<n; i++)
//        for(int j = i+1; j<=n; j++ ){
//        int x = a[i];
//        int y = a[j];
//        while(y){
//            int r = x%y;
//            x = y;
//            y = r;
//        }
//        if(x==1)
//            cnt++;
//        }
//    cout<<cnt;
//return 0;
//}








////# 493 Constr --
////Se dă un vector x cu n elemente, numere naturale.
////Să se construiască un alt vector, y, cu proprietatea că y[i] este egal cu restul împărțirii lui x[i] la suma cifrelor lui x[i].
//    int n;
//    cin>>n;
//    int a[201], b[201];
//    for(int i =1 ; i<=n;i++)
//        cin>>a[i];
//    for (int i = 1; i<=n;i++){
//        int ca = a[i], sumcif = 0;
//        while(ca){
//            sumcif += ca%10;
//            ca /= 10;
//
//        }
//        b[i] = a[i]%sumcif;
//    }
//
//    for(int i = 1; i<=n; i++)
//        cout<<b[i]<<' ';





////#494 Constr1
////Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, cu n elemente,
////cu proprietatea că y[i] este egal cu suma elementelor din x, cu excepția lui x[i].
//    int n; cin>>n;
//    int a[201], b[201];
//    for(int i=1; i<=n; i++)
//        cin>>a[i];
//    int sum_elem_a = 0;
//    for(int i=1; i<=n; i++)
//        sum_elem_a += a[i];
//    for(int i=1; i<=n; i++)
//        cout<<sum_elem_a - a[i]<<' ';
//







// #495 Constr2
//Se da un vector x cu n elemente, num. naturale. Sa se construiasca un alt vecotor y
//care sa  contina elementele prime din x, in ordine inversa.

//Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spaţii, reprezentând elementele vectorului.
//Date de ieşire//
//Programul afișează pe ecran elementele vectorului y, separate prin exact un spațiu.
//Restricţii şi precizări//
//    1 ≤ n ≤ 200
//    elementele vectorului vor fi cuprinse între 0 și 1.000.000.000
//    int n ; cin>>n;
//    int a[201],b[201], nr= 0 ;// nr = #numere prime
//    for(int i = 1; i<=n; i++)
//        cin>>a[i];
//    for(int i = n; i>=1; i--){
//        int ca = a[i];
////        cout<<ca;
//        int d = 2, cnt = 1;
//        while(ca >1){
//            int  p = 0;
//            while(ca%d ==0){
//                p++, ca /= d;
//            }
//            d++;
//            cnt *=(p+1);
//            if(d*d > ca)
//                d = ca;
//        }
////        cout<<" elem: "<< a[i]<<" nr div: "<<cnt<<endl;
//        if(cnt == 2){
//            nr++;
//            b[nr] = a[i];
//            cout<<a[i]<<' ';
//        }
//    }
//    int nr_prim;
//    cout<<"introduceti numar prim ";
//    cin>>nr_prim;
//    if(prim(nr_prim))
////        cout<<"da intr-adevar e prim "<<endl;
////    else
////        cout<<"nu e prim "<<endl;
//    int n, a[200];
//    cin>>n;
//    for(int i=1; i<=n; i++){
//        cin>>a[i];
////        if(prim(a[i]))
////            cout<<"prim "<<endl;
////        else
////            cout<<"nu e prim "<<endl;
//    }
//    for(int i = n; i>=1; i--){
//        if(prim(a[i]))
//            cout<<a[i]<<' ';
//    }





// #383 inlocuireK
//Cerinţa
//
//Se dă un număr natural nenul k și vector cu n numere naturale.
// Să se înlocuiască fiecare element cu multiplul lui k cel mai apropiat de el și să se afișeze elementele astfel obținute în ordine inversă.
//Date de intrare
//
//Programul citește de la tastatură numerele k și n, iar apoi n numere naturale, separate prin spaţii, reprezentând elementele vectorului.
//Date de ieşire
//
//Programul afișează pe ecran elementele vectorului, după înlocuire, în ordine inversă, separate prin exact un spațiu.
//Restricţii şi precizări
//
//    1 ≤ n ≤ 200
//    1 ≤ k ≤ 100
//    elementele vectorului vor fi cuprinse între 1 și 1.000.000
//    dacă pentru un element al vectorului există mai multi cei mai apropiați multipli ai lui k, elementul va fi înlocui cu cel mai mic dintre aceștia
//
//Exemplu:
//
//Intrare
//
//5 4
//17 14 24 25
//
//Ieșire
//
//25 25 15 15

//    int n, k;
//    int a[201];
//    cin>>k>>n;
//    for(int i = 1; i<=n ;i++)
//        cin>>a[i];
//    for(int i = 1; i<=n ;i++){
//        int nr = a[i]/k;
//        int nr1 = nr + 1;
//        if(a[i]- nr*k <= nr1*k -a[i])
//            a[i] = nr*k;
//        else
//            a[i] = nr1*k;
//
//    }
//    for(int i = n; i>=1 ;i--){
//        cout<<a[i]<<' ' ;
//
//    }
//
//    int n, k, a[200];
//    cin>>k>>n;
//    for(int i = 1; i<=n; i++ )
//        cin>>a[i];
//    for(int i = n; i>=1 ; i--){
//        int fact_inf = a[i]/k;
//        int fact_sup = fact_inf+1;
////        cout<<"la "<<a[i]<<"fact_inf la "<<fact_inf<<" si fact_sup "<<fact_sup<<endl;
//        if(abs(a[i] - fact_inf*k)<= abs(a[i]- fact_sup*k))
//            cout<<k*fact_inf<<' ';
//        else
//            cout<<k*fact_sup<<' ';
//    }






//




return 0;
}
bool prim(int a){
    int d =2, cnt =1;
    if(a==0 || a==1){
//        cout<<" 0 sau 1 ";
        return false;
    }
//    cout<<a;
    while(a>1){
        int p=0;
        while(a%d == 0){
            p++, a/=d;
        }
        d++;
        cnt *=(p+1);
        if(d*d>a){
            d = a;
        }
    }
    if(cnt == 2)
        return true;
    else
        return false;

}



















