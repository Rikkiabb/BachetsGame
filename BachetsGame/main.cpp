#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {

    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
                         
    int n = 0; // Number of stones
    
    while(cin >> n){

        int m = 0; // How many moves are allowed
        cin >> m;
        int arr[m];
        char nOrp[n];
        nOrp[0] = 'p';
        nOrp[1] = 'n';
    
        for(int i = 0; i < m; i++){
        
            int move = 0;
            cin >> move;
            arr[i] = move;
        
        }
    
        for(int i = 2; i <= n; i++){
        
            bool letter = false;
        
            for(int j = 0; j < m; j++){
            
                int move = arr[j];
                int length = i - move;
            
                if(length >= 0){
                
                    if(nOrp[length] == 'p' || length == 0){ // We can get to p so the letter is n
            
                        letter = true;
                        break;
                    
                    }
            
                }
        
            }
        
            if(letter){
            
                nOrp[i] = 'n';
        
            } else {
        
                nOrp[i] = 'p';
        
            }
    
        }

        if(nOrp[n] == 'n'){ // If the first letter is n then we will win
    
            cout << "Stan wins" << endl;
    
        } else {
    
            cout << "Ollie wins" << endl;
    
        }
    }
    return 0;

}
