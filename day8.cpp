/*
Problem : Reverse a String Word by Word
You are given a string s that consists of multiple words separated by spaces. 
Your task is to reverse the order of the words in the string. Words are defined as sequences of non-space characters.
 The output string should not contain leading or trailing spaces, and multiple spaces between words should be reduced to a single space.
*/

# include <iostream>
using namespace std;

string reverseWords(string s) {
        string res="",tmp="";
        s+=" ";
        for(auto ch : s){
            if(ch!=' '){
                tmp+=ch;
            }
            else{
                res=tmp+(tmp.size()<1 or res.size()<1? "" : " ")+res;
                tmp="";
            }
        }
        return res;
    }

int main(){

    string s="Jadhav Vaibhav       ";
    cout<<reverseWords(s)<<endl;

    return 0;
}
