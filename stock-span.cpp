#include <iostream>
#include <stack>
using namespace std;

void spanofelements(int price[], int n, int span[])
{
    stack<int> s; // indices of days
    s.push(0); //pushing index of day 0
    span[0] = 1; //span for day 0 will be 1

    //loop for rest of the days
    for (int i = 1; i < n; i++)
    {
        int currentprice = price[i];
        while (!s.empty() && price[s.top()] <= currentprice)
        {
            s.pop();
        }
        //now s.top()>currentprice
        if (!s.empty())
        {
            span[i] = i - s.top();
        }
        else
        {
            span[i] = i + 1;
        }
        s.push(i); //pushing index of elements
        
    }
        
}

int main()
{
    int price[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(price) / sizeof(int);
    int span[10000] = {0};
    spanofelements(price, n, span);
    for(int i=0; i<n; i++){
        cout<<span[i]<<" ";
    }
    return 0;
}