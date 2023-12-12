#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b&&(a!=0||b!=0)){
        int arr_a,arr_b;
        int i=0;
        int j=0;
        int carry=0;
        while(a>=1){
            arr_a[i]=a%10;
            a=a/10;
            i++;
        }
        while(b>=1){
            arr_b[i]=b%10;
            b=b/10;
            i++;
        }
        int length=max(i,j);
        for(int k=0;k<length;k++)
        {
            
            int s=arr_a[k]+arr_b[k];
            if(s>=10)
            {
                carry++;
                arr_a[k]++;
            }
        }
    }
}