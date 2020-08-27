class Problem9 {
	public static void main(String args[]) {
		int i = 0, j = 0, k = 0;
		Outer: for (i = 1; i <= 995; i++) {
			for (j = i + 1; j <= 996; j++) {
				for (k = j + 1; k <= 997; k++) {
					if (i + j + k == 1000 && i * i + j * j == k * k) {
						break Outer;
					}
				}
			}
		}
		System.out.println(i + " " + j + " " + k);
		System.out.println(i * j * k);
	}
}
