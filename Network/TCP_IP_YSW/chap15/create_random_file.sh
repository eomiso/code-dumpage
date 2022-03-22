# create file size of 300MB
base64 /dev/urandom | head -c "$1" > random.txt
