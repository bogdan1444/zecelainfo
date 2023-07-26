#include<iostream>
using namespace std;

int main()
{
// NumararePIE # 498
// Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.
//    int n;
//    cin>>n;
//    int a[200], cnt = 0;
//    for(int i =0 ;i<n ; i++)
//        cin>>a[i];
//    for(int i = 0; i<n; i++)
//        for(int j =i; j<n; j++){
//            int x = a[i];
//            int y = a[j];
//            while(y){
//                int r = x%y;
//                x = y;
//                y = r;
//            }
//            if (x == 1)
//                cnt++;
//        }
//    cout<<cnt;




// const #493
//Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y,
//cu proprietatea că y[i] este egal cu restul împărțirii lui x[i] la suma cifrelor lui x[i].
    int n;
    cin>>n;
    int a[200] ;
    for(int i =0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int x = a[i];
        int sumcif_x = 0;
        while(x>0){
            sumcif_x += x%10;
            x /= 10;
        }
        cout<< a[i]%sumcif_x<<' ';
    }

return 0;
}












