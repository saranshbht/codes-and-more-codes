class Problem2 {
	public static void main(String args[]) {
		int a = 1, b = 2;
		int c = 0, sum = b;
		while (c <= 4000000) {
			c = a + b;
			if (c % 2 == 0) {
				sum += c;
			}
			a = b;
			b = c;
		}
		System.out.println(sum);
	}
}
