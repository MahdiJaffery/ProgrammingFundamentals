#include <iostream>
using namespace std;

// Function to find indices of two numbers that add up to the target
void twoSum(int nums[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indices of the numbers are: " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "No two sum solution found" << endl;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);

    twoSum(nums, size, target);

    return 0;
}
