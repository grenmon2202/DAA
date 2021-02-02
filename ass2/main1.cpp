#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
    int n = 6;
    int matx[n][n];
    string file_name = argv[2];
    fstream file;
    file.open(file_name.c_str());
    int mi = 0, mj= 0;
    
    string number;    
    while(file>>number){
    	matx[mi][mj]=stoi(number);
    	mj++;
    	if(mj==50){
    		mj=0;
    		mi++;
    	}
    	if(mi==50)
    		break;
    }
    
    for(int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
    		cout<<matx[i][j]<<"		";
    	}
    	cout<<endl;
    }
    
    int maxlen=1;
    int l=1;
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i>0 && (j>0 && j<n-1)){
                continue;
            }

            //==== left side ===
            int t1=i;int t2=j;
            int maxTemp = 1, lenTemp = 1;
            while(t1<n && t2<n){
                if (matx[t1][t2] <=matx[t1-1][t2-1]) 
                    lenTemp++;
                else{ 
                    if (maxTemp < lenTemp)     
                        maxTemp = lenTemp; 
                    lenTemp = 1;
                }
                t1++;t2++;
            }
            if (maxTemp < lenTemp) 
                maxTemp = lenTemp;
    
            if(maxlen<maxTemp)
                maxlen=maxTemp;
            // again changed to 1 to use in loop 2
            maxTemp=1;lenTemp=1;
            //====== left side ===
            
            //=== right side===
            if((j>0 && i==0)|| (j==n-1 && i>0)){
                t1=i;t2=j;
                while(t1<n && t2>=0){
                    if (matx[t1][t2] <=matx[t1-1][t2+1]) 
                        lenTemp++;
                    else{ 
                        if (maxTemp < lenTemp)     
                            maxTemp = lenTemp; 
                        lenTemp = 1;
                    }
                    t1++;t2--;
                }
                if (maxTemp < lenTemp) 
                    maxTemp = lenTemp;

                if(maxlen<maxTemp)
                    maxlen=maxTemp;  
            }
            //======right side ====
        }
    }
    cout<<"The length of longest sorted component in given matrix is: "<<maxlen<<"\n";
    return 0;
}
