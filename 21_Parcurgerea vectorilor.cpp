#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//   #633 Paritate1
////Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.
//    int a[1001];
//    int n;
//    cin>>n;
//    for(int i = 1; i <= n ; i++)
//        cin>>a[i];
//    int cnt = 0;
//    for(int i =1 ; i<=n; i++){
//        if(a[i]%2 == 0)
//            cnt++;
//        else
//            cnt--;
//    }
//    cout<<abs(cnt);







// #546 Afisare0
// Cerinţa
//
//Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.
//Date de intrare
//
//Programul citește de la tastatură numărul n, iar apoi n numere naturale, reprezentând elementele vectorului.
//Date de ieşire
//Programul afișează pe ecran elementele cerute, separate prin exact un spațiu, în ordinea din vector.
//Restricţii şi precizări
//    1 ≤ n ≤ 1000
//    elementele vectorului vor fi mai mici decât 1.000.000
//    ultimul element al vectorului este nenul
//Exemplu:
//Intrare
//5
//7 4 9 6 2
//Ieșire
//4 6 2
//int n;
//int a[1001];
//cin>>n;
//for(int i = 1; i<=n; i++)
//    cin>>a[i] ;
//int cnt = 0;
//for(int i = 1; i<=n; i++)
//    if(a[i] % a[n]==0)
//        cout<<a[i]<<' ';





// # 486 MinMax0
// Se citeste n, apoi inca n numere naturale, reprezentand elementele unui vector
// calculati valoarea minima si val max a valorilor elem vect
//Programul citeste de la tastatura numarul n, apoi inca n numere naturale, reprezentand
// elementele vectorului
//Programul va afișa pe ecran cele două numere minim şi maxim, separate printr-un singur spaţiu.
//Restricţii şi precizări
//
//    0 < n < 1000
//    elementele vectorului vor fi mai mici decât 1.000.000
//
//Exemplu:
//
//Intrare
//
//5
//8 2 9 4 5
//
//Ieșire
//
//2 9
//int a[1001];
//int n, max = 0, min = 1000001;
//cin >> n;
//for(int i = 1; i<=n; i++)
//    cin>>a[i];
//for(int i = 1; i<=n; i++)
//{
//    if(a[i] < min)
//        min = a[i];
//    if(a[i] > max)
//        max = a[i];
//}
//cout<<min<<' '<<max;






//#491 Suma2
// se citeste un vector cu n elemente, numere naturale. Sa se determine suma valorilor elementelor
// cuprinse intre primul si ultimul element par al vectorului, inclusiv acestea.
//int n;
//cin>>n;
//int a[1001];
//for(int i = 1; i<=n; i++)
//    cin>>a[i];
//int imin = -1, imax;
//for(int i = 1; i<= n; i++)
//    if(a[i]%2== 0 && imin == -1)
//        imin = i, imax = i;
//    else if(a[i]%2 == 0)
//        imax = i;
//if(imin != imax && imin != -1)
//{
//    int sum = 0;
//    for(int i = imin; i<= imax; i++)
//        sum += a[i];
//    cout<<sum;
//}
//else
//{
//cout<<"NU EXISTA";
//}
//



// VARIANTA CARE NU A MERS? DE CE?
//
//int n, a[1000], imin = 0, imax =0;
//cin>>n;
//for (int i = 0; i<n; i++)
//    cin>>a[i];
//for (int i = 0; i<n; i++)
//    if(a[i]%2 == 0){
//        imin = i;
//        break;
//    }
////    cout<<endl;
////    cout<<"indicele min: "<<imin<<endl;
//for (int i = n-1; i>=imin; i--)
//    if(a[i]%2 == 0){
//        imax = i;
//        break;
//    }
////    cout<<"indicele max: "<<imax<<endl;
//if(imax == imin)
//    imax = 0;
//
////    cout<<endl;
//if(imin == 0 && imax == 0)
//    cout<<"NU EXISTA";
//else{
//int S = 0;
//for(int i = imin; i<=imax; i++){
//    S+=a[i];
//}
//cout<<S;
//}



//
//int n, v[1000], sum = 0;
//cin>>n;
//int st = 0, dr = 0;
//bool ok = false;
//for(int i = 0; i<n; i++){
//    cin>>v[i];
//    if(ok == false && v[i]%2 == 0)
//        st = i, ok = true, cout<<"indicele primului par: "<<i<<"  - si numarul: "<<v[i]<<endl;
//    else if(v[i] % 2 == 0)
//        dr = i, cout<<"indicele ultimului par: "<<i<<" - si numarul: "<<v[i]<<endl;
//}
//cout<<endl<<"indice min par: "<<st<<endl<<"indice max par: "<<dr;
//
//for(int i = st; i<= dr; i++)
//    sum += v[i];
//if(ok)
//    cout<<endl<<sum;
//else
//    cout<<"NU EXISTA";








// Numarare2  #487
//Se dă un vector cu n numere naturale. Să se determine câte dintre elemente au valoarea strict mai mare decât media aritmetică a elementelor vectorului.
//    int n;
//    cin>>n;
//    int v[1001];
//    for(int i = 1;i <=n; i++)
//        cin>>v[i];
//    int sum = 0, cnt = 0;
//    for(int i = 1; i<=n ; i++)
//        sum += v[i], cnt++;
//    int medie = sum/ cnt;
//    cnt = 0;
//    for(int i=1; i<=n; i++){
//        if(v[i]<medie){
//        cnt ++;}
//    }
//    cout<<cnt;






//Numarare3 #492
//Se dă un vector cu n numere naturale.
// Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele.
    int n;
    cin>>n;
    int v[1001];
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    int cnt = 0;
    for(int i= 1, j=n; i<j; i++, j--){
        int x = v[i];
        int y = v[j];
        while(y){
        int r = x % y;
        x = y;
        y = r;
        }
        if(x==1){
            cnt++;

        }
    }

    cout<<cnt;




return 0;
}
































