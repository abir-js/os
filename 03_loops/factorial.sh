read -p "Enter a number: " num

fact=1

# for(( i=1; i<=num; i++ )); do
#     ((fact*=i))
# done
i=1
while(( i<=num )); do
    ((fact*=i))
    ((i++))
done

echo $fact