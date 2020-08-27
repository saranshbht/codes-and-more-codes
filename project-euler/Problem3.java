class Problem3 {
	public static void main(String args[]) {
		long a = 600851475143l;
		if (a % 2 == 0) {
			a /= 2;
		}
		for (long i = 3; i <= (long)Math.sqrt(a); i += 2) {
			if (a % i == 0) {
				a /= i;
			}

		}
		if (a > 2) {
			System.out.println(a);
		}
	}
}