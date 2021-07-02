#include<bits/stdc++.h>
#define m 1000002
using namespace std;
bool a[m];
int arr1[m];

int main()
{
    for(int i=2;i<=m;i++)
    {
        if(a[i]==0) {
            int n = i;
            int sum=0;
            while(n!=0) {
                sum += (n%10);
                n=n/10;
            }
            if(a[sum]==0) {
                arr1[i]=1;
            }
            for(int j=2;i*j<=m;j++) {
                a[i*j]=1;
            }
        }
    }

    for(int i=1;i<=m;i++) {
        arr1[i] = arr1[i] + arr1[i-1];
    }

    int tc = 0;
    scanf("%d",&tc);
    while(tc--) {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",arr1[b]-arr1[a-1]);
    }

    return 0;

}
