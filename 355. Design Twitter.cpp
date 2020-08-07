class Twitter {
public:
    /** Initialize your data structure here. */
    unordered_map<int, unordered_set<int>> whoIfollow;
    vector<pair<int,int>>posts;
    Twitter() {
        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        posts.push_back({userId, tweetId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        int count = 0;
        vector<int>answer;
        for(int i = posts.size() - 1; i >= 0 && count < 10; i--){
            if(posts[i].first == userId || whoIfollow[userId].find(posts[i].first) != whoIfollow[userId].end()){
                answer.push_back(posts[i].second), count++;
            }
        }
        return answer;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        whoIfollow[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        whoIfollow[followerId].erase(followeeId);
    }
};