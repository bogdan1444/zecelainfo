    #include<iostream>
    #include<cmath>
    using namespace std;
    int main()
    {
//    int n, a[1000];
//        cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<n;i++){
//        int min = 100000, poz = -1;
//            for(int j=i; j<n; j++){
//                if(a[j]<min){
//                    min = a[j], poz = j;
//                swap(a[i],a[j]);
//                cout<<a[i]<<endl;
//                }
//            }
//    }
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<' ';


//    int n, a[1000];
//        cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[i]>a[j]){
//                swap(a[i],a[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<' ';





//    int cnt = 0;
//    for (int i=0;i<1000000;i++)
////        cnt++;
//        cout<<i<<' ';
//    // o.1 sec = 1 mil pasi; // pe pb info
//    // la c++ : 1 sec = 1 miliard pasi;
//    // deci  0.1 = 100 mil pasi
//    // citirea si afisarea ia foarte mult timp
//    //  pe pbinfo 0.1 sec = 1 - 4 mil pasi
//    //
//    // COMPLEXITATEA
//    for(int i=0;i<n;i++)
//        cin>>a[i]
//    O(n)    complexitate in timp este o(n) = n pasi
//
//    for(int i=0;i<n;i++)
//        cout<<a[i]
//    coplexitate to O(n) nu de 2*n;
//    // de ce algoritmi de sortare au complexitatea O(n^2)

//// #509 Ordonare
//    int n, a[1000];
//    cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<n;i++)
//        for(int j=i+1;j<n;j++)
//            if(a[i]>a[j])
//                swap(a[i],a[j]);
//    for(int i=0;i<n;i++)
//        cout<<a[i]<<' ';


    //#510 SortPrime Se dă un vector cu n elemente,
    //numere naturale. Afișați în ordine crescătoare valorile prime din acest vector.
//    int n, a[1000];
//    cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<n;i++)
//        for(int j=i+1;j<n;j++)
//            if(a[i]>a[j])
//                swap(a[i],a[j]);
//
//
//    for(int i=0; i<n; i++){
////        cout<<a[i]<<' ';
//        int ca = a[i];
//        int d = 2;
//        int cnt = 1;
//        while(ca>1){
//            int p = 0;
//            while(ca%d == 0){
//                ca /= d;
//                p++;
//            }
//            d++;
//            cnt *=(p+1);
//            if(d*d>ca)
//                d = ca;
//        }
//        if(cnt == 2)
//        cout<<a[i]<<' ';
////        cout<<a[i]<<' '<<cnt<<endl;
//    }

    //  intr-un program:
    // complexitatile nu se inmultesc, ele se aduna
    // afisarile iau mai mult timp decat o operatie normala




    // #618 inaltimi
    //  sa se scrie indicii in ordine crescatoare a elementelor
        int n, a[1000];
        for(int i = 0;i<n;i++)
            cin>>a[i];
        for(int i = 0;i<n;i++){
            int min = 10001, poz = -1;
            for (int j =i+1; j<n; j++)
                if(a[j]<min)

        }


















    return 0;
    }






















