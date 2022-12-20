
// First Approach will be the given below and the time complexity of this approach is the O(N) and space also be the O(N)

/*

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "TUF is great for interview preparation";
    cout << "Before reversing words: " << endl;
    cout << s << endl;
    s += " ";
    stack<string> st;
    int i;
    string str = "";
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(str);
            str = "";
        }
        else
            str += s[i];
    }
    string ans = "";
    while (st.size() != 1)
    {
        ans += st.top() + " ";
        st.pop();
    }
    ans += st.top(); // The last word should'nt have a space after it
    cout << "After reversing words: " << endl;
    cout << ans;
    return 0;
}
*/



// Second approach will be the optimised approach having time complexity wiil be the O(N) and space complexity will be the O(1)

#include<bits/stdc++.h>
using namespace std;

string result(string s)
{
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    

    while (left <= right) 
    {
        char ch = s[left];
        if (ch != ' ') 
        {
            temp += ch;
        }

        else if (ch == ' ') 
        {
            if (ans!="") 
                ans = temp + " " + ans;
            else 
                ans = temp;

            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") 
    {
        if (ans!="") 
            ans = temp + " " + ans;
            
        else 
            ans = temp;
    }
    
    return ans;    
}
int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st);
    return 0;
}