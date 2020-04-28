class LRUCache {
public:
    unordered_map<int, int> cache;
    int size;
    unordered_map<int, int> count_in_q;
    queue<int> q;
    LRUCache(int capacity) {
        this->size = capacity;
    }
    
    int get(int key) {
        auto it = this->cache.find(key);
        if(it == this->cache.end()) {
            return -1;
        }
        this->q.push(key);
        this->count_in_q[key]++;
        return it->second;
    }
    
    void put(int key, int value) {
        if(this->cache.size() < this->size) {
            this->q.push(key);
            this->count_in_q[key]++;
            this->cache[key] = value;
        }
        else {
            auto it = this->cache.find(key);
            if(it != this->cache.end()) {
                this->cache[key] = value;
                this->q.push(key);
                this->count_in_q[key]++;
            }
            else {
                while(1) {
               int first = this->q.front();
               this->q.pop();
               this->count_in_q[first]--;
               if(this->count_in_q[first] == 0) {
                   this->cache.erase(first);
                   break;
               }
           }
            this->cache[key] = value;
            this->q.push(key);
            this->count_in_q[key]++;
            }
           
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */