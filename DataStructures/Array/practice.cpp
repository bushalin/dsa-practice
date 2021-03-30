#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20}, x = 10;
    int *ptr = arr;
    std::cout << *(ptr+1) << std::endl;
    return 0;
}
