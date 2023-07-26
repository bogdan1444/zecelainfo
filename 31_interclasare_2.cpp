    #include<iostream>
    #include<fstream>
    #include<cmath>
    using namespace std;
    ifstream f("interclasare3.in");
    ofstream g("interclasare3.out");
//    // #250 interclasare1 - interclasarea a doi vectori ordonati crescatori si afisare
//    // fara duplicate
//
//    ifstream f("interclasare1.in");
//    ofstream g("interclasare1.out");
//    int main()
//    {
//    int n, m, k = 0;
//    int a[100000], b[100000], c[200000];
//    f>>n;
//    for(int i =0;i<n;i++)
//        f>>a[i];
//    f>>m;
//    for(int i = 0;i<m;i++)
//        f>>b[i];
//    int i=0, j=0;
//    while(i<n && j<m){
//        if(a[i]<b[j])
//            c[k++] = a[i++];
//        else if(b[j]<a[i])
//            c[k++] = b[j++];
//        else
//            i++;
//    }
//    while(i<n)
//        c[k++] = a[i++];
//    while(j<m)
//        c[k++] = b[j++];
//    for(int p=0;p<k;p++){
//        g<<c[p]<<' ';
//        if((p+1)%10==0)
//            g<<endl;
//
//    }

// #251 interclasare2 //
//Se dau două şiruri a şi b, cu n, respectiv m elemente, numere naturale, ordonate strict crescător. Să se afişeze, în ordine strict crescătoare,
// valorile existente în ambele şiruri. /
// adica intersectia celor doua siruri
//    int main(){
//    int n, m ,k=0;
//    int a[100000], b[100000], c[100000];
//    f>>n;
//    for(int i=0;i<n;i++)
//        f>>a[i];
//    f>>m;
//    for(int i=0;i<m;i++)
//        f>>b[i];
//    int i=0,j=0;
//    while(i<n && j<m){
//        if(a[i]==b[j]) {
//            c[k++] = a[i++];
//            j++;
//        }
//        else if(a[i]<b[j]){
//        i++;
//        }
//        else{
//            j++ ;
//        }
//    }
//    for(int i=0;i<k;i++){
//        g<<c[i]<<' ';
//        if((i+1)%10==0)
//            g<<endl;
//    }


// #283 interclasare3
//Se dau două şiruri, cu n, respectiv m,
// elemente, numere naturale.
// Primul şir este ordonat crescător,
//  iar al doilea este ordonat descrescător.
//   Să se afişeze, în ordine crescătoare,
// valorile pare din cele două şiruri.
//Fişierul de intrare interclasare3.in conţine pe prima linie numerele n şi m;
//urmează n numere naturale separate prin spaţii, dispuse pe mai multe linii,
//ordonate crescător; urmează m numere naturale separate prin spaţii,
//dispuse pe mai multe linii, ordonate descrescător.
//5 8
//2 4 7 37 42
//88 88 67 45 42 32 4 1

// trebuie sa se afiseze 2 4 4 32 42 42 88 88
//    int main(){
//    int n,m, k=0;
//    int a[100000], b[100000], c[200000];
//    f>>n>>m;
//    for(int i=0;i<n;i++)
//        f>>a[i];
//    for(int i=0;i<m;i++)
//        f>>b[i];
//    int i=0,j=m-1;
//    while(i<n && j>=0){
//        if(a[i]<b[j] && a[i]%2==0){
//            c[k++] = a[i++];
//        }
//        else if(a[i]<b[j])
//            i++;
//        else if(b[j]%2==0)
//            c[k++] = b[j--];
//        else{j--;}
//
//    }
//    while(i<n){
//        if(a[i]%2 == 0)
//            c[k++] = a[i];
//        i++;
//    }
//    while(j>=0){
//        if(b[j]%2==0)
//            c[k++] = b[j];
//        j--;
//    }
//    for(int i=0;i<k;i++){
//        g<<c[i]<<' ';
//        if((i+1)%20==0){
//            g<<endl;
//        }
//    }

// #530 multimi1 Se dau două mulțimi de numere naturale.
// Să se afișeze reuniunea și intersecția lor
//rogramul va afișa pe ecran elementele reuniunii celor
//două mulțimi, în ordine crescătoare, separate prin exact
//un spațiu, iar pe rândul următor elementele intersecției celor două mulțimi, în ordine crescătoare,
// separate de asemenea prin exact un spațiu.
    int main(){
    int n,m, k=0, kk=0;
    int a[100000], b[100000], c[200000], d[100000];
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];

    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        } else{
            i++;
//            j++;
        }
    }
    while(i<n){
        c[k++] = a[i++] ;
    }
    while(j<m){
        c[k++] = b[j++];
    }
    int p=0,u=0;
    while(p<n && u<m){
        if(a[p]== b[u]){
            d[kk++] = a[p++] ;
           u++ ;
        }
        else if(a[p]<b[u])
            p++;
        else u++;

    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<' ';
    }
    cout<<endl;
     for(int i=0;i<kk;i++){
        cout<<d[i]<<' ';
    }











    return 0;
    }




















