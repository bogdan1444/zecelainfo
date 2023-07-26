    #include<iostream>
    #include<cmath>
    using namespace std;

    int main()
    {
    //    int n, a[100];
    //    cin>>n;
    //    for(int i=0;i<n;i++)
    //        cin>>a[i];
    //    n++;
    //    for(int i = n-1; i>=2; --i){
    //        a[i] = a[i-1];
    //    }
    //    a[2] =  1;
    //    for(int i=0; i<n; i++)
    //        cout<<a[i]<<' ';
    //


    // # 158 inserare
    // se da un sir cu n elemente intregi, valoare intreaga x si un numar p
    // sa se insereze pe poziti p in sir valoare x
    //// Programul va citi de la tastatură trei valori n, X, p, cu semnificația precizată, apoi n numere întregi reprezentând elementele șirului.
    //    int n, x, p;
    //    cin>>n>>x>>p;
    //    int a[25];
    //    for(int i =0; i<n;i++)
    //        cin>>a[i];
    //    n++;
    //    for(int i=n-1; i>p; i--){
    ////        cout<<a[i]<<endl;
    //        a[i] = a[i-1];
    //    }
    //    a[p-1] = x;
    //    for(int i = 0; i<n ;i++)
    //        cout<<a[i]<<' ';


    //# 159 inserareDupa se da un sir cu n elemente naturale
    //Să se insereze în șir după fiecare element par dublul său.
    //Date de intrare
    //
    //Programul va citi de la tastatură numărul n, apoi n numere naturale reprezentând elementele șirului.
    //Date de ieşire
    //
    //Programul va afișa pe ecran elementele șirului obținut după inserare, separate printr-un spațiu.
    //Restricţii şi precizări
    //
    //    1 ≤ n ≤ 25
    //    elementele șirului vor fi cuprinse între 0 și 1.000.000
    //    int n,a[51];
    //    cin>>n;
    //    for(int i=0;i<n;i++)
    //        cin>>a[i];
    //    for(int i=0;i<n;i++)
    //    {
    //        int ca= a[i];
    //        if (ca%2 == 0){
    //            n++;
    //            for(int j = n-1; j>i+1; j--)
    //                a[j] = a[j-1];
    //            a[i+1] = 2*ca;
    //            i++; // pentru ca a[i+1] este deja par si nu ii facem dublul
    //        }
    //
    //    }
    //    for(int i =0; i<n; i++)
    //        cout<<a[i]<<' ';
    //    return 0;
    //    }
    //
    //    int n, a[50];
    //    cin>>n;
    //    for (int i= 0; i<n;i++){
    //        cin>>a[i];
    //    }
    //    for(int i=0; i<n; i++){
    //        if(a[i]%2 == 0){
    //            n++;
    //            i++;
    //            for(int j=n-1; j>=i+1; j--){
    //                a[j] = a[j-1];
    //            }
    //            a[i] = 2*a[i-1];
    //        }
    //    }
    //    for(int i= 0; i<n;i++)
    //        cout<<a[i]<<' ';




    // #160 inserare inainte
    // Se dă un șir cu n elemente naturale.
    /*Cerinţa

    Să se insereze în șir înaintea fiecărui element pătrat perfect rădăcina sa pătrată.
    Date de intrare

    Programul va citi de la tastatură numărul n, apoi n numere naturale reprezentând elementele șirului.
    Date de ieşire

    Programul va afișa pe ecran elementele șirului obținut după inserare, separate prin câte un spațiu.
    Restricţii şi precizări

        1 ≤ n ≤ 25
        elementele șirului vor fi cuprinse între 0 și 1.000.000

    Exemplu:

    Date de intrare

    5
    7 3 4 1 9

    Date de ieșire

    7 3 2 4 1 1 3 9
        */
    //    int n, a[50];
    //    cin>>n;
    //    for(int i = 0; i<n; i++)
    //        cin>>a[i];
    //
    //    for(int i = 0; i<n; i++){
    //        int r = sqrt(a[i]);
    //        if( r*r == a[i]){
    //            n++;
    //            for(int j= n-1; j>i; j--)
    //                {a[j]= a[j-1];}
    //            a[i] = r ;
    //            i++;
    //        }
    //    }
    //    for(int i=0; i<n; i++)
    //        cout<<a[i]<<' ';




        int n,a[32];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i], a[n+i] = a[i];   // este de doua ori acelasi sir concatenat la capat
        for(int i=0; i<n; i++){
            for(int j= i; j<n+i; j++)
                cout<<a[j]<<' ';
            cout<<endl;
        }

        return 0;
        }

