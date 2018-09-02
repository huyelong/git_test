#include<iostream>
using namespace std;
int main(){
    cout<<"ÄãºÃ"<<endl;
    cout<<"hello,world"<<endl;
    int a = 1,b =2;
    swap(a,b);
    cout <<a<<b<<endl;
    return 0;
}
void swap(int &ref_a,int &ref_b){
    cout<<"swap function"<<endl;
    int temp = a;
    a = b;
    b = temp
}