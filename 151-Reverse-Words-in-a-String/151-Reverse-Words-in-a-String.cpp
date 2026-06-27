class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        int n = s.size();
        int right = n - 1;

        for (int left = n - 1; left >= 0; left--) {

            if (s[left] == ' ') {

                if (right > left) {

                    int len = right - left;
                    if (!temp.empty())
                        temp += " ";

                    temp += s.substr(left + 1, len);
                }

                right = left - 1;
            }
        }

        if (right >= 0) {
            if (!temp.empty())
                temp += " ";

            temp += s.substr(0, right + 1);
        }

        return temp;
    }
};