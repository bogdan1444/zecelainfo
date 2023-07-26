    #include<iostream>
    using namespace std;
    bool c[1000001];
    int ind=0, divv[100001], rez[500001];

    int main(){
    // Joc2020
    c[0]=c[1]=1;
    for(int i=2;i<=1000;++i){
        if(c[i]==0){
            for(int j=2;i*j<=1000000;++j){
                c[i*j]=1;
            }
        }

    }
    for (int i=1; i<=30; i++){
    }
    for(int i=1; i<=100000;++i){
        if(c[i]==0) {
            divv[++ind]=i;
        }
    }
    int n; cin>>n;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        int nrdiv=1;
        int d=1; // d- indicele din div;
        while(x>1) {
            int p=0;
            while(x%divv[d]==0){
                x/=divv[d];
                p++;
            }
            d++;
            nrdiv*=(p+1);
            if(divv[d]*divv[d]>x){
                nrdiv*=2;
                break;
            }
        }
        rez[i] = nrdiv;
    }
    for(int i=1;i<=n;++i){
        cout<<rez[i]<<' ';
    }

    return 0;
    }



















