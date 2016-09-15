class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int > newMap;
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i){
            newMap.insert(pair<int, int>(nums[i],i));
        }
        
        for (int i = 0; i < nums.size(); ++i)
        {
            cout << i << endl;
            map<int,int>::iterator it = newMap.find(target - nums[i]);
            if(newMap.find(target - nums[i]) != newMap.end() && i != it->second){
                result.push_back(i);
                result.push_back(it->second);
                return result;
            }
        }
        return result;

        
        
        
    }
};