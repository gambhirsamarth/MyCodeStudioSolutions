import java.util.* ;
import java.io.*; 

class Solution {

	public static long Pow(int X, int N) {
		if(N==0) return 1;
		long partialAns = Pow(X,N-1);
		return partialAns * X;
	}
}
