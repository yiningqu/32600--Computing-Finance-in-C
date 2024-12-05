#include <iostream>
#include "add.h"
#include "min_max.h"
#include "swap.h"
using std::cout;
using std::endl;

int main() {
    //注意事项！！！！！！： template不能分成header和cpp file只能放在header file里面

    //有些时候自动知道type有些时候需要手动告诉系统
    double res1 = add(1,2);
    double res2 = add<double>(1,1.2);
    double value = add<double, int, double>(2,3.1);
    cout << res1 << res2 << value << endl;

    double max_val = max(2.3, 4.6);
    cout << max_val << endl;

    double min_val = min(2.3, 4.6);
    cout << min_val << endl;

    int a = 2;
    int b = 3;
    cout << a << b << endl;
    swap(a,b);
    cout << a << b << endl;

}
