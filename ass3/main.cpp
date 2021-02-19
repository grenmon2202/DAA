#include <bits/stdc++.h> 

using namespace std; 

struct Heap{ 
    vector<int> v; 
    int n;
    Heap(int i = 0) : n(i){ 
        v = vector<int>(n); 
    } 
};

int leftChild(int i){ 
    return 2*i+1; 
}

int rightChild(int i){ 
    return 2*i+2; 
} 

  

int fun(Heap &h, int k){ 
    priority_queue<pair<int, int> > p; 
    p.push(make_pair(h.v[0], 0)); 
    for (int i = 0; i < k - 1; ++i){ 
        int j = p.top().second; 
        p.pop(); 
        int l = leftChild(j), r = rightChild(j); 
        if (l < h.n) 
            p.push(make_pair(h.v[l], l)); 
        if (r < h.n) 
            p.push(make_pair(h.v[r], r)); 
    } 
    return p.top().first; 
}

int main(){ 
    
    int n;
    cin>>n;
    Heap h(n); 
    vector <int> temp;
    int no;
    for (int i = 0; i<n; i++){
        cin>>no;
        temp.push_back(no);
    }
    h.v=temp;
    int k;
    cin>>k;
    cout << fun(h, k);
    return 0; 
}