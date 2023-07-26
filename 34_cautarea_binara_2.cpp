o    #include<iostream>
    #include<fstream>
    using namespace std;
    ifstream f("clase.in");
    ofstream g("clase.out");
    int main(){
    int n,m;
    long long a[10000], b[10000];
    f>>n;
    for(int i=0;i<n;i++)
        f>>a[i];
    f>>m;
    long long x;
    int cnt = 0;
    for(int i =0;i<m;i++){
        f>>x;
        int st =0, dr=n;
        bool egal=false;
        while(st<=dr){
            int mij = (st+dr)/2;
            if(a[mij]==x){
                egal = true;
                break;
            }
            else if(a[mij]>x)
                dr = mij-1;
            else
                st = mij+1;
        }
        if(egal) {
            cnt++;
        }
    }
    g<<cnt;


    return 0;
    }



















