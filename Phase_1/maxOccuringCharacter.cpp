#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: "; // assuming only the lowercase letters
    cin>>s;
    int count[26]={0};
    for(int i=0;s[i]!='\0';i++){
        count[s[i]-'a']++;
    }
    int ans=-1;
    int maxi=-1;
    for(int i=0;i<26;i++){
        if(count[i]>maxi){
            ans=i;
            maxi=count[i];
        }
    }
    char ch=ans+'a';
    cout<<"Maximum occurring character is: "<<ch<<endl;

    return 0;
}