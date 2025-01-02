#include <string>
#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    
    for (int num : numbers) {
        sum += num;
    }
    double average = sum / numbers.size();
    
    return average;
}
