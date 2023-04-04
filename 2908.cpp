#include <iostream>
using namespace std;

int reverse_number(int a);
int big_number(int a,int b);

int main(void){
    int a,b;

    scanf("%d %d",&a,&b);

    cout << big_number(reverse_number(a),reverse_number(b)) << endl;

    return 0;

}

int reverse_number(int a){
    int fir,sec,th;

    fir = a / 100;
    th = a % 10;
    sec = (a - (fir*100))/10;

    a = 100*th + 10*sec + fir;

    return a;
}

int big_number(int a,int b){
    if (a > b){
        return a;
    }

    else{
        return b;
    }
}
