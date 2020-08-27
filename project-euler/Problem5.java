class Problem5 {
	static long gcd(long a, long b) {
		if (b > a) {
			long tmp = a;
			a = b;
			b = tmp;
		}
		if (b == 0) {
			return a;
		} else {
			return gcd(b, a % b);
		}
	}

	static long lcm(long a, long b) {
		return a * b / gcd(a, b);
	}

	public static void main(String args[]) {
		long lc = 1;
		for (long i = 2; i <= 20; i++) {
			lc = lcm(lc, i);
		}
		System.out.println(lc);
	}
}
