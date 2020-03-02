
//找出一个数组中的全部子集
class Solution
{
public:
	vector<vector<int>> subsets(vector<int>& nums)
	{
		vector<vector<int>> res(1);
		for (int i = 0; i < nums.size(); i++)
		{
			int cnt = res.size();
			for (int j = 0; j < cnt; j++)
			{
				vector<int> tmp = res[j];
				tmp.push_back(nums[i]);
				res.push_back(tmp);
			}
		}
		return res;
	}
};
