    #include<iostream>
    #include<fstream>
    #include<cmath>
    using namespace std;
    ifstream f("interclasare1.in");
    ofstream g("interclasare1.out");
    int main()
    {
    int n, m, k = 0;
    int a[100000], b[100000], c[200000];
    f>>n;
    for(int i =0;i<n;i++)
        f>>a[i];
    f>>m;
    for(int i = 0;i<m;i++)
        f>>b[i];
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]<b[j])
            c[k++] = a[i++];
        else if(b[j]<a[i])
            c[k++] = b[j++];
        else
            i++;
    }
    while(i<n)
        c[k++] = a[i++];
    while(j<m)
        c[k++] = b[j++];
    for(int p=0;p<k;p++){
        g<<c[p]<<' ';
        if((p+1)%10==0)
            g<<endl;

    }





    return 0;
    }




















