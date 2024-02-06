#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int secondlargest=INT_MIN;
    int largest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }

    }
    if(secondlargest==INT_MIN){
        return -1;
    }
    return secondlargest;
}