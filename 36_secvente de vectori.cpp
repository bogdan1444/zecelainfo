    #include<iostream>
    using namespace std;
    int main(){
        // #524 SecvEgale1
        //Se dă un vector cu n elemente, numere naturale.
//         Determinați cea mai lungă secvență de elemente din
//         vector care începe și se termină cu aceeași valoare.
//        Dacă în vector există mai multe secvențe corecte
//        de lungime maximă se va determina cea mai din stânga.
//        int n;
//        cin>>n;
//        int a[n];
//        for(int i=1;i<=n;i++){
//            cin>>a[i];
//        }
//        int st=0,dr = 0,lmax=0,l;
//        for(int i=1;i<=n;i++){
//            l=0;
//            for(int j=i;j<=n;j++){
//                if(a[j]==a[i]){
//                    l=j-i;
//                }
//            }
//            if(l>lmax){
//                lmax = l;
//                st =i;
//                dr = i+l;
//            }
//            cout<<st<<' '<<dr<<endl;
//        }
//        cout<<st<<' '<<dr;
//        int n;
//        cin>>n;
//        int a[n];
//        for(int i=0;i<n;i++){
//            cin>>a[i];
//        }
//        int st=0, dr=0, lmax=0,l;
//        for(int i=0;i<n;i++){
//            l=0;
//            for(int j=i+1;j<n;j++){
//                if(a[j]==a[i])
//                    l=j-i;
//            }
//            if(l>lmax){
//                lmax = l;
//                st =i;
//                dr = i+l;
//            }
//        }
////
//        cout<<st+1<<' '<<dr+1;
    int n, a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int st=0, dr=0,lmax=0, l;
    for(int i=1;i<n;i++){
        l=0;
        if(a[i-1]==a[i]){
            l++;
            for(int j=i+1;j<n;j++)
        }
    }





    // #578 SecvEgale2
    // se da un vector cu n elemente nr. nat. Determinati cate secvente
//     ale vectorului au toate elementele egale
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        for(int l=)
    }














    return 0;
    }



















