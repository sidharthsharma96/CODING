#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t,m;
    char fib[31][120]=
    {
        {
            "0"
        },
        {
            "01"
        },
        {
            "011"
        },
        {
            "0112"
        },
        {
            "01123"
        },
        {
            "011235"
        },
        {
            "0112358"
        },
        {
            "011235813"
        },
        {
            "01123581321"
        },
        {
            "0112358132134"
        },
        {
            "011235813213455"
        },
        {
            "01123581321345589"
        },
        {
            "01123581321345589144"
        },
        {
            "01123581321345589144233"
        },
        {
            "01123581321345589144233377"
        },
        {
            "01123581321345589144233377610"
        },
        {
            "01123581321345589144233377610987"
        },
        {
            "011235813213455891442333776109871597"
        },
        {
            "0112358132134558914423337761098715972584"
        },
        {
            "01123581321345589144233377610987159725844181"
        },
        {
            "011235813213455891442333776109871597258441816765"
        },
        {
            "01123581321345589144233377610987159725844181676510946"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711"
        },
        {
            "011235813213455891442333776109871597258441816765109461771128657"
        },
        {
            "01123581321345589144233377610987159725844181676510946177112865746368"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711286574636875025"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711286574636875025121393"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711286574636875025121393196418"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711286574636875025121393196418317811"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711286574636875025121393196418317811514229"
        },
        {
            "0112358132134558914423337761098715972584418167651094617711286574636875025121393196418317811514229832040"
        }
    };
///=============================



    cin>>t;
    int ans=0,i,j;
    char k[50];
    while(t--)
    {
        cin>>m;
        cin>>k;
        ans=0;
        for(i=0;fib[m][i]!='\0';i++)
        {
            if(fib[m][i]==k[0])
            {
                j=0;
                while(fib[m][i]==k[j] && k[j]!='\0')
                {
                    i++;
                    j++;
                }
                if(k[j]=='\0')
                    ans++;
                i--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;

}
