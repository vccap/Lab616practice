#include<iostream>
using namespace std;
bool prime(int a)
{
    if(a==1) return false;
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0) return false;     
    }
    return true;
}
int main(void)
{
    int num;
    int sum=0;
    cin >> num;
    
    for(int i = 1; i <= num; i++)
    {
        if(prime(i)) 
        {
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}


