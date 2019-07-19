/*バブルソート(bubble sort)
　隣り合う数値を比較してソートを行う。計算量はO(n^2)
　ゲームへの応用例：少人数戦闘を行うRPGでの攻撃順位の決定
 */
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;//データの個数
    cin>>n;
    int data[n];//各データの数値
    int flag[n];//ソート済みの判定フラグ変数
    int relay;//数値入れ換えの中継をする変数
    //int m =n;
    for(int i=0;i<n;i++){
        
        cin >> data[i];
        //flag[i]=0;
    }
    //ソートする
    for (int j=0;j<n;j++){
        for(int i=1;i<n;i++){

            if(data[i-1]>=data[i]){
                //if(flag[i]==1){
                   // break;
                //}
                relay = data[i-1];
                data[i-1]=data[i];
                data[i]=relay;
            }
            
           
     
        }
    }
    
    //表示する
    for(int i=0;i<n;i++){
        cout << data[i] <<" ";
    }

}
