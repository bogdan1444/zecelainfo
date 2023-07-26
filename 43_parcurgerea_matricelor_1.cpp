#include<iostream>
using namespace std;
// declarare variabile globale
int a[101][101]; // am declarat o matrice de 101x101

int main(){
// // toate liniile au aceeasi lungime
    int n,m; // n- nr linii, m-nr col
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            cin>>a[i][j]; // a[i]este un vector
        }
    }
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
            cnt++;
            if(cnt%m==0){
                cout<<endl;
            }
        }
    }









return 0;
}



















