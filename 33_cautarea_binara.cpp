    #include<iostream>
    using namespace std;
    int main(){
//    // cautarea binara
//    int n, a[100];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i]; // vector ordonat crescator
//    }
//    int x;
//    cin>>x;
//    int st=0, dr=n;
//    bool gasit = false;
//    while(st<=dr){
//        int mij = (st+dr)/2;
//        if(a[mij]==x){
//            gasit = true;
//            break;
//        }
//        if(a[mij]>x)
//            dr = mij-1;
//        else st = mij+1;
//    }
//    if(gasit)
//        cout<<"DA";
//    else
//        cout<<"NU";


// #508 Cautare Binara
//Se dă un vector x cu n elemente numere naturale, ordonate crescător,
//și un vector y cu m elemente, de asemenea numere naturale.
//Verificați pentru fiecare element al vectorului y dacă apare în x.
    int n, m, a[25000], b[200000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        int x = b[i];
        bool este = false;
        int st=0, dr=n-1;
        while(st<=dr){
            int mij = (st+dr)/2;
            if(a[mij]==x){
                este = true;
                break;
            }
            else if(a[mij]>x)
                dr = mij-1;
            else st = mij+1;

        }
        cout<<este<<' ';
    }





    return 0;
    }



















