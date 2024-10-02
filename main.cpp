#include <iostream>

using namespace std;

int main() {
    float Size_pack_web, Price_def, Price_over, Next_Volume;
    cin >> Price_def >> Size_pack_web >> Price_over >> Next_Volume;
    if (Next_Volume >= Size_pack_web) {
        Price_def += Price_over * (Next_Volume - Size_pack_web);

    }
    cout << Price_def << endl;


    return 0;
}