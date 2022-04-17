#include<iostream>
#include<stack>

//TIME COMPLEXITY : O(N^2)
//SPACE COMPLEXITY : o(N)

using namespace std;

void insertatbottom(stack <int> &s , int x){

    //base case
    if(s.empty()){
        s.push(x); //inserting the topmost element in the bottom, when the stack is empty
        return;
    }
    //recursive case
    int y = s.top(); 
    s.pop();

    insertatbottom(s,x);

    s.push(y);
}

void reverse(stack <int> &s){

    //base case
    if(s.empty()){
        return;
    }
    //recursive case
    int x = s.top();
    s.pop();

    reverse(s);

    insertatbottom(s,x);
}
void print(stack <int> s){

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    
    stack <int> s;

    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    print(s);
    cout<<endl;

    reverse(s);

    print(s);

    return 0;
}