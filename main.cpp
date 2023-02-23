#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int total_budget = 0;
    int n; ///люди
    cin >> n; cin.ignore();
    vector<int>vec(n);
    int c; ///цена подарка
    cin >> c; cin.ignore();
    for (int i = 0; i < n; i++) {
        int b; ///бюджет i-го человека
        cin >> b; cin.ignore();
        vec[i] = b;
        total_budget += b;
    }
    if (total_budget < c){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    sort(vec.begin(),vec.end());

    int m = n; ///кол-во людей, которое скидывается на текущей итерации


    for(int i = 0; i < n; i++){
        int average_cost = c/m;
        if (vec[i] < average_cost){
            cout<<vec[i]<<endl;
            c -= vec[i];
        }
        else{
            cout<<average_cost<<endl;
            c -= average_cost;
        }
        m--;
    }

}