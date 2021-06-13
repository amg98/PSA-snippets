// ./infer-linux64-v1.1.0/bin/infer --pulse -- gcc ./examples/VariableEscape.c

int *foo() {
    int x = 42;
    return &x;
}

int main() {
    foo();
}
