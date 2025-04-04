class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() <= 2)
            return nums.size();

        int currentPosition = 2;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[currentPosition - 2])
            {
                nums[currentPosition] = nums[i];
                currentPosition++;
            }
        }

        return currentPosition;
    }
};