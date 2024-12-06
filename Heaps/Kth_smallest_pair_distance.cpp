class Solution
{
public:
    int smallestDistancePair(vector<int> &nums, int k)
    {
        int mini = INT_MAX;
        vector<int> v;
        priority_queue<int> maxh;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int diff = abs(nums[i] - nums[j]);
                v.push_back(diff);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            maxh.push(v[i]);
            if (maxh.size() > k)
            {
                maxh.pop();
            }
        }
        return maxh.top();
    }
};