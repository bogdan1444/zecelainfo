    #include<iostream>
    using namespace std;
    int f[10];
    bool c[1000001];
    int dive[100001], ind =0;



    int main(){
    // cautarea binara;
//    int n, a[1000], m , x, nrpasi;
//    cin>>n;
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    cin>>m;
//    for(int i=0;i<m;i++){
//        cin>>x;
//        bool gasit = false;
//        int st=0, dr=n-1;
//        nrpasi = 1;
//        while(st<=dr && !gasit){
//            int mij=(st+dr)/2;
//            if(a[mij]==x)
//                gasit = true;
//            else if(a[mij]<x)
//                st=mij+1, nrpasi++;
//            else
//                dr=mij-1, nrpasi++;
//        }
//        if(gasit)
//            cout<<" gasit in "<<nrpasi<<" pasi"<<endl;
//        else
//            cout<<" nu s-a gasit";
//    }

    // Parcurgerea secventiala liniara
    // Sa se gaseasca cea mai lunga secventa crescatoarea dintr-un vector
    // daca exista mai multe sa se gaseasca cea mai din stanga


    // vectori de frecventa
    // sa aflam dintr-un sir de cifre care cifre apar de mai multe ori
//    int n;
//    cin>>n;
//    int x;
//    cout<<" n= "<<n<<endl;
//    for(int i=0;i<n;i++){
//        cin>>x;
//        f[x]++;
//    }
//    for(int i=0;i<10;i++){
//        if(f[i])
//            cout<<i<<" apare de "<<f[i]<<" ori"<<endl;
//    }
//    int max =0;
//    for(int i=0;i<n;i++){
//        if(f[i]>max){
//            max=f[i];
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(f[i]==max) {
//            cout<<"cinfra care apare de cele mai multe ori "<<i<<endl;
//        }
//    }
    // sa se afiseze cifrele in ordine aparitiei
//    int k=9;
//    while(k>=0){
//        int max =0;
//        if(f[k]){
//        for(int i=0;i<n;i++){
//            if(f[i]>max && f[i]){
//                max=f[i];
//            }
//        }
//        for(int i=0;i<n;i++){
//            if(f[i]==max && f[i]) {
//            cout<<i<<" apare de "<<max<<" ori"<<endl;
//            f[i]=0;
//            }
//        }
//        }else{
//            k--;
//        }
//        k--;



    // sa se afiseze primele 1000000 de numere prime
    // ciurul lui Eratostene
    c[0]=c[1]=1;
    for(int i=2;i<=1000;i++){
        if(c[i]==0){
            for(int j=2;i*j<1000000;j++){
                c[i*j]=1;
            }
        }
    }
    for(int i=1;i<=1000000;i++){
        if(!c[i]){
            dive[ind++]=i;
        }
    }

    cout<<endl<<" numarul de numere prime este "<<ind<<endl;
    for(int i=0;i<=10;i++){
        cout<<dive[i]<<' ';  // am afisat primele 10 numere prime
    }








    return 0;
    }



















