#include <iostream>

int n(int input)//Linear Input, so basically f(x) or y=x
{
    int x = 0;//This will be Linear Time
    for(int i =1;i<=input;i++)
    {
        x+=1;
    }
    return x;
}

int main()
{

  std::cout <<  n(5) << std::endl;//O(n) therefore O(5);

    


}