// ./infer-linux64-v1.1.0/bin/infer run -- javac ./examples/NullAssign.java
class Hello {
  int test() {
    String s = null;
    return s.length();
  }
}
