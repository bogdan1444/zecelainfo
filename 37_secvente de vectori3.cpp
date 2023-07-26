//    #include<iostream>
    #include<fstream>
    using namespace std;
    ifstream cin("sumesecv1.in");
    ofstream cout("sumesecv1.out");
    int main(){
    // #2921 SumeSecv1
//    Se dă un șir cu n elemente numere întregi,
//    numerotate de la 1 la n și m perechi de indici i j.
//    Pentru fiecare pereche de indici se calculează suma
//    elementelor din secvență determinată de cei doi indici.
//    Afișați suma maximă obținută.
    int n;
    cin>>n;
    int a[n];
    long long sp[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sp[0]=a[0];
    for(int i=1;i<n;i++){
        sp[i]=sp[i-1]+a[i];
    }
    int x,y,m;
    long long smax = -1000000000000000000;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if(x>y){
            swap(x,y);
        }
        long long suma=sp[y-1]-sp[x-1]+a[x-1];
        if(suma>smax){
            smax=suma;
        }


    }


    cout<<smax;



    return 0;
    }



















