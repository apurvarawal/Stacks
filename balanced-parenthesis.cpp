#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

bool isempty(string str){
    stack <char> s;
    for(char ch : str){
        switch(ch){
            case '(' : 
            case '[' :
            case '{' : s.push(ch); break;
            case ')' : if(!s.empty() && s.top() == '('){s.pop(); break;} else{return false;}
            case ']' : if(!s.empty() && s.top() == '['){s.pop(); break;} else{return false;}
            case '}' : if(!s.empty() && s.top() == '{'){s.pop(); break;} else{return false;}
        }
    }
    return s.empty();
}
int main(){
    string str="{[()])";
    if(isempty(str)){
        cout<<"balanced";
    }
    else{
        cout<<"not balanced";
    }
    return 0;
}