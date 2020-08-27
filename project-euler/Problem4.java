class Problem4 {
	public static void main(String args[]) {
		int i = 999;
		int j = 0;
		int product = 0;
		for (i = 999; i >= 100; i--) {
			for (j = i; j >= 100; j--) {
				StringBuffer str = new StringBuffer(String.valueOf(i * j));
				//System.out.println(str.reverse());
				if (String.valueOf(str).equals(String.valueOf(str.reverse()))) {
					if (Integer.parseInt(String.valueOf(str)) > product) {
						product = Integer.parseInt(String.valueOf(str));
					}
				}
			}
		}

		System.out.println(product);
	}
}