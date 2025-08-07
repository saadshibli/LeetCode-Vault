// Problem : 347. Top K Frequent Elements
// Source : https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int v:nums) freq[v]++;
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        for(auto& num:freq) {
            minHeap.push({num.second,num.first});
            if(minHeap.size()>k) minHeap.pop();
        }
        vector<int> topK;
        while(!minHeap.empty() && topK.size()<k) {
            topK.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return topK;
    }
};