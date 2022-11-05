#include<iostream>
#include<iterator>
#include<set>
#include<vector>
using namespace std;

struct number
{
    int n;
    int sum;
};

int main(){
    int n;
    cin >> n;
    vector<number> num(n);
    set<int> s;
    for(int i = 0; i < n ; i++){
        cin >> num[i].n;
        while(num[i].n != 0){
            num[i].sum += num[i].n % 10;
            num[i].n /= 10;
        }
        s.insert(num[i].sum);
    }
    cout << s.size() <<endl;
    int max = *(--s.end());
    s.erase(--s.end());//为了最后没有空格，所以把它单独输出
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    cout << max;
    return 0;
}