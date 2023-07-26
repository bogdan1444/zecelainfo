#include<iostream>
using namespace std;

int a[101][101], cnt;    // cnt e autodeclarat cu val 0

int main(){
    // #666 NrPrime - Se da o matrice cu n linii si m coloane numere naturale.
    // sa se determine cate dintre elementele situate pe linii cu indici pari sunt prime
//    int n,m;
//    cin>>n>>m;
//    for(int i=1;i<=n;i++)
//        for(int j=1;j<=m;j++)
//            cin>>a[i][j];
//    for(int i=2;i<=n;i+=2){
//        for(int j=1;j<=m;j++){
//            int ca= a[i][j];
//            int nrdiv=1;
//            int d=2; // divizor
//            while(ca>1){
//                int p=0;
//                while(ca%d==0){
//                    ca/=d;
//                    p++;
//                }
//            nrdiv*=(p+1);
//            d+=1;
//            if(d*d>ca)
//                d=ca;;
//            }
//            if(nrdiv==2){
//                 cnt++;
//            }
//
//        }
//    }
//    cout<<cnt;



    // #770 Permcol - se da o matrice cu n linii si m coloane si elemente numere
    // naturale. sa se permute coloanele matricei circular spre stanga cu o pozitie
    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    for(int i=1; i<=n;i++){
        int ca = a[i][1]
    }











  return 0;

}









