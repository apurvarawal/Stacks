#include<iostream>
#include<stack>

//LIFO principle

using namespace std;
int main(){
    stack <int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"top = "<<s.top()<<endl;

    s.pop();

    cout<<"top = "<<s.top()<<endl;

    cout<<"empty ? "<<s.empty();
    return 0;
}