#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int n=x;
    int sum=0;
    
    while(n !=0)
    {
        sum+=n%10;
    n/=10;
    }
    return x%sum? false:true;
}