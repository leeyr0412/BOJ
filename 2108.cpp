#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    IOS;
    int n;
    cin>>n;
    int sum=0,mode=0,min=4000,max=-4000;//평균용,최빈값 횟수
    int mo[8001]={0,};

    vector<int> v,mm;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
        sum+=a;
        mo[a+4000]++;
        if(a>max)
            max=a;
        if(a<min)
            min=a;
        if(mo[a+4000]>mode){
            mode=mo[a+4000];
            mm.clear();
            mm.push_back(a);
        }
        else if(mo[a+4000]==mode)
            mm.push_back(a);
    }
    sort(v.begin(),v.end());
    sort(mm.begin(),mm.end());
    cout<<floor(float(sum)/float(n)+0.5)<<"\n";
    cout<<v[(n-1)/2]<<"\n";
    cout<<((mm.size()>1) ? mm[1] : mm[0]) <<"\n";
    cout<<max-min;
    return 0;
}
