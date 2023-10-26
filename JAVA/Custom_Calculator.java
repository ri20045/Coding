class InvalidInputException extends Exception {
    public InvalidInputException(String message) {
        super(message);
    }
}

class CannotDivideByZeroException extends Exception {
    public CannotDivideByZeroException(String message) {
        super(message);
    }
}

class MaxInputException extends Exception {
    public MaxInputException(String message) {
        super(message);
    }
}

class MaxMultiplierReachedException extends Exception {
    public MaxMultiplierReachedException(String message) {
        super(message);
    }
}

class CustomCalculator {
    public int add(int a, int b) throws InvalidInputException, MaxInputException {
        if (a > 100000 || b > 100000) {
            throw new MaxInputException("Input exceeds the maximum allowed value.");
        }
        return a + b;
    }

    public int subtract(int a, int b) throws InvalidInputException, MaxInputException {
        if (a > 100000 || b > 100000) {
            throw new MaxInputException("Input exceeds the maximum allowed value.");
        }
        return a - b;
    }

    public int multiply(int a, int b) throws InvalidInputException, MaxInputException, MaxMultiplierReachedException {
        if (a > 100000 || b > 100000) {
            throw new MaxInputException("Input exceeds the maximum allowed value.");
        }
        if (a > 7000 || b > 7000) {
            throw new MaxMultiplierReachedException("Multiplier exceeds the maximum allowed value.");
        }
        return a * b;
    }

    public int divide(int a, int b) throws InvalidInputException, MaxInputException, CannotDivideByZeroException {
        if (a > 100000 || b > 100000) {
            throw new MaxInputException("Input exceeds the maximum allowed value.");
        }
        if (b == 0) {
            throw new CannotDivideByZeroException("Cannot divide by zero.");
        }
        return a / b;
    }
}

public class code {
    public static void main(String[] args) {
        CustomCalculator calculator = new CustomCalculator();

        try {
            int result = calculator.add(50000, 60000);
            System.out.println("Addition Result: " + result);
        } catch (InvalidInputException | MaxInputException e) {
            System.err.println("Exception: " + e.getMessage());
        }

        try {
            int result = calculator.subtract(150000, 20000);
            System.out.println("Subtraction Result: " + result);
        } catch (InvalidInputException | MaxInputException e) {
            System.err.println("Exception: " + e.getMessage());
        }

        try {
            int result = calculator.multiply(8000, 9000);
            System.out.println("Multiplication Result: " + result);
        } catch (InvalidInputException | MaxInputException | MaxMultiplierReachedException e) {
            System.err.println("Exception: " + e.getMessage());
        }

        try {
            int result = calculator.divide(200000, 0);
            System.out.println("Division Result: " + result);
        } catch (InvalidInputException | MaxInputException | CannotDivideByZeroException e) {
            System.err.println("Exception: " + e.getMessage());
        }
    }
}
