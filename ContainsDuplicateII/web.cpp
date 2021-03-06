bool containsNearbyDuplicate(vector<int>& nums, int k){
	if(nums.size() == 0 || k == 0){
		return false;
	}
	map<int, int> nums_arrange;
	for(int i=0; i<nums.size(); i++){
		if(nums_arrange.find(nums[i]) == nums_arrange.end())
			nums_arrange[nums[i]] = i;
		else{
			if(i-nums_arrange[nums[i]] <= k)
				return true;
			else
				nums_arrange[nums[i]] = i;
		}
	}
	return false;
}
