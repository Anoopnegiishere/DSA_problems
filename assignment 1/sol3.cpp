#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int integer;
    long long long2;
    char ch;
    float fl;
    double db;
    cin>>integer;
    cin>>long2>>ch>>fl>>db;
    cout<<integer<<endl;
    cout<<long2<<endl;
    cout<<ch<<endl;
    cout<<setprecision(20)<<fl<<endl;
    cout<<setprecision(20)<<db<<endl;
    
    return 0;
}
