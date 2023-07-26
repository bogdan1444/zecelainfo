#include<fstream>   // daca declar si iostrem cin si cout declarate ifstream si ofstream nu mai fuctioneaza
#include<cmath>
#include<iostream>

using namespace std;

//ifstream cin("2prim.in") ;
//ofstream cout("2prim.out");

int main()
{
//int n, cnt = 0;
//cin>>n;
//for(int i = 1; i<= n; ++i){
//    int x;
//    cin>>x;// cites pe x
//    int nr = x%100; // ultimele 2 cifre ale lui x
////    cout<<" ultim 2 cifr: "<<nr<<endl;
//    int cn = 1; // contorul divizorilor lui nr
//    int d = 2;
//    while (nr>1){
//        int p = 0;
//        while(nr%d == 0)
//            nr/=d, p++;
//        cn *= (p+1);
////        cout<<" numar de div ai lui   "<<cn;
//        d++;
//        if(d*d>nr)
//            {d=nr;}
//    }
//    if(cn == 2)// verificam daca are doar 2 divizori ceea ce insemna ca e prim
//        cnt++;
//
//    }
//cout<<cnt;
//





char ch;
cin>>ch;
int sum=0 , cnt = 0;
while(ch !='.'){
    sum += (int)ch ;
    cnt++;
    cin>>ch;


}
cout<<(char)sum/cnt;







return 0;
}
































