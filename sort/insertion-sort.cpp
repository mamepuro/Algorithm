/*挿入ソート(insertion sort)
最初に一番左の要素をソート済みにし、ソート済みの要素と自身を比較して、自身より小さい要素が現れるor自身が一番左に移動するでソート済みにする。
最悪の計算量は、O(n^2)で、少ない要素数でのソートなら有効。
計算量自体はバブルソートと変わらないが、データの比較回数が挿入ソートの方が少ない。（バブルソートは必ず全てのデータを比較するが挿入ソートはそうでない）
応用例:RPGゲーム等の攻撃順番決定や味方パーティの攻撃力などのパラメータによるソート
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;//データの個数
    cin >> n;
    int data[n];//各データの値
    int relay;//値交換のパラメータ
    //データの入力
    for(int i=0;i<n;i++){
        cin >> data[i];
    }

    //ソートをする
    for(int i=1;i<n;i++){
        int j=i;
        while((j>0) && (data[j-1]> data[j])){
            relay = data[j-1];
            data[j-1]=data[j];
            data[j]=relay;
            j=j-1;
        }
    }
    //表示する
    for(int i=0;i<n;i++){
        cout << data[i] << " ";
    }


}