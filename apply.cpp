int apply_op(int num1, int num2, char op) {
	switch (op) {
		case '*':
			return (num1 * num2);
			break;
		case '/':
			return (num1 / num2);
			break;
		case '+':
			return (num1 + num2);
			break;
		case '-':
			return (num1 - num2);
			break;

	}
	return 0;
}

