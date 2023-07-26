#include<iostream>
using namespace std;
int minn(int x, int y);
int a[20][20];
int main(){
//generare de matrice elemente de la 1 la n x n    
//     int n;
//     cin>>n;
//     int cnt=1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             a[i][j]=cnt;
//             cnt++;
//         } 
//     }
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         cout<<a[i][j]<<' ';
//     }
//     cout<<endl; 
// }
// return 0;



//#206 GenMat1
// Scrieţi un program care citeşte de la tastatură 
// două numere naturale nenule n şi m şi care 
// construieşte în memorie şi apoi afişează o 
// matrice A cu n linii (numerotate de la 1 la n) 
// şi m coloane (numerotate de la 1 la m) cu
//  proprietatea că fiecare element Aij 
//  memorează cea mai mică dintre valorile
//   indicilor i şi j ( 1≤i≤n, 1≤j≤m ).
int n,m;
cin>>n>>m;
for (int i = 1; i <= n; i++){
    for (int j = 1; j <=m; j++){
        cout<<minn(i,j)<<' ';
    }
    cout<<endl;
    
}


return 0;
}
int minn(int x, int y){
    if (x>=y)
        return y;
    else
        return x;
}