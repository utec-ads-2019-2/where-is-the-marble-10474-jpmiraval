#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned int n_marbles, n_queries, marble, querie, contador = 1;
    while(cin>>n_marbles>>n_queries)
    {
        if(n_marbles==0 & n_queries==0)
            break;
        vector<int> marbles;
        for(int i = 0; i < n_marbles;i++)
        {
            cin>>marble;
            marbles.push_back(marble);
        }
        sort(marbles.begin(),marbles.end());
        cout<<"CASE# "<<contador<<":"<<endl;
        for(int i = 0; i < n_queries; i++)
        {
            cin>>querie;
            bool found = false;
            int j = 0;
            for(; j < n_marbles;j++)
            {
                if(marbles[j]==querie)
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                cout<<querie<<" found at "<<j+1<<endl;
            }
            else
            {
                cout<<querie<<" not found"<<endl;
            }
        }
        contador++;
    }
}