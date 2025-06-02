#include<iostream>
 using namespace std;
 int solveBrute(vector<int>arr){
    int n = sizeof(arr)/sizeof(int);
   sort(arr.begin(),arr.end());
   int ans;
   int largest = arr[n-1];
   for(int i=n-1; i>=0; i--){
    if(arr[i]<largest){
        ans=arr[i];
        break;
    }
   }
   return ans;
 }  
 int solveOptimal(vector<int>arr){
    int largest = max(arr[0],arr[1]);
    int secLargest = min(arr[0],arr[1]);
    int n = sizeof(arr)/sizeof(int);
    for(int i=2; i<n; i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secLargest){
            secLargest=arr[i];
        }
    }
    return secLargest;
 }
 
 int secSmallest(vector<int>arr){
    int smallest=arr[0];
    int secSmallest=INT_MAX;
    int n=arr.size();
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            secSmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]>smallest && arr[i]<secSmallest){
            secSmallest = arr[i];
        }
    }
    return secSmallest;
 }
  int main()
{

 vector<int>arr{2,8,4,10,7,3};
 //brute force
 cout<<"Second Largest =" <<solveBrute(arr);
 cout<<"\nSecond largest using optimal = "<<solveOptimal(arr);
 cout<<"\n socond smallest = "<<secSmallest(arr);
    return 0;
}