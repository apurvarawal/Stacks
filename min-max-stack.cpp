#include<iostream>
#include<vector>
using namespace std;

class minmaxstack{
    vector<int> stack;
    vector<int> minstack;
    vector<int> maxstack;

    public:
        void push(int data){
            int current_min = data;
            int current_max = data;
            if(minstack.size()){ //there is atleast one element in the min stack
               current_min = min(minstack[minstack.size()-1],data);
               current_max = max(maxstack[maxstack.size()-1],data);
            }
            minstack.push_back(current_min);
            maxstack.push_back(current_max);
            stack.push_back(data);
        }
        int getmin(){
            return minstack[minstack.size()-1];
        }
        int getmax(){
            return maxstack[maxstack.size()-1];
        }
        int top(){
            return stack[stack.size()-1];
        }
        void pop(){
            minstack.pop_back();
            maxstack.pop_back();
            minstack.pop_back();
        }
        void print(){
            for(int x:stack){
                cout<<x<<" ";
            }
            cout<<endl;
             cout<<getmin()<<endl;
           
             cout<<getmax()<<endl;
            
        }
};

int main(){
    minmaxstack s;
    s.push(2);
    s.push(5);
    s.push(3);

    s.print();

    return 0;
}