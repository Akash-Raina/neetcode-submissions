class MyHashSet {
    

public:

    vector<int> hashSet;
    MyHashSet() {

    }
    
    void add(int key) {
        bool isPresent = contains(key);

        if(!isPresent) hashSet.push_back(key);
    }
    
    void remove(int key) {
        int isPresent =  contains(key);

        if(isPresent){
            for(int i = 0; i < hashSet.size(); i++){
                if(hashSet[i] == key) hashSet.erase(hashSet.begin()  + i);
            }
        };
    }
    
    bool contains(int key) {
        for(auto value : hashSet){
            if(value == key) return true;
        };
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */