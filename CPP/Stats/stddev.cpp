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
    
    t = (input[0]-t)/input.size();
   return sqrt(abs(t));

}

int main()
{
    vector<double> t{1,2,3,4,5,6,5,4,3,2,4};
    std::cout << stddev(t) << std::endl;
}