class Solution
{
public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k)
    {
        // code here
        priority_queue<int> maxh;
        for (int i = 0; i < arr.size(); i++)
        {
            maxh.push(arr[i]);
            if (maxh.size() > k)
            {
                maxh.pop();
            }
        }
        return maxh.top();
    }
};