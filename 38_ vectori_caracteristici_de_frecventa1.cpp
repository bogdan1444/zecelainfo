    #include<iostream>
//    #include<fstream>
    using namespace std;
// spatiul de aici se numeste global;
// variabilele declarate global dispun de mai multa memorie
    int c[1000]; // orice se declara aici are valoarea 0
    //!!aici avem de 8 ori mai multa memorie pentru variabile
//
//    ifstream f("numere8.in");
//    ofstream g("numere8.out");
    int main(){
    // vector caracteristic - binar - retine 0 sau 1
    // de ex.: a = 1  3 4 5 8
            // c = 1 0 1 1 1 0 0 8
            // daca elementul este in vector atunci avem 1, daca nu avem 0
    // c[i] = 1, daca i apartine vect a
    // c[i] = 0, daca i nu apartine vect a

    // vectori de frecventa
    // a = 1 3 4 5 8 1 4 4 8
    // f = 2 0 1 3 1 0 0 2   // de cate ori apare
    // c[i] va contine numarul de aparitii ale lui i in a
    //
    // # 1005 Numere8
    // Se da o lista cu numere naturale. Sa se determine numerele naturale nenule
    // cu cel mult patru cifre care nu apar in lista data
    // fisierul de intrare "numere8.in" contine lista de numere, dispuse pe mai multe linii, separate
    // prin spatii.
    // Fisierul "numere8.out" va contine pe prima linie, in ordine descrescatoare, numerele nenule cu cel mult patru cifre
//    // care nu se afla in lista, separate prin exact un spatiu
//    int x;
//    while(f>>x){
//        if(x<=9999){
//            c[x] = 1;
//        }
//    }
//    for(int i=9999;i>=1;--i){
//        if(c[i]==0){
//            g<<i<<' ';
//        }
//    }


    // #525 Numere1
    // Se dau n numere naturale. Determinati cele mai
    // mari doua numere cu trei
    // cifre care nu apar printre numerele date
//   rogramul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spații.
    //Date de ieșire
    //
    //Programul va afișa pe ecran numerele a b, a < b
    //reprezentând cele două numere determinate. Dacă nu se
    //pot găsi două astfel de numere,
    //se va afişa mesajul NU EXISTA.
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<1000){
            c[x]=1;
        }
    }
    int cnt=0, a, b;
    for(int i=999;cnt<2&&i>=0;--i){
        if(!c[i]){      // if not c[x] - adica c[x]=x
            cnt++;
            if(cnt == 1){
                a=i;
            }
            else
                b=i;

        }
    }
    if(cnt==2){
        cout<<a<<' '<<b;
    }
    else{
        cout<<"NU EXISTA";
    }















    return 0;
    }



















