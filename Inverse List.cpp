#include <iostream>
#include <vector>

using namespace std;

// دالة للتحقق مما إذا كانت القائمة معكوسة أم لا
bool isInverse(const vector<int>& lst) {
    int n = lst.size();
    vector<int> inverseList(n);

    // حساب القائمة المعكوسة
    for (int i = 0; i < n; ++i) {
        inverseList[lst[i] - 1] = i + 1;
    }

    // مقارنة القائمة المعطاة بالقائمة المعكوسة
    return lst == inverseList;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> lst(n);

        for (int i = 0; i < n; ++i) {
            cin >> lst[i];
        }

        if (isInverse(lst)) {
            cout << "inverse" << endl;
        }
        else {
            cout << "not inverse" << endl;
        }
    }

    return 0;
}
