ifconfig -a | grep "ether" | tr -s " " | cut -d" " -f3
