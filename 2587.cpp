#include<iostream>
#include<algorithm>
using namespace std;

int sum(int s[]);

int main(void){
    int i,input[5],mid,avg;

    for(i=0;i<5;i++){
        scanf("%d",&input[i]);
    }

    sort(input , input+5);

    mid = input[2];

    avg = sum(input)/5;

    cout << avg << endl;
    cout << mid << endl;

    return 0;
}

int sum(int s[]){
    int i,res;
    res = 0;

    for(i=0;i<5;i++){
        res += s[i];
    }

    return res;
}