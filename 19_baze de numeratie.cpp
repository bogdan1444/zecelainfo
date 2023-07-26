#include<iostream>
#include<cmath>
using namespace std;
int main()
{
////# EasyPow
////Se dă numărul natural n. Calculați 2^n, apoi afișați rezultatul în baza 2.
//int n;
//cin>>n;
//cout<<1;
//for(int i = 1;i<=n; i++)
//    cout<<0;




//#cifbin
////Se citește un număr natural n. Să se determine câte cifre 0 și câte cifre 1 are reprezentarea în baza 2 a acestui număr.
//int n;
//cin>>n;
//int cnt0 =0, cnt1 = 0;
//while(n){
//    if(n%2 == 0)
//        cnt0++;
//    else
//        cnt1++;
//    n/=2;
//}
//cout<<cnt0<<' '<<cnt1;




//
//
////cifrebinare #122
////Se citesc doua numere naturale. Sa se afiseze numarul care are mai multe cifre egale cu 1 in
//////reprezentarea in baza 2;
//    int a,b, cnta = 0, cntb=0;
//    cin>>a>>b;
//    int ca = a, cb =b;
//    while (a){
//        cnta += a%2;
//        a/=2;
//    }
//    while (b){
//        cntb += b%2;
//        b/=2;
//    }
//    if(cnta>cntb)
//        cout<<ca;
//    else if(cntb>cnta)
//        cout<<cb;
//    else{
//        if(ca>cb)
//            cout<<cb;
//        else
//        cout<<ca;
//    }
//

////#427 BazaMinima
//// Se dau n numere naturale. Determinați cea mai mică bază de numerație b în care ar putea fi considerate aceste numere.
//int n;
//int cmax = 2;
//cin>>n;
//for(int i = 1; i<=n;i++) {
//    int x;
//    cin>>x;
//    while(x){
//        if(x%10>cmax)
//            cmax = x %10;
//        x /= 10;
//    }
//}
//cout<<cmax+1;
//




//se da un numar in baza 2 si trebuie gasit corespondentul in baza 10

    int n;
    cin>>n;
    int nr = 0;
    int cnt = 0; // aflam cati de 0 are in capat
    int cn = n; // copie a lui n
    while(n% 10 == 0){
        cnt ++;
        n /= 10;
    }
    n = cn;
    int ogl;
    while(n){
        ogl = ogl*10 + n%10;
        n /= 10;

    }
    n = ogl;
    while(ogl){
        nr = nr*2 + (ogl%10);
        ogl /= 10;
    }
    while(cnt){
    nr    = nr*2, cnt--;
    cout<<nr;

    }








return 0;
}
































