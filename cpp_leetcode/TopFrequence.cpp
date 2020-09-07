#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int> res_map;
        map<int ,int>::iterator mpit;
        vector<int> result;
		priority_queue<pair<int, int>> pq;

        for(auto va : nums) res_map[va]++;
        for(mpit = res_map.begin();mpit != res_map.end(); mpit++){
			//cout << mpit->first << mpit->second <<endl;
			pq.push(pair<int,int>(mpit->second, mpit->first));

        }
		while(k--){
			 result.push_back(pq.top().second);
			 pq.pop();
		}
        return result;
    }
};

int main(int argc ,char *argv[])
{
	Solution a;
	vector<int> av = {1,1,1,2,2,3};
	int k = 2;
	vector<int> ret  = a.topKFrequent(av,k);
	for(int i = 0;i < ret.size();i++)
		cout<< ret[i] << endl;
}