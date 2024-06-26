#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define nl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}


bool possible(vector<int> arr, int mid, int k, int n){


    int possibleDivision  =1;
    int workloadSofar  = 0;


    for(int i=0; i < n; i++){

        if(workloadSofar + arr[i] <= mid ){
            workloadSofar += arr[i];
        }else{
            possibleDivision++;
            workloadSofar = 0;
            workloadSofar = arr[i];

        }



    }

    return possibleDivision <= k;

}



int solve(vector<int> arr, int n, int k){


    int start  = 0;
    int end = 1e6;
    int ans  =  1e6;

    while(start <= end){

        int mid  = (start + end)/2;

        debug(mid);


        if(possible(arr, mid, k, n)){

            ans = mid;
            end = mid -1;

        }else{

            start  =  mid+1;

        }


    }




}

//9 3
//10 20 30 40 90 60 70 80 50

//ans : 190

int main() {

    fastio();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    int n, k;
    cin>> n >> k;

    vector<int> arr(n);

    for(int i=0; i < n; i++){
        cin>> arr[i];
    }

    int res  =  solve(arr, n, k);
    cout<< res << nl;

   
   
}