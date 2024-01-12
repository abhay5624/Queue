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

void reverse(queue <int> &qe){
   if(qe.empty()){
       return;
   }
   int n = qe.front();
   qe.pop();
   reverse(qe);
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
    cout << "size is " << qe.size() << endl;
    Display(qe);
    reverse(qe);
    Display(qe);
    return 0;
}
