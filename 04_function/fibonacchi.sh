fibonacchi() {
    a=0
    b=1
    for ((i=1; i<=$1; i++)); do
        echo -n "$a "
        c=$((a + b))
        a=$b
        b=$c
    done
}

fibonacchi 5

fibo() {
    a=0
    b=1
    for ((i=1; i<=$1; i++)); do
        echo -n "$a "
        c=$((a + b))
        a=$b
        b=$c
    done
}

fibo 10
