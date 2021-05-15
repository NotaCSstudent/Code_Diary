#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


float stddev(vector<double> input)
{
    double t = 0;
    for(auto x: input)
    {
        t+=x;
    }
    t = t/input.size();
    
    t = ((input[0]-t)*(input[0]-t))/input.size();
   return sqrt(abs(t));
}


float variance(vector<double> input)
{
    double t = 0;
    for(auto x: input)
    {
        t+=x;
    }
    t = t/input.size();
    
    t = ((input[0]-t)*(input[0]-t))/input.size();
   return abs(t);
}

int main()
{
    vector<double> t1{1,2,3,4,5,6,5,4,3,2,4,2,3,4,5,1,2,3,4,5};
    vector<double> t2{1,2,3,4,5,6,5,4,3,2,4,2,3,4,5,1,2,3,4,5};
    std::cout << stddev(t1) << '\n';
    std::cout << stddev(t2) << '\n';

}