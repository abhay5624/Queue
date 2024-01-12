#include<bits/stdc++.h>
using namespace std;
void Display(queue <int> qe){
while (!qe.empty())
{
    cout << qe.front() << " ";
    qe.pop();
}
cout << endl;
}
void Reverse(queue <int> &qe,int k,int count){
if(count==k-1){
    return;
}
int n = qe.front();
qe.pop();
Reverse(qe, k, ++count);
qe.push(n);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    queue<int> qe;
    qe.push(20);
    qe.push(21);
    qe.push(22);
    qe.push(23);
    qe.push(24);
    qe.push(25);
    qe.push(26);
    qe.push(27);
    qe.push(28);
    qe.push(29);
    Display(qe);
    Reverse(qe, 3, 0);
    Display(qe);
    return 0;
}
