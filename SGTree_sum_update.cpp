class SGTree {
	public:
	vector<int> tree;
	
	SGTree(int n){
		tree.resize(4*n+1);
	}
	void build(int ind,int tl,int tr,vector<int>&v){
		if(tl==tr){
			tree[ind]=v[tl];
		}else{
			int tm=tl+(tr-tl)/2;
			build(2*ind,tl,tm,v);
			build(2*ind+1,tm+1,tr,v);
			tree[ind]= tree[2*ind]+tree[2*ind+1];
		}
	}
	
	int query(int ind,int tl,int tr,int l,int r){
		//complete overlap
		if(l>r)return 0;
		if(l==tl and r==tr)return tree[ind];
		int tm = tl +(tr-tl)/2;
		int left = query(2*ind,tl,tm,l,min(r,tm));
		int right= query(2*ind+1,tm+1,tr,max(l,tm+1),r);
		return left+right;
	}
	
	void update(int ind,int tl,int tr,int pos,int new_val){
		if(tl==tr){
			tree[ind]=new_val;
		}else{
			int tm=tl+ (tr-tl)/2;
			if(pos <= tm)update(2*ind,tl,tm,pos,new_val);
			else update(2*ind+1,tm+1,tr,pos,new_val);
			
			tree[ind] = tree[2*ind]+tree[2*ind+1];
		}
	}
};

// =================================================always remove all _print() debug statements=============================================
void solve(){
		int n,q;
		cin>>n>>q;
		vector<int>v(n);
		cin>>v;
		
		// for(auto val:v)cout<<val<<" ";
		// cout<<nl;
		// int tree[4*n]={0};
		
		SGTree sg(n);
		
		sg.build(1,0,n-1,v);
		while(q--){
			int type;cin>>type;
			if(type==1){
				int i,x;
				cin>>i>>x;
				sg.update(1,0,n-1,i,x);
			}else if(type==2){
				int l,r;cin>>l>>r;
				r--;
				int ans=sg.query(1,0,n-1,l,r);
				cout<<ans<<nl;
			}
		}
		
		// for(auto val:tree)cout<<val<<" ";
		// for(auto val:sg1.seg){
			// cout<<val<<" ";
		// }
     //Always clear global data structures after each tc
     //Typecast v.size() as (int)v.size()
}
