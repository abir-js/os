read -p "Enter range: " num
sum=0
for(( i=1; i<=num; i++ )); do
    ((sum+=i))
done

echo $sum