#include<iostream>
using namespace std;

//int a[50][50];  // #2807Matrice10

//int a[100][100], cnt;    //#777 CntColoane

//int a[102][102];  //#779 VeciniPari

int a[100][100];  // #751 MCautare

int main(){

    // #2807Matrice10
//    Scrieți un program care citește de la tastatură
//     două numere naturale din intervalul [2,50], n și m,
//      și elementele unui   tablou bidimensional cu n linii și
//       m coloane, numere naturale distincte din intervalul
//       [0,104].
//Programul interschimbă valoarea minimă din ultima coloană a
//tabloului cu valoarea minimă din prima coloană a tabloului,
// apoi afișează pe ecran tabloul modificat, câte o linie a
// tabloului pe câte o linie a ecranului, elementele fiecărei
// linii fiind separate prin câte un spațiu.
//    int n,m;
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>a[i][j] ;
//        }
//    }
//    int min1=10001, ind_min1=0, minul=10001, ind_minul=0;
//    for(int i=0;i<n;i++){
//        if(a[i][0]<min1){
//            min1= a[i][0];
//            ind_min1=i;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(a[i][m-1]<minul){
//            minul=a[i][m-1];
//            ind_minul=i;
//        }
//
//    }
////    cout<<min1<<' '<<minul<<endl;
//    swap(a[ind_min1][0],a[ind_minul][m-1]);
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cout<<a[i][j]<<' ';
//        }
//        cout<<endl;
//    }



    //#777 CntColoane
//    Se dă o matrice cu n linii şi m coloane şi elemente
//     numere naturale. Să se determine câte coloane ale
//      matricei au
//     elementele distincte două câte două.
//    int n,m;
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>a[i][j];
//        }
//    }
//    for(int j=0;j<m;j++){
//        bool disticte=true;
//        for(int i=0;i<n;i++){
//            for(int k=i+1;k<n;k++){
//                if(a[i][j]==a[k][j]){
//                    disticte=false;
//                }
//            }
//        }
//        if(disticte){
//            cnt++;
//        }
//    }
//    cout<<cnt;

//#779 VeciniPari
//Se dă o matrice cu n linii şi m coloane şi
// elemente numere naturale. Să se determine câte
// elemente
// din matrice au toți vecinii numere pare.
//int n,m;
//cin>>n>>m;
//for(int i=1;i<=n;i++){
//    for(int j=1;j<=m;j++){
//        cin>>a[i][j];
//    }
//}
//int cnt=0;
//for(int  i=1;i<=n;i++){
//    for(int j=1;j<=m;j++){
//        if(a[i-1][j]%2==0 && a[i+1][j]%2==0 && a[i][j+1]%2==0 && a[i][j-1]%2==0){
//            cnt++;
//        }
//    }
//}
//cout<<cnt;


// #751 MCautare
// Se da o matrice cu n linii si m coloane numere naturale si k
// valori naturale. Determinati pentru fiecare dintre cele k valori
// daca apare pe fiecare linie a matricei
//int n,m,k,x;
//cin>>n>>m;
//for(int i=0;i<n;i++)
//    for(int j=0;j<m;j++)
//        cin>>a[i][j];
//
//for(int i=0;i<n;i++){
//    for(int j=0;j<m;j++){
//        for(int l=j+1;l<m;l++){
//            if(a[i][j]>a[i][l]){
//                swap(a[i][j],a[i][l]);
//            }
//        }
//    }
//}
//cin>>k;
//for(int kk=0;kk<k;kk++, cout<<endl){
//    cin>>x;
//    bool gasitL =true;
//    for(int i=0;i<n;i++){
//        int st=0, dr=m-1;
//        bool gasitli=false;
//        while(st<=dr){
//            int mij=(st+dr)/2;
//            if(a[i][mij]==x){
//                i++, gasitli=true;
//                break;
//            }
//            else if(x>a[i][mij]){
//                st=mij+1;
//            }
//            else{
//                dr=mij-1;
//            }
//        }
//        if(!gasitli){
//            gasitL=false;
//        }
//    }
//    if(gasitL){
//        cout<<"DA";
//    }
//    else{
//        cout<<"NU";
//        }
//}

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }// in continuare sortez liniile matricei a
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=j+1;k<m;k++){
                if(a[i][j]>a[i][k]) {
                    swap(a[i][j],a[i][k]);
                }
            }
        }
    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cout<<a[i][j]<<' ';
//        }
//        cout<<endl;
//    } // vom cauta binar pe fiecaere din cele k elemente
    int k,x;
    cin>>k;
    for(int l=0;l<k;l++, cout<<endl){
        cin>>x;
        bool gasitTL=true; // presupunem ca elementul se afla pe toate liniile
        // verificam linie cu linie
        for(int i=0;i<n;i++){
            bool gasitli=false;
            int st=0, dr=m-1;
            while(st<=dr){
                int mij=(st+dr)/2;
                if(a[i][mij]==x){
                    gasitli=true;
                    break;
                }
                else if(x>a[i][mij]){
                    st=mij+1;
                }
                else{
                    dr=mij-1;
                }
            }
            if(!gasitli){
                gasitTL=false;
                break;
            }
        }
        if(gasitTL){
            cout<<"DA";
        }
        else{
            cout<<"NU";
        }
    }











  return 0;

}









