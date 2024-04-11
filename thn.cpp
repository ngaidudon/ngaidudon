#include <iostream>
using namespace std;
void thapHaNoi(int n, char cotDau, char cotTrungGian, char cotDich) {
    if(n == 1){
        cout << "Di chuyen dia thu " << n << " tu cot " << cotDau << " toi cot " << cotDich << endl;
    }
    if(n == 2){
        cout << "Di chuyen dia thu " << n-1 << " tu cot " << cotDau << " toi cot " << cotTrungGian<< endl;
        cout << "Di chuyen dia thu " << n << " tu cot " << cotDau<< " toi cot " << cotDich << endl;
        cout << "Di chuyen dia thu " << n-1 << " tu cot " << cotTrungGian << " toi cot " << cotDich << endl;
    }
    else{
        thapHaNoi(n-1, cotDau, cotDich, cotTrungGian);
        cout << "Di chuyen dia thu " << n << " tu cot " << cotDau << " toi cot " << cotDich<< endl;
        thapHaNoi(n-1, cotTrungGian, cotDau, cotDich);
    }
}
int main(){
    int n;
    cin >> n;
    thapHaNoi(n, 'A', 'B', 'C');
}