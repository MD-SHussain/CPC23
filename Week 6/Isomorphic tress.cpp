bool isomorphic(tree* p,tree* q)
{
    unordered_map<int,int> m;
    vector<int> level;
    queue<tree*> q1, q2;
    q1.push(p);
    q2.push(q);
    int l=0,n;
    while (!q1.empty() && !q2.empty()) 
    {
    if (q1.size()!=q2.size())
        return false;

    
    level.clear();
    m.clear();
    n=q1.size();
    l++;
    while (n) 
    {
    tree* f1=q1.front();
    tree* f2=q2.front();
    q1.pop();
    q2.pop();
    m[f1->data]++;
    level.push_back(f2->data);
    if (f1->left) q1.push(f1->left);
    if (f1->right) q1.push(f1->right);
    if (f2->left)  q2.push(f2->left);
    if (f2->right)  q2.push(f2->right);
    n--;
    }

    for(int i=0;i<level.size();i++) 
    {
     if(m.find(level[i])==m.end()) return false;
    else 
    {
        m[level[i]]--;
        if (m[level[i]]<0) return false;
        else if(m[level[i]]==0)
            m.erase(i);
    }
    }

    if (m.size()!=0)
        return false;
    }
    return true;
}