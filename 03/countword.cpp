#include "bits/stdc++.h"

using namespace std;

int main() {
    string word, sentence, eachword[1000];
    int cnt = 0, j = 0;
    getline(cin,word);
    getline(cin,sentence);
    for(int i = 0 ; i < sentence.size(); i++){
        if((sentence[i]>='A'&&sentence[i]<='Z') || (sentence[i]>='a'&& sentence[i]<='z')) {
            eachword[j] += sentence[i];
            
        }
        else {
            j++;
            continue;
        }
    }
    for(int i = 0 ; i <= j ; i++){
        string checkpoint = "";
        string w = eachword[i];
        for(int k = 0 ; k < w.size() ; k++){
            if((w[k]>='A'&&w[k]<='Z') || (w[k]>='a'&& w[k]<='z')){
                checkpoint += w[k];
            }
        }
        if(word==checkpoint){
            //cout << i << ' ';
            cnt++;
        }
        //cout << eachword[i] << ' ' << i << endl;
    }
    cout << cnt;
}
