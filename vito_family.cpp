#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> num;
int main()
{
    int n,element,vec_num;
    cin>>n;
    while(n--)
    {
        cin>>vec_num;
        num.clear();
        for(int i=0;i<vec_num;i++)
        {
            cin>>element;
            num.push_back(element);
        }
        sort(num.begin(),num.end());
        int mid=num[vec_num/2];
        int sum=0;
        for (int i=0;i<vec_num;i++)
        {
            sum+=abs(num[i]-mid);
        }
        cout<<sum<<endl;
    }
    return 0;
}