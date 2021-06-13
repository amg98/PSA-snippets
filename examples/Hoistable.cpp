//infer --loop-hoisting run -- g++ Hoistable.cpp

int foo(int x, int y) {
    return x + y;
}

int main() {
    int x = 10;
    int y = 5;

    for(int i = 0; i < 100; i++) {
        foo(x, y);
    }
}
