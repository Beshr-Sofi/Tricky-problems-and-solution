//problem link: https://codeforces.com/contest/580/problem/B
#include <bits/stdc++.h>
#include<iomanip>
#include<cmath>
#include<cctype>
#include<string>
#include <algorithm>
#include <array>
#include<random>
#include <ctime>
#include <regex>
#include <map>
#define el_code_el_taaaarshh   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
int main() {
    el_code_el_taaaarshh
    long long n,d,sum,maxi=0;cin >> n >> d;
    multimap <long long,long long> lol;
    for (int i = 0; i < n; ++i) {
        long long a,b;cin >> a >>b;
        lol.insert({a,b});
    }
    auto it1 = lol.begin(),it2=lol.begin();
    while(it1!=lol.end()){
        while(it2->first-it1->first<d&&it2!=lol.end()){
            sum+=it2->second;
            it2++;
        }
        maxi = max(maxi,sum);
        sum -= it1->second;
        it1++;
    }
    cout << maxi;
}
