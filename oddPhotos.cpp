/*
NAME: Ashwin Parthasarathy
LANG: C++
TASK: Odd Photos
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int breed_id[n];
    int num_even=0,num_odd=0;

    while(n>0){
        n--;
        cin>>breed_id[n];
        if(breed_id[n]%2==0)
            num_even++;
        else
            num_odd++;
    }

    //cout<<num_even<<endl;
    //cout<<num_odd<<endl;

    while(num_odd>num_even){
        num_odd-=2;
        num_even++;
    }

    while(num_even - 1 > num_odd){
        num_even--;
    }

    cout<<num_odd+num_even;

    return 0;
}