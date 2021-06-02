#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }

    int k;
    cin>>k;

    int sum = 0;
    int counter = 0;

    unordered_map<int, int> m;

    for(int i=0; i<v1.size(); i++){
        sum = sum + v1[i];

        if(sum == k){
            counter++;
        }

        if(m.find(sum-k)!=m.end()){
            counter = counter + m[sum-k];
        }
        m[sum]++;
    }

    cout<<counter;
    return 0;
}