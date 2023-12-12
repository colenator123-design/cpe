#include<iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int carry = 0;
        int temp_sum = 0;

        while (a != 0 || b != 0)
        {
            int temp1 = a % 10;
            int temp2 = b % 10;
            int current_sum = temp1 + temp2 + temp_sum;

            if (current_sum >= 10)
            {
                carry++;
                temp_sum = 1; // Set the carry for the next iteration
            }
            else
            {
                temp_sum = 0;
            }

            a = a / 10;
            b = b / 10;
        }

          if(count==0) cout<<"No carry operation.\n";
        else if(count==1) cout<<"1 carry operation.\n";
        else cout<<count<<" carry operations.\n";
    }
    return 0;
}
