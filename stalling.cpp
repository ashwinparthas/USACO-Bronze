/*
NAME: Ashwin Parthasarathy
LANG: C++
TASK: Stalling
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> a;
    vector<int> b;
    int a_val,b_val;

    for(int i=0;i<n;i++){
        cin>>a_val;
        a.push_back(a_val);
    }

    for(int i=0;i<n;i++){
        cin>>b_val;
        b.push_back(b_val);

    }

    long long ans=1;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int index;
    for(int i=n-1;i>=0;i--){
        index = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        //cout<<index<<endl;
        ans = ans * (n - index - (n-1-i) );
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;

    return 0;
}