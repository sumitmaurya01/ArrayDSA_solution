#include<iostream>
using namespace std;

void solve(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int prev = arr[0];
    int idx = 1;
    int i=1;
    int n=arr.size();
    while(i<n){ 
        if( arr[i] != prev && idx != i){
            prev = arr[i];
            swap(arr[i],arr[idx]);
            idx++;
        }
        i++;
    }
}
void display(const vector<int>&arr){
    for(int num: arr){
        cout<<num<<" ";
    }
}
int main(){
    vector<int>arr{1,1,2,2,3,3,2,5};
    solve(arr);
    display(arr);
}