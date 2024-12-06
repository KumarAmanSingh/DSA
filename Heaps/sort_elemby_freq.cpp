vector<int> sortByFreq(vector<int> &arr)
{
    // Your code here
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    priority_queue<pair<int, int>> maxh;
    for (auto it : mp)
    {
        maxh.push({it.second, it.first});
    }
    vector<int> v;
    while (maxh.size() > 0)
    {
        int freq = maxh.top().first;
        int elem = maxh.top().second;
        // change the code if frequecy of two elements are equal....
        for (int i = 0; i < freq; i++)
        {
            v.push_back(elem);
        }
        maxh.pop();
    }
    return v;

    // Input: arr[] = [5, 5, 4, 6, 4]
    // Output: [5, 5, 4, 4, 6]
}