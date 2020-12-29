#include <unordered_set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> a;
unordered_set<int> b;
int solve(){
    int ans;
    int n;
    auto it = b.begin();
    while(cin >> n){
        if((it = b.find(2020-n)) != b.end()){
            ans = n*(*it);
        }
        b.insert(n);
    }
    return ans;
}

long long solve2(){
    int n, ans{};
    while(cin >> n){ a.push_back(n); }
    sort(a.begin(), a.end());
    int j;
    for(int i = 0; i < a.size(); i++){
        j = a[i];
        int lo = i+1;
        int hi = a.size()-1;
        while(lo < hi){
            int sum = j + a[lo] + a[hi];
            if(sum > 2020) hi--;
            else if(sum < 2020) lo++;
            else {
                return j*a[lo]*a[hi];
            }
        }
    }
    return ans;
}


int main(){
    cin.tie(0);
    cout << solve2();
    return 0;
}