read -p "Enter Year: " year

# if [[ $((year%400)) -eq 0 ]]; then
#     echo "Leap Year"
# elif [[ $((year%100)) -eq 0 ]]; then
#     echo "Not leap year"
# else 
#     echo "Leap year"
# fi


# if [[ $((year%400)) -eq 0 ]] || [[ $((year%4)) -eq 0 && $((year%100)) -ne 0 ]]; then
#     echo "Leap year"
# else
#     echo "not leap year"
# fi


if (((year%400 == 0 || (year%4==0 && year%100!=0)))); then
echo "Leap year"
else 
echo "Not Leap year"