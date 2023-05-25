#include<iostream>
#include<vector>
#include<omp.h>
#include<climits>
using namespace std;

void min_reduction(vector<int> & arr){
int min_value=INT_MAX;
for(int i=0;i<arr.size();i++){
if(arr[i]<min_value){
 min_value=arr[i];
}
}
cout<<"Minimum value "<<min_value<<endl;
}

void max_reduction(vector<int> & arr){
int max_value=INT_MIN;
for(int i=0;i<arr.size();i++){
if(arr[i]>max_value){
 max_value=arr[i];
}
}
cout<<"Maximum value "<<max_value<<endl;
}

void sum_reduction(vector<int> & arr){
int sum=0;
for(int i=0;i<arr.size();i++){
sum+=arr[i];
}
cout<<"Sum "<<sum<<endl;
}

void avg_reduction(vector<int> & arr){
int sum=0;
for(int i=0;i<arr.size();i++){
sum+=arr[i];
}
cout<<"Avg "<<sum / arr.size()<<endl;
}

int main(){
vector<int>arr;
arr.push_back(2);
arr.push_back(9);
arr.push_back(6);
arr.push_back(7);
arr.push_back(7);
arr.push_back(6);
arr.push_back(8);
arr.push_back(7);

min_reduction(arr);
max_reduction(arr);
sum_reduction(arr);
avg_reduction(arr);
}
