#include <iostream>
#include <cmath>
using namespace std;

int lettertocipher(char x) {
    if(x=='A') return 1;
    else if(x=='B') return 2;
    else if(x=='C') return 3;
    else if(x=='D') return 4;
    else if(x=='E') return 5;
    else if(x=='F') return 6;
    else if(x=='G') return 7;
    else if(x=='H') return 8;
    else return 0;
}

int main() {
    string q,r,k;
    cin>>q>>r>>k;
    int qx=lettertocipher(q[0])-1,qy=q[1]-'0'-1;
    int rx=lettertocipher(r[0])-1,ry=r[1]-'0'-1;
    int kx=lettertocipher(k[0])-1,ky=k[1]-'0'-1;
    bool board[8][8]={false};
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            int dx=j-qx,dy=i-qy;
            if(dx*dx==dy*dy||dx==0||dy==0) board[i][j]=true;
        }
    }
    for(int i=0;i<8;i++) {
        board[ry][i]=true;
        board[i][rx]=true;
    }
    int moves[8][2]={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
    for(auto& m : moves) {
        int x=kx+m[0],y=ky+m[1];
        if(x>=0&&x<8&&y>=0&&y<8) board[y][x]=true;
    }
    board[qy][qx]=false;
    board[ry][rx]=false;
    board[ky][kx]=false;
    int count=0;
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            if(board[i][j]) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
