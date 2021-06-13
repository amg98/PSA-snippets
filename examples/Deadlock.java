// ./infer-linux64-v1.1.0/bin/infer --racerd -- javac ./examples/Deadlock.java
class Deadlock {

    Object lockA = new Object();
    Object lockB = new Object();
    
    public void lockAThenB() {
        synchronized(lockA) {
            synchronized(lockB) {
                // do something with both resources
            }
        }
    }

    public void lockBThenA() {
        synchronized(lockB) {
            synchronized(lockA) {
            // do something with both resources
            }
        }
    }
}