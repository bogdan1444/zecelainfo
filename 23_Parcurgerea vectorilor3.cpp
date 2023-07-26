//#include<iostream>
#include<fstream>
#include<math.h>



using namespace std;
ifstream fin("elempp.in");
ofstream fout("elempp.out");





int main()
{
// //#1883 UEMM
//Se dă un șir cu n elemente, numere naturale. Să se afișeze, pentru fiecare element din șir,
// valoarea din șir aflată după acesta și mai mare decât acesta
//(Următorul Element Mai Mare). Dacă o asemenea valoare nu există, se va afișa -1.
// int n;
// cin>>n;
// int a[1000];
// for(int i =0 ; i<n; i++)
//    cin>>a[i];
// for(int i=0; i<n;i++){
//    int mm = -1;
//    for(int j=i; j<n; j++)
//        if (a[j]>a[i] && mm==-1)
//            mm = a[j];
//    a[i] = mm;
//
// }
// for(int i=1; i<=n ; i++)
//    cout<<a[i]<<' ';

//    int n;
//    cin>>n;
//    int a[1000];
//    for(int i =0; i<n;i++)
//        cin>>a[i];
//    for(int i = 0; i<n; i++){
//        for(int j=i; j<n;j++) {
//            if (a[j]>a[i]){
//                cout<<a[j]<<' ';
//                break;
//            }
//            if (j == n-1)
//                cout<<-1<<' ';
//
//        }
//    }




////3338 disjoint
////e consideră N copii, numerotați de la 1 la N și fiecare face parte dintr-o clasă. Inițial sunt n clase și fiecare copil face parte din propria sa clasă. Se dau M operații de două tipuri:
//
//    1 x y – acțiune: clasele din care fac parte copiii cu numerele x și y se reunesc. Dacă x și y fac deja parte din aceeași clasă, operația nu se efectuează
//    2 x y – întrebare: copiii cu numerele x și y sunt sau nu în aceeași clasă?
//
//
    /*
    C = {1, 2, 3, 4, 5, 6}  // elev 1 in clasa 2, 2 in 2 s.a.m.d
         1  2  3  4  5  6

    operatiea 1 1 4
    C = {1, 2 , 3, 1, 5, 6}
         1  2   3  4  5  6

    operatia 1 3 6
    C = {
    */

//    int n, m;
//    cin>>n>>m;
//    int op, x, y;
//    int c[501];
//    for(int i = 1; i<=n; i++)
//        c[i]=i;
//    for(int i = 1; i<=n; i++){
//        cin>>op>>x>>y;
//        if(op==2){
//            if(c[x]==c[y])
//                cout<<"DA\n";
//            else
//                cout<<"NU\n";
//        }
//        else{
//            if(c[x]<c[y]){
//                int cy= c[y];
//                for(int j; j<=n; j++){
//                    if(c[j] == cy)
//                        c[j] = c[x];
//                }
//            }
//            else{
//                int cx = c[x];
//                for(int j =1; j<=n; j++)
//                    if(c[j] = cx)
//                        c[j] = c[y];
//            }
//        }
//
//    }

// #132 ElemPP
//Se citeşte n şi un şir de n numere naturale.
//Cerinţa
//Să se afișeze elementele din șir care au proprietatea că primele două cifre din scrierea zecimală formează un pătrat perfect.
//Date de intrare
//Fişierul de intrare elempp.in conţine pe prima linie numărul n şi pe a doua linie n numere naturale separate prin spaţii.
//Date de ieşire
//Fişierul de ieşire elempp.out va conţine pe prima linie elementele din șirul dat care respectă proprietatea precizată. Ordinea acestor elemente este cea în care se află în șirul dat.
//


    int n, a[21];
    fin>>n;
    for(int i=1; i<=n; i++)
        fin>>a[i];
    for(int i=1; i<=n; i++){
        int ca = a[i];
        while(ca>99)
            ca /=10;
        int radacina = sqrt(ca);
        if(radacina*radacina == ca)
            fout<<a[i]<<' ';
    }








return 0;
}





























