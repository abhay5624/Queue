#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int n){
        this->size = n;
        this->arr = new int[n];
        this->front = this->rear = -1;
    }
    void push_back(int n){
        if(this->rear=this->front==-1){
            this->rear = this->front = 0;
        }else if(this->rear==(this->size-1)&& this->front!=-1){
            this->rear = 0;
        }else if((this->rear==(this->size-1)&& this->front==-1) || (this->rear+1)==this->front){
            cout << "Queue is full";
            return;
        }else{
            this->rear++;
        }
        this->arr[this->rear] = n;
    }
    void push_front(int n ){
        if(this->rear=this->front==-1){
            this->rear = this->front = 0;
        }else if(this->front==-1&&this->rear!=(this->size-1)){
            this->front = this->size - 1;
        }else if((this->rear==(this->size-1)&& this->front==-1) || (this->rear+1)==this->front){
            cout << "Queue is full";
            return;
        }else{
            this->front--;
        }
        this->arr[this->front] = n;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    return 0;
}
