#include <iostream>
#include<stack>

using namespace std;

bool check(int arr[], stack <int> &s, int n){
    int i=0;
    if(n%2==0){
        i=n/2;
    }else{
        i=(n/2)+1;
    }
    while(!s.empty() && i<n){
        if(s.top()==arr[i]){
            return true;
        }
        s.pop();
        i++;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    stack <int> s;
    
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n/2; i++){
        s.push(arr[i]);
    }
    
    if(check(arr,s,n)){
        cout<<"balance";
    }else{
        cout<<"not balance";
    }
    return 0;
}
