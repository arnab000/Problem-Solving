import java.util.Scanner;
 
public class TaskC {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int q = s.nextInt();
		
		while(q-- > 0) {
			int n = s.nextInt();
			int k = s.nextInt();
			
			long[] v = new long[n];
			long[] a = new long[n];
			long[] b = new long[n];
			long max = 0;
			
			for(int i=0;i<n;i++) {
				a[i] = s.nextLong();
				b[i] = a[i];
				max = Math.max(max, a[i]);
			}
			
			int m = 0;
			
			while(Math.pow(k, m+1) <= max) {
				m++;
			}
			
			//System.out.println(m);
			
			for(int x=m;x>=0;x--) {
				long curr = (long) Math.pow(k,x);
				for(int i=0;i<n;i++) {
					if(b[i] >= curr) {
						b[i] -= curr;
						v[i] += curr;
						break;
					}
				}
			}
			boolean pos = true;
			
			for(int i=0;i<n;i++) {
				if(v[i] != a[i]) {
					pos = false;
					break;
				}
			}
			
			if(pos) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}