#include<bits/stdc++.h>
using namespace std;
int main()
{    int n=50;
    vector<vector<int>> v(n);
    cout<<"The random matrix :"<<n<<"x"<<n<<endl;
    for(int i=0;i<n;i++)
    {
        v[i].resize(n);
        for(int j=0;j<n;j++)
        {
            v[i][j]=rand()%10;
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int maxlen=1; int x=-1,y=-1; int direction=-1;
    //diagonals from bottom-left to top-right  direction=0 for this type digonals
    for(int i=0;i<n;i++)
    {   
        int j=n-2,k=i+1; int len=1;
        while(k<=n-1 && j>=0)
        { 
           if(v[j+1][k-1]<v[j][k])
           len++;
           else
           {
              if(maxlen<len)
              {maxlen=len; x=j+1; y=k-1; direction=0; }
              len=1;
           }
           k++; j--;
        }
       
            j=i-1; k=1; len=1;
            while(j>=0 && k<=n-1)
            {
                if(v[j+1][k-1]<v[j][k])
                 len++;
                else
                {
                   if(maxlen<len)
                   {maxlen=len; x=j+1; y=k-1;direction=0;}
                   len=1;
                 }
                 k++; j--;
             
           }

    }
    //digonals from bottom-right to top-left direction=1 for this type of digonals
    for(int i=0; i<n;i++)
    {
        int j=n-2,k=i-1,len=1;
        while(j>=0 && k>=0)
        {  
            if(v[j+1][k+1]<v[j][k])
            len++;
            else
            {
               if(maxlen<len)
               {maxlen=len; x=j+1; y=k+1; direction=1; }
                   len=1; 
            }
            j--; k--;
        }
         
            j=i-1; k=n-2; len=1;
            while(j>=0 && k>=0)
           {
            if(v[j+1][k+1]<v[j][k])
            len++;
            else
            {
               if(maxlen<len)
               {maxlen=len; x=j+1; y=k+1; direction=1; }
                   len=1; 
            }
            j--; k--;
           }
        
    }
    //printing the elements
    cout<<"The longest digonal increasing subarray is  length "<<maxlen<<endl<<endl;
    if(direction==0)
    {  
       cout<<"It starts from index ("<<x+maxlen-1<<","<<y+1-maxlen<<") and ends at ("<<x<<","<<y<<") "<<endl<<endl;
       cout<<"The sequence is: "<<endl;
       for(int i=maxlen-1;i>=0;i--)
       cout<<v[x+i][y-i]<<" ";
       cout<<endl;
    }
    else
    {
        cout<<"It starts from index ("<<x+maxlen-1<<","<<y+maxlen-1<<") and ends at ("<<x<<","<<y<<") "<<endl<<endl;
       cout<<"The sequence is: "<<endl;
       for(int i=maxlen-1;i>=0;i--)
       cout<<v[x+i][y+i]<<" ";
       cout<<endl;
    }
    
}