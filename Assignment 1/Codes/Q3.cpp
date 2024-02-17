#include <bits/stdc++.h>

using namespace std;

int main()
{
    string seq = "CTCGGATTTGTAAAGATCATGATCTCATACATAGTACCTAGCCATTG";
    //cin>>seq;   //Uncomment this line to take sequence input from user
    int n=seq.size();
    unordered_map<char,char> nucleotide_map = {
        {'A', 'T'}, {'T', 'A'}, {'G', 'C'}, {'C', 'G'},
    };
    string compSeq="";
    for(int i=0; i<n; i++)
    {
        compSeq+=nucleotide_map[seq[i]];
    }
    cout<<"Complementary sequence: ";
    cout<<compSeq<<"\n";
    return 0;
}