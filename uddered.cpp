/*
NAME: Ashwin Parthasarathy
LANG: C++
TASK: Uddered
*/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
    string cowphabet;
    cin>>cowphabet;

    map<char,int> priority;

    for(int i=0 ; i<cowphabet.length();i++)
        priority[cowphabet[i]] = i;


    string hum;
    cin>>hum;

    int ans = 1;
    for(int i = 1; i<hum.length() ; i++){
        if(priority[hum[i]] <= priority[hum[i-1]]){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}