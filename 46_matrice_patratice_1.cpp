#include<iostream>
using namespace std;
int a[1000][1000] ;
int main(){
    //# 1749 Zona4
    int n,z;
    cin>>n>>z;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(z==1){
                if((j>i) && (i+j<n-1)){
                    sum+=a[i][j];
                    cout<<a[i][j]<<' ';
                }
            }
            else if(z==2){
                if((j>i)&& (i+j>n-1)){
                    sum+=a[i][j];
                    cout<<a[i][j]<<' ';
                }
            }
            else if(z==3){
                if((i>j) && (i+j>n-1)){
                    sum+=a[i][j];
                    cout<<a[i][j]<<' ';
                }
            }
            else if(z==4){
                if((i>j) && (i+j<n-1)){
                    sum+=a[i][j];
                    cout<<a[i][j]<<' ';
                }
            }
        }
    }
//   5 1
//7 4 8 5 10
//7 7 10 2 2
//1 2 8 8 4
//9 9 5 3 2
//3 6 7 1 7

    /*
    / 0 1 2 3 4
    0 * * * * *
    1 * * * * *
    2 * * * * *
    3 * * * * *
    4 * * * * *
    */
    cout<<endl;
    cout<<sum;



    return 0;
}











