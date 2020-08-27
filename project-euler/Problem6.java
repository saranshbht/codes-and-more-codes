class Problem6 {
	public static void main(String args[]) {
		long a = 100;
		long sumOfSquares = a * (a + 1) * (2 * a + 1) / 6;
		long sumSquared = (a * (a + 1) / 2) * (a * (a + 1) / 2);
		System.out.println(sumSquared - sumOfSquares);
	}
}