ifconfig | grep ether -w | sed 's/ether //' | sed 's/ //' | tr -d " \t\r"
