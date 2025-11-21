read -p "Enter character: " input_char

# Check if the entered character is a vowel or consonant
case $input_char in
    a|A|e|E|i|I|o|O|u|U)
        echo Vowel
        ;;
    *)
        echo Consonant
        ;;
esac