#include <iostream>
#include<stack>
#include<queue>

using namespace std;

class Solution {
    public:
    char c;
    stack<char>st;
    queue<char>qu;
    void pushCharacter(char ch){
        st.push(ch);
    }
    void enqueueCharacter(char ch){
        qu.push(ch);
    }
    char popCharacter(){
        c=st.top();
        st.pop();
        return c;
    }
    char dequeueCharacter(){
        c=qu.front();
        qu.pop();
        return c;
    }

};

