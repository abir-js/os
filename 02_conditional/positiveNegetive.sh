read -p "Enter a number: " num

# if [ $num -gt 0 ]; then
#     echo "Positive"
# else
#     echo "Negetive"
# fi


if (( (num > 0) )); then
    echo Positive
else 
    echo Negetive
fi