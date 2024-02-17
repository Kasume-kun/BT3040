#include <bits/stdc++.h>

using namespace std;

int main()
{
    string seq = "CTCGGATTTGTAAAGATCATGATCTCATACATAGTACCTAGCCATTG";
    //cin>>seq;   //Uncomment this line to take sequence input from user
    int n=seq.size();
    double baseStackingEnergy=0;
    unordered_map<string, int> base_stacking_energy_map = {
        {"AA", -4}, {"AT", -7}, {"AC", -5}, {"AG", -11},
        {"TA", -7}, {"TT", -2}, {"TC", -3}, {"TG", -4},
        {"CA", -9}, {"CT", -5}, {"CC", -6}, {"CG", -7},
        {"GA", -9}, {"GT", -6}, {"GC", -4}, {"GG", -11},
    };

    for(int i=0; i<n-1; i++)
    {
        string base=""; base+=seq[i]; base+=seq[i+1];
        baseStackingEnergy+=base_stacking_energy_map[base];
    }
    cout<<"Average Base Stacking Energy: ";
    cout<<baseStackingEnergy/(n-1)<<"\n";
    return 0;
}