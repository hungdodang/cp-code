class FirstUnique {
public:
    unordered_map<int, int> count_in_q;
    queue<int> q;
    FirstUnique(vector<int>& nums) {
        for(int num : nums) {
            q.push(num);
            count_in_q[num]++;
        }
    }
    
    int showFirstUnique() {
        while(!q.empty()) {
            int first = q.front();
            if(count_in_q[first] == 1) {
                return first;
            }
            else {
                q.pop();
            }
        }
        return -1;
    }
    
    void add(int value) {
        q.push(value);
        count_in_q[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */