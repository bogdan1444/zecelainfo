#include<iostream>
using namespace std;

int main()
{
//    int n, a[1001];
//    cin >>n;
//    for(int i = 1; i<=n ; i++)
//        cin>>a[i];
//    // a = [1, 2, 3, 4, 5] , n =5;
//     // a= [1, 3, 4, 5, 5] n = 4// facem n-- pentru ca am eliminat un element
//    for(int i =3; i<=n; i++)
//        a[i-1] = a[i];
//    n--;
//    for(int i =1; i<=n; i++)
//        cout<<a[i]<<' ';


// #1452 Stergere_Element

//    int n, a[1500], p;
//    cin>>n>>p;
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    for(int i=p; i<n; i++){
//        a[i-1]=a[i];
////        cout<<a[i]<<endl;
//    }
//    n--;
////    cout<<"n = "<<n<<endl;
//    for(int i=0; i<n;i++) {
//        cout<<a[i]<<' ';
//
//    }

 // # 163stergere
// Se dă un vector cu n elemente numere naturale. Să se șteargă din vector toate elementele care sunt numere prime.
//    int n, a[1000];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//        int ca = a[i];
//        int d = 2, nr_div = 1;
//        while(ca>1){
//            int p = 0;
//            while(ca%d == 0){
//                ca /= d;
//                p++;
//        }
//        d++;
//        nr_div *=(p+1);
//        if(d*d > ca)
//            d = ca;
//        }
//    if(nr_div != 2)
//        cout<<a[i]<<' ';
//    }
    int n, a[1000];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++) {
        int ca = a[i];
        for(int j = i+1; j<n; j++)
            if(a[j] == ca){
                for(int k = j+1; k<n; k++){
                    a[k-1]=a[k];
                }
                n--;
                j--;
            }
    }
    for(int i = 0; i<n; i++)
        cout<<a[i]<<' ';



return 0;
}





























