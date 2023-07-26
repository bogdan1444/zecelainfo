    #include<iostream>
    using namespace std;
    int main(){
    // 516 SumSec1
//    Se dă un vector format din n elemente, numere naturale.
//     Calculați suma elementelor
//    din secvența determinată de primul și ultimul element impar.
//    int n;
//    int a[1000];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];  // oricare set de numere consecutive din vector formeaza o secventa
//    }
////    for(int i=0;i<n;i++){ // indicele primului numar din secventa
////        for(int l=1;l+i<n;l++){ // lugimile secventelor pe rand
////            for(int j=i;j<i+l;j++){ // afisare secvente
////                cout<<a[j];
////            }
////        cout<<endl;
////        }
////    }
//    int i1=-1,i2;
//    for(int i=0;i<n;i++){
//        if(a[i]%2==1 && i1==-1){
//             i1 = i;
//        }
//        else if(a[i]%2==1){
//            i2 =i;
//        }
//    }
//    int sum = 0;
//    for(int i=i1;i<=i2;i++){
//        sum+=a[i];
//    }
//    cout<<sum;

// #518 SecvZero
// se da un vector cu n numere naturale. Determinati cea mai lunga secventa de
// elemente nule din vector. Daca exita mai multe elemente nule de lungime maxima se
// va determina ce mai din stanga.
//    int n;
//    cin>>n;
//    int a[1000];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int ist=0, idr=0, lmax=0, l;
//    for(int i=0;i<n;i++){
//        if(a[i]==0){
//            l = 0;
//            for(int j = i+1; j<n;j++) {
//                if(a[j]==0){
//                    l++;
//                }
//                else
//                    j=n-1;
//                if(l>lmax) {
//                    lmax = l;
//                    ist = i;
//                    idr = j;
//                }
//
//            }
//        }
//
//    }
//    cout<<ist+1<<' '<<idr+1;

// varianta 2
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int ind_s, ind_d, lmax =0;
//    for(int i=0;i<n;i++){
//        if(a[i]==0){
//            for(int j=i+1;j<n && a[j]==0 ;j++){
//                if(j-i>lmax){
//                    lmax = j-i;
//                    ind_s =i;
//                    ind_d =j;
//                }
//            }
//        }
//    }
//    cout<<ind_s+1<<' '<<ind_d+1;



//   #523 SecvEgale Se da un vector cu n elemente, numere naturale.
// Det cea mai lunga secv de elem egale din vect
// daca in vect sunt mai multe secv de elem egale de lungime max se
// va determina cea mai din dreapta;
//    int n ;
//    cin>>n;
//    int a[n];
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
//    int st=0,dr=0,lmax=0, l=0;
//    for(int i=2;i<=n;i++){ // sau mai mic strict decat n
//        if(a[i-1]==a[i]){
//            l=1;
//            for(int j=i+1;j<=n && a[i]==a[j];j++){
//                l++;
//                if(l>=lmax){
//                    lmax =l;
//                    st = i-1;
//                    dr = j;
//                }
//            }
//        }
////        cout<<st<<' '<<dr<<"  l= "<<l<<endl;
//    }
//    cout<<st<<' '<<dr;
// VARIANTA 2
    //
    int n ;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int lmax=0, st=0,dr=0;
    for(int i=1;i<=n;i++){
        int ca =a[i];
        int l=0;
        for(int j=i;j<=n && a[j]==ca;j++){
            l++;
            cout<<st<<' '<<dr<<endl;
        }
        if(l>=lmax){
            lmax = l;
            st = i;
            dr = i+l-1;
        }

    }

    cout<<st<<' '<<dr;















    return 0;
    }



















