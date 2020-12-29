#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <chrono>
#include <iostream>

using namespace std;

void solve(){
    int a,b,n{};
    char c;
    char s[255];
    vector<string> v;
    while(scanf("%d-%d %c: %s", &a, &b, &c, s) == 4){
        string t(s);
        int k = count(t.begin(), t.end(), c);
        if(k >= a && k <= b){
            v.push_back(t);
        }
    }
    printf("%d\n", v.size());
}

void solve2(){
    int a,b,n{};
    char c;
    char s[255];
    int v{};
    while(scanf("%d-%d %c: %s", &a, &b, &c, s) == 4){
        string t(s);
        int k = count(t.begin(), t.end(), c);
        if(((t[a-1] == c) + (t[b-1] == c)) == 1){
            v++;;
        }
    }
    printf("%d\n", v);
}

int main(){
    auto start = chrono::steady_clock::now();
    solve2();
    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::minutes>(end-start).count()/1000 << endl;
}