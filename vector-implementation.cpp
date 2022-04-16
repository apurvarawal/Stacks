#include<iostream>
#include<vector>
using namespace std;

template <typename T>

class stack{
    vector <int> v;

    public:
    void push(T data){
        v.push_back(data);
    }

    void pop(){

        //base case
        if(empty()){
            return;
        }

        //recursive case
        v.pop_back();
    }

    int size(){
        return v.size();
    }

    T top(){
        return v.back();
    }

    bool empty(){
        return v.empty();
    }
};

int main(){
    
    stack <int> s;

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