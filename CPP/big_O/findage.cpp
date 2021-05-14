#include <iostream>
#include<vector>
#include<random>
#include <queue>


class MedianOfAges{
    public:
        std::priority_queue<int> maxHeap; //containing first half of numbers
        std::priority_queue<int, std::vector<int>, std::greater<int>>  minHeap; //containing second half of numbers

        void insertNum(int num) {
            if (maxHeap.empty() || maxHeap.top() >= num)
              maxHeap.push(num);
            else
              minHeap.push(num);

            // either both the heaps will have equal number of elements or max-heap will have one 
            // more element than the min-heap
            if (maxHeap.size() > minHeap.size() + 1){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else if (maxHeap.size() < minHeap.size()){
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }

        double findMedian() {
            if (maxHeap.size() == minHeap.size()) {
              // we have even number of elements, take the average of middle two elements
              return maxHeap.top() / 2.0 + minHeap.top() / 2.0;
            }
            // because max-heap will have one more element than the min-heap
            return maxHeap.top();
        }
};

int main() {
  // Driver code
  
    MedianOfAges medianOfAges;
    medianOfAges.insertNum(22);
    medianOfAges.insertNum(35);
    std::cout << "The recommended content will be for ages under: " << std::to_string(medianOfAges.findMedian()) << std::endl;
    medianOfAges.insertNum(30);
    std::cout << "The recommended content will be for ages under: " << std::to_string(medianOfAges.findMedian()) << std::endl;
    medianOfAges.insertNum(25);
    std::cout << "The recommended content will be for ages under:  " <<  std::to_string(medianOfAges.findMedian()) << std::endl;
    return 0;
}