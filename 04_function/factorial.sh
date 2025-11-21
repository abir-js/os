factorial() {
    local num=$1
    local fact=1
    for (( i=1; i<=num; i++ )); do
        ((fact*=i))
    done

    echo "$fact"
}

read -p "Enter number: " num
factorial "$num"