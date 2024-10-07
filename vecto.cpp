
#include <bits/stdc++.h>

using namespace std;

using ll = long long ;
//push_back
int main(){
    vector<int> v(3,100); // khai bao vector co san 3 phan tu {100,100,100}
    v.push_back(3);//{3}
    v.push_back(2);//{3,2}
    cout <<v.size() <<endl;
    cout << v[1] << endl;
    for (int i =0; i < v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
    for ( int i = v.size() -1; i>= 0; i--){
        cout << v[i] << ' ';
    }
    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    vector<int> e; 
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        e.push_back(tmp);
    }

    vector<int>::iterator ti = e.begin();
    for(ti = e.begin(); ti !=e.end(); ti++){
        cout << *ti << ' ';
    }
    set<int> vi;
    vi.insert(1);
    vi.insert(1);
    vi.insert(1);
    vi.insert(1);
    vi.insert(1);
    vi.insert(1);
    cout << vi.size() << endl;
    //pair first second tao ra  1 cap so di cung vs nhau 
    pair<int,int> p;
    cout << p.first <<' '<< p.second;
    vector<pair<int, int>> p ; 
    
}


