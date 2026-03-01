
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define fl float

#define el "\n"
#define fi first
#define se second
#define pb push_back

void mp(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void ffopen(string name){
    string inFile=name + ".inp";
    string outFile=name + ".out";
    if(FILE* f = fopen(inFile.c_str(), "r")){
        fclose(f);
        freopen(inFile.c_str(), "r", stdin);
        freopen(outFile.c_str(), "w", stdout);
    }
}

const int maxn=1e6+42;
const int N=1e3;
ll a[maxn], y[N][N], dem[maxn];

void solve(){
    

    
}

int main(){
    //ffopen("filename");
    mp();
    solve();
}
