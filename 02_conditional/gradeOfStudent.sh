read -p "Enter grade: " grade

# if [ $grade -gt 90 ]; then
#     echo A
# elif [[ $grade -gt 80 && $grade -lt 90 ]]; then
#     echo B
# elif [[ $grade -gt 70 && $grade -lt 80 ]]; then
#     echo C
# else echo Failed
# fi

if ((grade > 90)); then
    echo A
elif ((grade >= 80 && grade < 90)); then
    echo B
elif ((grade >= 70 && grade < 80)); then
    echo C
else echo Failed
fi