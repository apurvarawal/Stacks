#include<iostream>
using namespace std;

template <typename T>
class stack{
    T* arr; // array of type 'T'.
    int n; // capacity of array.
    int t; // index of element stored in the last position

    public:
    stack(int n){
        this -> n = n;
        arr = new T[n];
        t = -1;
    }

    void push(T data){

        //base case
        if(t == n-1){ //stack is full
            return;
        }

        //recursive case
        t = t+1;
        arr[t] = data;
    }

    void pop(){

        //base case
        if(t == n-1){ //stack is empty
            return;
        }
        //recursive case
        t = t-1;
    }

    T top(){
        return arr[t];
    }

    int size(){
        return t+1;
    }

    bool empty(){
        return t == n-1;
    }
};
int main(){
    
    stack <int> s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"top = "<<s.top()<<endl;
    cout<<"size = "<<s.size()<<endl;

    s.pop();

    cout<<"top = "<<s.top()<<endl;
    cout<<"empty ? "<<s.empty()<<endl;
    return 0;
}