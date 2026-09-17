class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> string1,string2;

        for(char fill:s)
        {
            if(string1.find(fill) == string1.end())
                string1.insert({fill,1});
            else 
                string1[fill]++;
        }

        for(char fill:t)
        {
            if(string2.find(fill) == string2.end())
                string2.insert({fill,1});
            else 
                string2[fill]++;
        }

        if(string2 == string1)
            return true;
        else 
            return false;

    }
};
