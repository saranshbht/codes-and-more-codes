class Problem7 {
	static boolean isPrime(int a) {
		for (int i = 2; i <= Math.sqrt(a); i++) {
			if (a % i == 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String args[]) {
		int count = 0, i;
		for (i = 2;; i++) {
			if (isPrime(i)) {
				count++;
			}
			if (count == 10001) {
				break;
			}
		}
		System.out.println(i);
	}
}
