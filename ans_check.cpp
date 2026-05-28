#include<bits/stdc++.h>
using namespace std;

int Collatz(int n){
	if(n % 2 == 0){
		return n / 2;
	}else{
		return n * 3 + 1;
	}
}

int main(){
  int max_ans = -1;
  int max_M = -1;
  for(int i = 1; i <= 3000; i++){
    int n = i;
    n = Collatz(n);
    int ans = 1;
    int M = n;

    while (n != 1) {
      n = Collatz(n);
      M = max(M, n);
      ++ans;
    }

    max_ans = max(max_ans, ans);
    max_M = max(max_M, M);
    cout << i << ":" << ans << "(max:" << M << ")" << "\n";
  }

  cout << "max_ans:" << max_ans << "\n";
  cout << "max_M:" << max_M << "\n";
	return 0;
}
