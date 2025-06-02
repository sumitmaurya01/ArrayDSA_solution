#include<iostream>
 using namespace std;
 void unionArray(const vector<int>&arr1,const vector<int>&arr2,vector<int>&ans){
    int i=0,j=0;
    int n=arr1.size(),m=arr2.size();
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(ans.size() == 0 || arr1[i]!= ans.back()){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || arr2[j] != ans.back()){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(arr1[i] != ans.back() || ans.size() == 0){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(arr2[j]!=ans.back() || ans.size() == 0){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    
 }  
 void display(const vector<int>&nums){
    for(int num:nums){
        cout<<num<<" ";
    }
 }
  int main()
{
    vector<int>arr1{1,1,2,3,4,5};
    vector<int>arr2{2,3,4,4,5,6,7,7,8,9};
    vector<int>ans;
    unionArray(arr1,arr2,ans);
    display(ans);
    return 0;
}
