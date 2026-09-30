public class Main {
    public static void main(String[] args) {

        int[] numbers = {2, 4, 6, 8, 12};

        int[] newNumbers = new int[numbers.length + 1];

        for (int i = 0; i < numbers.length; i++) {
            newNumbers[i] = numbers[i];
        }

        newNumbers[numbers.length] = 10;

        for (int i = 0; i < newNumbers.length; i++) {
            System.out.print(newNumbers[i] + " ");
        }
    }
}