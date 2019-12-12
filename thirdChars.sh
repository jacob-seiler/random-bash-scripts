for var in $*; do
    LEN=${#var}
    if [[ $LEN > 2 ]]; then
        echo ${var:2:1}
    fi
done