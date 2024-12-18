class Solution
{
public:
    int countNodes(int i)
    {
        return pow(2, i - 1);
    }
};
// maximum node in ith level = 2^i-1