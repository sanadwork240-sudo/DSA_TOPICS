// 1. Brute Force
// Idea
// Consider every starting index.
// Extend the subarray until it contains more than 2 distinct fruit types.
// Keep track of the maximum length.


int totalFruit(vector<int>& fruits) {

    unordered_map<int,int> mp;

    int left = 0;
    int ans = 0;

    for(int right = 0; right < fruits.size(); right++) {

        mp[fruits[right]]++;

        while(mp.size() > 2) {

            mp[fruits[left]]--;

            if(mp[fruits[left]] == 0)
                mp.erase(fruits[left]);

            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}