#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<string>dream;
    for(int i=0;i<n;i++)
    {
        string query;
        cin>>query;
        if(query=="Sleep")
        {
            string person;
            cin>>person;
            dream.push(person);
        }
        else if(query=="Kick")
        {
            if(!dream.empty())
            {
                dream.pop();
            }
        }
        else if (query == "Test") {
            if (!dream.empty()) {
                cout << dream.top() << endl;
            } else {
                cout << "Not in a dream" << endl;
            }
    }
}
}