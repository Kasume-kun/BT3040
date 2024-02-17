#include <bits/stdc++.h>

using namespace std;

int main()
{
    string seq = "GACATTGTGAACAGTAAAAAAGTCCATGCAATGCGCAAGGAGCAGAAGAGGAAGCAGGGCAAGCAGCGCTCCATGGGCTCTCCCATGGACTACTCTCCTCTGCCCATCGACAAGCATGAGCCTGAATTTGGTCCATGCAGAAGAAAACTGGATGGG";
    int n=seq.size();
    //string searchString; cin>>searchString;
    map<string, int> seq_map_count = {
        {"AAG", 1}, {"GTC", 1}, {"GAG", 1}, {"ACTA", 1}, {"ATAT", 1},
    };
    map<string, vector<int>> seq_map_pos = {
        {"AAG", {}}, {"GTC", {}}, {"GAG", {}}, {"ACTA", {}}, {"ATAT", {}},
    };
    for(int i=0; i<n-2; i++)
    {
        string base=""; base+=seq[i]; base+=seq[i+1]; base+=seq[i+2];
        if(seq_map_count[base]>=1)
        {
            seq_map_count[base]++;
            seq_map_pos[base].push_back(i);
        }
    }
    for(int i=0; i<n-3; i++)
    {
        string base=""; base+=seq[i]; base+=seq[i+1]; base+=seq[i+2]; base+=seq[i+3];
        if(seq_map_count[base]>=1)
        {
            seq_map_count[base]++;
            seq_map_pos[base].push_back(i);
        }
    }
    for(auto &x:seq_map_count)
    {
        if(x.second>=1)
        {
            cout<<"Enter the string: "<<x.first<<"\n";
            cout<<"Total Match: "<<x.second-1<<"\n";
            cout<<"Position of match: ";
            for(auto &y:seq_map_pos[x.first])
                cout<<y<<" ";
            cout<<"\n\n";
        }

    }
    return 0;
}