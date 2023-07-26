    #include<iostream>
    #include<cmath>
    using namespace std;
    int main()
    {
    // # 2689 PalXXL
//    Cerința
//
//Se dă un șir cu n cifre, reprezentând cifrele unui număr natural x. Să se afișeze numărul x, iar pe linia următoare mesajul DA dacă x este palindrom și mesajul NU în caz contrar.
//Date de intrare
//
//Programul citește de la tastatură numărul n, iar apoi cele n cifre.
//Date de ieșire
//
//Programul va afișa pe ecran numărul x, iar pe următoarea linie DA sau NU conform cerinței.
//Restricții și precizări
//
//    1 ≤ n ≤ 1000
//Exemplu:
//Intrare
//5
//1 2 3 2 1
//Ieșire
//12321
//DA
//    int n, a[1000];
//    cin>>n;
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    for(int i=0; i<n; i++)
//        cout<<a[i];
//    cout<<endl;
//    bool palindrom = true;
//    for(int i=0, j= n-1; i<j; i++, j--) {
////        cout<<a[i]<<" , "<<a[j]<<endl;
//        if(a[i]!=a[j])
//            palindrom = false;
//    }
//    if(palindrom)
//        cout<<"DA";
//    else
//        cout<<"NU";


    // # 292 VerifMultiplu
    // Se da un sir cu n elemente numere naturale. Sa se verifice daca toate
// elementele sirului sunt multipli ai ultimului element din sir
// Date de intrare
// Programul citeste de la tastatura numarul n, iar apoi n elemente ale sirului,
// separate prin spatii
// Programul afiseaza pe ecran mesajul DA, daca toate elementele sirului sunt multipli
// ai ultimului element din sir, respectiv NU in caz contrar
//    int n, a[100];
//    cin>>n;
//    for (int i=0; i<n; i++)
//        cin >>a[i];
//    bool sir_m = true;
//    for(int i=0; i<n-1;i++){
//        if (a[i]%a[n-1] != 0){
//            sir_m = false;
////            cout<<"beak la numarul: "<<a[i]<<endl;
//            break;
//
//        }
////        cout<<i<<endl;
//    }
//    if(sir_m)
//        cout<<"DA";
//    else
//        cout<<"NU";

// Idenditice
//
//    int n, a[1000], b[1000];
//    cin>>n;
//    for(int i =0;i<n;i++)
//        cin>>a[i];
//    for(int i =0;i<n;i++)
//        cin>>b[i];
//    bool ok = true;
//
////    cout<<endl;
//
//    for(int i = 0; i<n; i++){
//        bool gasit = false;
//        for(int j = 0; j<n; j++){
////            cout<<a[i]<<' '<<b[j]<<' '<<gasit<<endl;
//            if(a[i]==b[j]){
//                gasit = true;
////                cout<<a[i]<<' '<<b[j]<<' '<<gasit<<endl;
//                j=n-1;
//            }
//        }
//        if(gasit==false){
////            cout<<"gasit = false"<<endl;
//            ok = false;
//            break;
//        }
//    }
//    int c[1000];
//    for(int i =0;i<n;i++){
//        c[i] = a[i];
//        a[i] = b[i];
//        b[i] = c[i];
//
//    }
////      for(int i =0;i<n;i++){
////        cout<<a[i]<<' ';
////    }
////    cout<<endl;
////    for(int i =0;i<n;i++){
////        cout<<b[i]<<' ';
////    }
//     for(int i = 0; i<n; i++){
//        bool gasit = false;
//        for(int j = 0; j<n; j++){
////            cout<<a[i]<<' '<<b[j]<<' '<<gasit<<endl;
//            if(a[i]==b[j]){
//                gasit = true;
////                cout<<a[i]<<' '<<b[j]<<' '<<gasit<<endl;
//                j=n-1;
//            }
//        }
//        if(gasit==false){
////            cout<<"gasit = false"<<endl;
//            ok = false;
//            break;
//        }
//    }
//
//    if(ok)
//        cout<<"DA";
//    else
//        cout<<"NU";
//
//
//    return 0;
//    }

//    int n;
//    int a[1000], b[1000];
//    cin>>n;
//    for(int i =0;i<n;i++)
//        cin>>a[i];
//    for(int i =0;i<n;i++)
//        cin>>b[i];
//    bool ok = true;
//    cout<<endl;
//    for(int i =0;i<n;i++){
//        bool gasit = false;
//        for(int j =0;j<n;j++){
//            cout<<b[j]<<endl;
//            if(a[i]==b[j]) {
//                gasit= true, b[j] = -1;
//                  // nu inteleg de ce trebuie sa initierzi b[j] cu -1
//
//                j = n-1;
//            }
//        }
//        if(gasit==false)
//            ok = false;
//    }
////    for(int i =0;i<n;i++){
////        cout<<b[i] ;
////    }
//
//    if(ok)
//        cout<<"DA";
//    else
//        cout<<"NU";
//    return 0;
//}


//# 294 EgaleOglindit
//Se dă un şir cu n elemente, numere naturale.
//Să se verifice dacă oglinditul primului element apare printre celelalte elemente ale șirului.
//    int n, a[100];
//    cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    int ca = a[0];
//    int ogl = 0;
//    while(ca){
//        ogl = ogl*10 + ca%10;
//        ca /= 10;
//    }
//    bool ok = false;
//    for(int i=1;i<n;i++){
//        if(a[i]==ogl ){
//            ok = true;
//            i=n-1;
//        }
//    }
//    if(ok)
//        cout<<"DA";
//    else
//        cout<<"NU";
//    return 0;
//    }

// #296 Proportionale
//  Se dau două şiruri cu câte n elemente, numere naturale nenule.
// Să se verifice dacă este posibilă rearanjarea elementelor celor două şiruri astfel încât acestea să fie direct proporţionale.
    int n;
    int a[1000], b[1000];
    cin>>n;
    for(int i =0;i<n;i++)
        cin>>a[i];
    for(int i =0;i<n;i++)
        cin>>b[i];






















