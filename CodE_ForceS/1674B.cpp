// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// 	cin>>t;

// 	while(t--)
// 	{
// 		string s[700]={	"ab","ac","ad","ae","af","ag","ah","ai","aj","ak","al","am","an","ao","ap","aq","ar","as","at","au","av","aw","ax","ay","az",

// 					   	"ba","bc","bd","be","bf","bg","bh","bi","bj","bk","bl","bm","bn","bo","bp","bq","br","bs","bt","bu","bv","bw","bx","by","bz",

// 					   	"ca","cb","cd","ce","cf","cg","ch","ci","cj","ck","cl","cm","cn","co","cp","cq","cr","cs","ct","cu","cv","cw","cx","cy","cz",

// 					   	"da","db","dc","de","df","dg","dh","di","dj","dk","dl","dm","dn","do","dp","dq","dr","ds","dt","du","dv","dw","dx","dy","dz",

// 						"ea","eb","ec","ed","ef","eg","eh","ei","ej","ek","el","em","en","eo","ep","eq","er","es","et","eu","ev","ew","ex","ey","ez",

// 						"fa","fb","fc","fd","fe","fg","fh","fi","fj","fk","fl","fm","fn","fo","fp","fq","fr","fs","ft","fu","fv","fw","fx","fy","fz",

// 						"ga","gb","gc","gd","ge","gf","gh","gi","gj","gk","gl","gm","gn","go","gp","gq","gr","gs","gt","gu","gv","gw","gx","gy","gz",

// 						"ha","hb","hc","hd","he","hf","hg","hi","hj","hk","hl","hm","hn","ho","hp","hq","hr","hs","ht","hu","hv","hw","hx","hy","hz",

// 						"ia","ib","ic","id","ie","if","ig","ih","ij","ik","il","im","in","io","ip","iq","ir","is","it","iu","iv","iw","ix","iy","iz",

// 						"ja","jb","jc","jd","je","jf","jg","jh","ji","jk","jl","jm","jn","jo","jp","jq","jr","js","jt","ju","jv","jw","jx","jy","jz",

// 						"ka","kb","kc","kd","ke","kf","kg","kh","ki","kj","kl","km","kn","ko","kp","kq","kr","ks","kt","ku","kv","kw","kx","ky","kz",

// 						"la","lb","lc","ad","le","lf","lg","lh","li","lj","lk","lm","ln","lo","lp","lq","lr","ls","lt","lu","lv","lw","lx","ly","lz",

// 						"ma","mb","mc","md","me","mf","mg","mh","mi","mj","mk","ml","an","mo","mp","mq","mr","ms","mt","mu","mv","mw","mx","my","mz",

// 						"na","nb","nc","nd","ne","nf","ng","nh","ni","nj","nk","nl","nm","no","np","nq","nr","ns","nt","nu","nv","nw","nx","ny","nz",

// 						"oa","ob","oc","od","oe","of","og","oh","oi","oj","ok","ol","om","on","op","oq","or","os","ot","ou","ov","ow","ox","oy","oz",

// 						"pa","pb","pc","pd","pe","pf","pg","ph","pi","pj","pk","pl","pm","pn","po","pq","pr","ps","pt","pu","pv","pw","px","py","pz",

// 						"qa","qb","qc","qd","qe","qf","qg","qh","qi","qj","qk","ql","qm","qn","qo","qp","qr","qs","qt","qu","qv","qw","qx","qy","qz",

// 						"ra","rb","rc","rd","re","rf","rg","rh","ri","rj","rk","rl","rm","rn","ro","rp","rq","rs","rt","ru","rv","rw","rx","ry","rz",

// 						"sa","sb","sc","sd","se","sf","sg","sh","si","sj","sk","sl","sm","sn","so","sp","sq","sr","st","su","sv","sw","sx","sy","sz",

// 						"ta","tb","tc","td","te","tf","tg","th","ti","tj","tk","tl","tm","tn","to","tp","tq","tr","ts","tu","tv","tw","tx","ty","tz",

// 						"ua","ub","uc","ud","ue","uf","ug","uh","ui","uj","uk","ul","um","un","uo","up","uq","ur","us","ut","uv","uw","ux","uy","uz",
						
// 						"va","vb","vc","vd","ve","vf","vg","vh","vi","vj","vk","vl","vm","vn","vo","vp","vq","vr","vs","vt","vu","vw","vx","vy","vz",

// 						"wa","wb","wc","wd","we","wf","wg","wh","wi","wj","wk","wl","wm","wn","wo","wp","wq","wr","ws","wt","wu","wv","wx","wy","wz",

// 						"xa","xb","xc","xd","xe","xf","xg","xh","xi","xj","xk","xl","xm","xn","xo","xp","xq","xr","xs","xt","xu","xv","aw","xy","xz",

// 						"ya","yb","yc","yd","ye","yf","yg","yh","yi","yj","yk","yl","ym","yn","yo","yp","yq","yr","ys","yt","yu","yv","yw","yx","yz",

// 						"za","zb","zc","zd","ze","zf","zg","zh","zi","zj","zk","zl","zm","zn","zo","zp","zq","zr","zs","zt","zu","zv","zw","zx","zy",
// 																																						};

// 					string hh;
					
// 					cin>>hh;
// 					ll res=0;
// 					for(ll i=0;i<700;i++)
// 					{
// 						if(hh==s[i])
// 						{
// 							res=i+1;
// 						}
// 					}
// 					cout<<res<<endl;
// 					res=0;


		
		

// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<string>vc;
int main()
{
	string s[700];
	for(ll i=0;i<=25;i++)
	{
		string p,m;
		 p='a'+i;
		for(ll j=0;j<=25;j++)
		{
			if(i==j)continue;

			m='a'+j;
			string ss=p+m;
			vc.push_back(ss);
		}
	}

	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll cnt=0;
		for(ll i=0;i<vc.size();i++)
		{
			if(s==vc[i])
			{
				cnt=i+1;
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}