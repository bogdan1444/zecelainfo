    #include<iostream>
    #include<cmath>
    using namespace std;
    int prime_intre_ele(int a,int b) ;
    int main()
    {
    // #618 inaltimi
    //  sa se scrie indicii in ordine crescatoare a elementelor
//        int n, a[1000];
//        cin>>n;
//        for(int i = 0; i<n; i++)
//            cin>>a[i];
//        for(int j=0;j<n;j++){
//
//            int min = 999999;
//            int indx_min = 0;
//            for(int i = 0; i<n; i++){  // aflu minimul sirului
//                if(a[i]<min){
//                    min = a[i];
//                    indx_min = i;
//                }
//            }
//            a[indx_min] = 999999;
//            cout<<indx_min+1<<' ';
//
//        }

//    afisare indici dupa ordinea descrescatoare a elementelor idicilor aferenti
//    int n, a[1000];
//    cin>>n;
//    for(int i = 0; i<n; i++)
//        cin>>a[i];
//    for(int j= 0; j<n; j++){
//
//        int max = 0, ind_max = 0;
//        for(int i = 0; i<n; i++){ // aflare maxim
//            if(a[i]>max){
//                max = a[i];
//                ind_max = i;
//            }
//        }
//        a[ind_max] = 0;
//        cout<<ind_max+1<<' ';
//    }
//    cout<<endl;
//    cout<<"maximul este: "<<max<<" la indicele: "<<ind_max+1;

    //#514 SortPIE
//     afisati in ordine descrescatoare valorile
//     din vector care sunt prime cu ultimul element
//    int n, a[1000];
//    cin>>n;
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    cout<<endl;
//    for(int i=0; i< n-1; i++){  // vom sorta primele n-1 numere din sir
//        for(int j = i+1;j<n-1;j++){
////            cout<<a[j]<<endl;
//            if(a[j]<a[i]){
//                swap(a[i], a[j]);
//            }
//        }
//    }
//    for(int i = 0; i<n; i++)
//        cout<<a[i]<<' ';
//
//    cout<<endl;
//    for(int i = 0; i<n-1; i++){
//        int aa = a[i], bb = a[n-1];
//        cout<<"a = "<<aa<<' '<<" b= "<<bb<<endl;
//        while(bb){
//            int r = aa%bb;
//            aa = bb;
//            bb = r;
//            cout<<" r = "<<r<<' '<<"a = "<<aa<<"        "  ;
//        }
//        cout<<endl;
//        if(aa == 1)
//        cout<<" se va afisa: "<<a[i]<<' '<<endl;
//
//
//    }


// # 180 SortMinMax
// sa se sorteze crescator elementele dint-un sir
// cuprinse intre elementul de valoare maxima si
//  cel de valoare minima
//    int n, a[1000];
//    int mmin = 1000001, mmax = 0, i_min, i_max;
//    cin>>n;
//    for(int i = 0;i<n; i++)
//        cin>>a[i];
//    for(int i = 0;i<n; i++){
//        if(a[i]<mmin)
//            mmin = a[i], i_min = i;
//        if(a[i]>mmax)
//            mmax = a[i], i_max = i;
//    }
////    cout<<endl<<"maximul "<<mmax<<" la indicele "<<i_max<<endl<<"minimul "<<mmin<<" la indicele "<<i_min<<endl;;
//    if(i_min>i_max)
//        swap(i_min,i_max) ;
////    cout<<endl<<" indicele max "<<i_max<<endl<<" indicele min "<<i_min<<endl;;
//    for(int i = i_min; i<i_max; i++){
////        cout<<a[i]<<' ';
//        for(int j=i+1; j<=i_max;  j++){
////            cout<<a[j]<<' ';
//            if(a[i]>a[j]) {
//                swap(a[i],a[j]);
//            }
//        }
//
//    }
////    cout<<endl;
//    for(int i =0;i<n;i++)
//        cout<<a[i]<<' ';

// Varianta mea
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mmax = 0, ind_max, mmin = 1000001, ind_min;
    for(int i=0;i<n;i++){// aflam minimul si maximul si indicii acestora
        if(a[i]>mmax){
            mmax = a[i];
            ind_max = i;
        }
        if(a[i]<mmin){
            mmin= a[i];
            ind_min = i;
        }
    }
//    cout<<mmin<<' '<<mmax<<endl;
//    cout<<ind_min<<' '<<ind_max<<endl;


    int c;
    if(ind_max < ind_min){
//        cout<<" da ";
        c = ind_max;
        ind_max = ind_min;
        ind_min = c;
    }
//    cout<<ind_min<<' '<<ind_max<<endl;
    for(int i=ind_min; i<=ind_max; i++){
        for(int j=i+1; j<=ind_max; j++ ) {
            if(a[i]>a[j]){
                int c = a[j];
                a[j] = a[i];
                a[i] = c;
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';






    return 0;
    }


int prime_intre_ele(int a,int b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return (a==1);
}






















