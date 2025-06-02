#include<iostream>
#include<vector>
using namespace std;
void intersectionArray(const vector<int>&arr1,const vector<int>&arr2,vector<int>&ans){
    int n=arr1.size();
    int m=arr2.size();
    int i=0 , j=0;
    vector<int>vis1(n,0);
    vector<int>vis2(m,0);
    while(i<n && j<m){
        if(arr1[i] == arr2[j] && (!vis1[i]) && (!vis2[j]) ){
            vis1[i]=1,vis2[j]=1;
            ans.push_back(arr1[i]);
            i++; j++;
        }
        else {
            if(arr1[i]<arr2[j])i++;
            else j++;
        }
    }
    
}
void display(const vector<int>&nums){
    for(int num:nums){
        cout<<num<<" ";
    }
 }
  int main()
{
    cout<<" \nPROGRAM TO FIND THE INTERSECION OF THE 2 ARRAYS : \n";
    vector<int>arr1{1,1,2,2,3,3,4,5,6,9};
    vector<int>arr2{2,3,3,5,6,6,7,9};
    vector<int>ans;
    intersectionArray(arr1,arr2,ans);
    display(ans);
    return 0;
}
