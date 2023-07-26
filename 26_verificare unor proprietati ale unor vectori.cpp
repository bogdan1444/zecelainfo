    #include<iostream>
    #include<cmath>
    using namespace std;
    int main()
    {
//    // # 298 exista impare
//    int n;
//    cin>>n;
//    int a[101];
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    bool exista_impare =false;
//    for(int i =0 ; i<n; i++)
//        if(a[i]%2 == 1 )
//            exista_impare = true;
//    if(exista_impare)
//        cout<<"DA";
//    else
//        cout<<"NU";


//// # 288 verifPare //  verifica daca toate elementele sirului sunt pare
//    int n, a[100];
//    cin>>n;
//    for(int i= 0; i<n;i++)
//        cin>>a[i];
//    bool toate_pare = true;
//    for(int i=0; i<n;i++)
//        if(a[i]%2 == 1)
//            toate_pare = false;
//
//    if(toate_pare)
//        cout<<"DA";
//    else
//        cout<<"NU";


//// # 501 VerifEgale // sa se verifice daca toate elementele vectorului sunt egale
////
//    int n , a[500];
//    cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    bool toate_egale = true;
//    for (int i = 1; i<n; i++)
//        if (a[i]!=a[i-1])
//            toate_egale= false;
//    if(toate_egale)
//        cout<<"DA";
//    else
//        cout<<"NU";



// 502 Cerinţa # verifDiferite

//Se dă un vector cu n elemente numere naturale.
//Să se verifice dacă oricare două elemente ale vectorului sunt diferite.
//    int n, a[500];
//    cin>>n;
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    bool toate_diferite = true;
//    for(int i= 0; i<n; i++){
//        for(int j = i+1; j<n; j++){
////            cout<<"<"<<a[i]<<","<<a[j]<<">";
//            if(a[i] == a[j])
//                toate_diferite = false;
//        }
////        cout<<endl;
//    }
//
//
//    if(toate_diferite == true)
//        cout<<"DA";
//    else
//        cout<<"NU";



//// #500 verificare ordonare
////sa se verifice daca un sir este ordonat crescator
//    int n;
//    int a[500];
//    cin>>n;
//    for(int i= 0; i<n; i++)
//        cin>>a[i];
//    bool crescator = true;
//    for(int i=1; i<n; i++)
//        if(a[i-1]>a[i])
//            crescator = false ;
//    if(crescator)
//        cout<<"DA";
//    else
//        cout<<"NU";

//// #287 VerifOrd
//Se dau n şiruri cu elemente numere întregi.
//Să se verifice despre fiecare dacă este ordonat crescător.
//Date de intrare
//
//Programul citește de la tastatură numărul n; iar apoi n şiruri – pentru fiecare,
//se citeşte mai întâi numărul de valori, apoi valorile din şir.
//Date de ieşire
//
//Programul afișează pe ecran n valori 0 sau 1, separate prin spaţii. A k-a valoare este 1,
// dacă al k-lea şir este ordonat crescător, respectiv 0 dacă şirul nu este ordonat crescător.
//Restricţii şi precizări
//
//    1 ≤ n ≤ 10
//    fiecare şir va avea cel mult 500 elemente, numere întregi cu cel mult 4 cifre fiecare
//
//Exemplu:


    int n, a[500], nr_elem_vec, rez[10];
    cin>>n;
    for(int i =0; i<n;i++){
        cin>>nr_elem_vec;
//        cout<<endl;
//        cout<<"numar elemente vector "<<nr_elem_vec<<endl;
        for(int j = 0; j<nr_elem_vec; j++)
            cin>>a[j];
        bool ord = true;
        for(int j = 1; j<nr_elem_vec; j++){
            if(a[j]<a[j-1])
                ord = false;
        }
        if(ord)
            rez[i]=1;
        else
            rez[i]=0;
    }
    for(int i = 0; i<n; i++)
        cout<<rez[i]<<' ';








    return 0;
    }




















