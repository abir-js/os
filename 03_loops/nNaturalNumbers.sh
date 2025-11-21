read -p "Enter a number: " n

# for ((i=1; i<=n; i++)); do
#     echo $i
# done

count=1
while (( count <= n )); do
    echo $count
    ((count++))
done 