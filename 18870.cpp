#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> v,u;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        u.push_back(a);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<n;i++){
        cout << lower_bound(v.begin(),v.end(),u[i])-v.begin() << " ";
    }
}
