    #include<iostream>
    using namespace std;

    int main(){
//    int n;
    //stergere element
//    int a[1000];
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
////    int x; //citim la care sa stergem elementul
////    cin>>x;
////    for(int i=x+1;i<n;i++){
////        a[i-1]=a[i];
////    }
////    n--;
////    for(int i=0;i<n;i++){
////        cout<<a[i]<<' ';
////    }
////
//
//    // inserare la o anumita pozitie din vector
//    for(int i=1;i<=n;i++){
//        cout<<a[i]<<' ';
//    }
//    int x,poz;
//    cin>>x>>poz;
//    for(int i=n;i>=poz;--i){
//        a[i+1]=a[i];
//    }
//    n++;
//    a[poz]=x;
//    for(int i=1;i<=n;i++){
//        cout<<a[i]<<' ';
//    }

    // algoritmi de sortare
//    int n, a[1000];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int nrpasi=0;
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(a[i]>a[j]){
//                int sw=a[i];
//                a[i]=a[j];
//                a[j]=sw;
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<' ';
//    }



//    int n, a[1000];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for(int i=0;i<n;i++){
//        int min =a[i] , poz=i;
//        for(int j=i+1;j<n;j++) {
//            if(a[j]<min){
//                min=a[j];
//                poz=j;
//            }
//        }
//        swap(a[poz],a[i]) ;
//    }
//    for(int i=0;i<n;i++){
//        cout<<a[i];
//
//    }

    // interclasare = din 2 vectori ordonati crescator
    // se face unul
        int n,m;
        int a[100000], b[100000], c[200000];
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int i=0, j=0, k=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                c[k]=a[i];
                k++, i++;
            }
            else{
                c[k]=b[j];
                k++;
                j++;
            }
        }
        while(i<n){
            c[k]=a[i];
            k++;
            i++;
        }
        while(j<m){
            c[k++]=b[j++];
        }
        cout<<" k ="<<k<<endl;
        for(int i=0;i<=k;i++){
            cout<<c[i]<<' ';
        }










    return 0;
    }



















