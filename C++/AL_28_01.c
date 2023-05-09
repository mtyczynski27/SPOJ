#include<iostream>
using namespace std;
int main(){
    int liczba;
    string slowo;

    cin>>liczba>>slowo;

    int srodkowa=(liczba-1)/2;

    for(int i=0;i<srodkowa;i++)
        cout<<".";

    cout<<slowo[srodkowa];

    for(int i=0;i<srodkowa;i++)
        cout<<".";

    cout<<endl;

    int min=srodkowa-1,max=srodkowa+1;
    int licznikKropek=srodkowa-1;

    for(int i=0;i<srodkowa;i++){
        for(int j=0;j<licznikKropek;j++){
            cout<<".";
        }

        for(int j=min;j<=max;j++)
            cout<<slowo[j];

        for(int j=0;j<licznikKropek;j++)
            cout<<".";

        cout<<endl;
        min-=1;
        max+=1;
        licznikKropek-=1;
    }
}
