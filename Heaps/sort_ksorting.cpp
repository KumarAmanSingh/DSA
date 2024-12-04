int main()
{
    priority_queue<int, vector<int>, greater<int>> minh;
    vector<int> v;
    for (int i = 0; i < arr.size(); i++)
    {
        minh.push(arr[i]);
        if (minh.size() > k)
        {
            v.push_back(minh.top());
            minh.top();
        }
    }
    while (minh.size() > 0)
    {
        v.push_back(minh.top());
        minh.pop();
    }
    return v;f
}