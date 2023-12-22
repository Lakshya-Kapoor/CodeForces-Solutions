# include <bits/stdc++.h>
using namespace std;
long long distance(pair<long long, long long>& p1, pair<long long, long long>& p2){
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}
/* The idea of my program was to find the nearest major city to A and then travel to the major city nearest to B
*  This minimises the cost as travelling between major cities is free. We then compare the cost to go through these
* major cities with the cost to directly travel from A to B. 
* NOTE: the minimum cost to travel between 2 cities is in a straight line instead of going through other cities
*/
int main(){
    long long t, n, k, a, b;
    cin >> t;
    for(t; t > 0; t--){
        vector< pair<long long, long long> > cities; cin >> n >> k >> a >> b;
        a--;
        b--;
        for (n; n > 0; n--){
            pair<long long, long long> p;
            cin >> p.first >> p.second;
            cities.push_back(p);
        }
        // leveraging major cities
        if (k > 1){
            // finding major cities nearest to A and B
            long long nearA, nearB, distA = LONG_LONG_MAX, distB = LONG_LONG_MAX;
            if (a < k)
                distA = 0;
            if (b < k)
                distB = 0;
            if (distA || distB){
                for (long long i = 0; i < k; i++){
                    distA = min(distance(cities[a], cities[i]), distA);
                    distB = min(distance(cities[b], cities[i]), distB);
                }
            }
            cout << min(distA + distB, distance(cities[a],cities[b])) << endl;
        }
        else{
            cout << distance(cities[a], cities[b]) << endl;
        }
    }

}