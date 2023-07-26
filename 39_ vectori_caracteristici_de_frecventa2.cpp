    #include<iostream>
    #include<cmath>

    using namespace std;
    int vf[10];

    int main(){
    //#529 Cifre4
//    Se dau n numere naturale. Afișați cifrele care apar în scrierea zecimală
//    a acestor numere, în ordinea crescătoare a numărului de apariții. Dacă două
//     cifre au același număr de apariții,
//     se va afișa mai întâi cifra mai mică,
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        while(x){
            vf[x%10]++;
            x/=10;
        }
    }
    for(int i=0;i<10;i++){
        int maxx=0, ind=i;
        for(int j=0;j<10;j++){
            if(vf[j]>maxx && vf[j]!=maxx){
                maxx=vf[j];
                ind=j;
            }
        }
        for(int k=0;k<n;k++){
            if(vf[k]==maxx){
                vf[k]=0;
            }
        }
        if(maxx){
            cout<<ind<<' ';
        }

    }



    return 0;
    }



















