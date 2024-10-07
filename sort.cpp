#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    vector<int> v;
    int s;
    cin >> s;
    cout << "Kich thuoc vecto: "<< s ;
    for(int i = 0; i < s; i++){
        int x; cin >> x;
        int temp=x;
        v.push_back(temp);
    }
    cout << v.size() << endl;
}