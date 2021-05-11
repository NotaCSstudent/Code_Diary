#include <iostream>

int nsquared(int input)//Quadratic Input, so basically f(x^2) or y=x^2
{
    int x = 0;//This will be Quadratic Time
    for(int i =1;i<=input;i++)
    {
        for(int j=1;j<=input;j++)
        {
            x+=1;
        }
    }
    return x;
}

int main()
{

  std::cout <<  nsquared(5) << std::endl;//O(n^2) therefore O(5^2);

    


}