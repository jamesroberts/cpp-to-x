public class Main {

    static { System.loadLibrary("cpp-to-java"); }

    public native String hello();

    public static void main(String[] args) {
        try {
            System.out.println("This is in Java");
            String result = new Main().hello();
            System.out.println(result);
        } catch (Exception ex) {
            System.out.println(ex);
        }
    }
}