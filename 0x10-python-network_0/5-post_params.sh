#!/bin/bash
# Bash script that sends a POST request
curl -sd "email=hr@holbertonschool.com&subject=I will always be here for PLD" "$1"
