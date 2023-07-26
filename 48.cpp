#include<fstream>
using namespace std;
ifstream cin("spirala.in");
ofstream cout("spirala.out");
int a[25][25];
int main(){
    // #211 spirala
//     Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere naturale cu cel mult patru cifre fiecare.
// Cerinţa

// Scrieţi un program care citeşte numărul natural 
// n şi cele n*n elemente ale tabloului şi apoi afişează
//  pe ecran elementele tabloului, separate prin câte un 
//  spaţiu, obţinute prin parcurgerea 
// în spirală în sensul acelor de ceasornic.
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    int i=0,j=0,cnt=0;
    while (cnt<n*n)
    {
        while (a[i][j]!=-1 && j<n)
        {
            cout<<a[i][j]<<' ';
            a[i][j]=-1;
            cnt++;
            j++;
        }
        j--;
        i++;
        if (cnt==n*n)
        {
            break;
        }
        
        while (a[i][j]!=-1 && i<n)
        {
            cout<<a[i][j]<<' ';
            a[i][j]=-1;
            i++;
            cnt++;
        }
        i--;
        j--;
         if (cnt==n*n)
        {
            break;
        }
        
        while (a[i][j]!=-1 && j>=0)
        {
            cout<<a[i][j]<<' ';
            a[i][j]=-1;
            j--;
            cnt++;
        }

        i--;
        j++;
        if (cnt==n*n)
        {
            break;
        }
        
        while (a[i][j]!=-1 && i>=1)
        {
            cout<<a[i][j]<<' ';
            a[i][j]=-1;
            i--;
            cnt++;

        }
        i++;
        j++;
            if (cnt==n*n)
        {
            break;
        }
        
        // cout<<endl<<"i= "<<i<<endl<<"j= "<<j<<endl<<"contorul= "<<cnt<<endl;
        // break;
       

    }
    
return 0;



}